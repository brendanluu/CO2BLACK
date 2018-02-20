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

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t1423309490;
// System.Action`1<Mapbox.Platform.Response>
struct Action_1_t4102991197;
// Utils.SerializableVector4
struct SerializableVector4_t3942108960;
// System.Byte[]
struct ByteU5BU5D_t250263739;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t1598536549;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3177702348;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t601917740;
// badCollision
struct badCollision_t1007815740;
// System.Object[]
struct ObjectU5BU5D_t4181569305;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t3399161153;
// System.Void
struct Void_t2367238524;
// System.Char[]
struct CharU5BU5D_t3056575431;
// Utils.serializableARKitInit
struct serializableARKitInit_t2496204220;
// Utils.serializableUnityARMatrix4x4
struct serializableUnityARMatrix4x4_t2471070835;
// Utils.serializablePointCloud
struct serializablePointCloud_t1312981559;
// System.String[]
struct StringU5BU5D_t2379194589;
// System.Int32[]
struct Int32U5BU5D_t632066244;
// Utils.serializableARSessionConfiguration
struct serializableARSessionConfiguration_t2134036775;
// Mapbox.Platform.Response
struct Response_t3757304824;
// Mapbox.Unity.Utilities.HTTPRequest
struct HTTPRequest_t462231443;
// UnityEngine.GameObject
struct GameObject_t2790157070;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t3047845133;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2185221811;
// UnityEngine.Material
struct Material_t1280402239;
// UnityEngine.Transform
struct Transform_t3297798951;
// UnityEngine.Collider
struct Collider_t1018170857;
// UnityEngine.Camera
struct Camera_t24784459;
// UnityEngine.Rigidbody
struct Rigidbody_t1534326339;
// System.Collections.Generic.Dictionary`2<System.Int32,Mapbox.Unity.Utilities.Runnable/Routine>
struct Dictionary_2_t1452874026;
// UnityEngine.XR.iOS.ConnectToEditor
struct ConnectToEditor_t2268165222;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct UnityARSessionNativeInterface_t3588887273;
// UnityEngine.XR.iOS.UnityARAnchorManager
struct UnityARAnchorManager_t3980877334;
// UnityEngine.Networking.PlayerConnection.PlayerConnection
struct PlayerConnection_t2057767320;
// UnityEngine.Texture2D
struct Texture2D_t3616965985;
// UnityEngine.Light
struct Light_t1504321984;




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
#ifndef HTTPREQUEST_T462231443_H
#define HTTPREQUEST_T462231443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.Utilities.HTTPRequest
struct  HTTPRequest_t462231443  : public RuntimeObject
{
public:
	// UnityEngine.Networking.UnityWebRequest Mapbox.Unity.Utilities.HTTPRequest::_request
	UnityWebRequest_t1423309490 * ____request_0;
	// System.Int32 Mapbox.Unity.Utilities.HTTPRequest::_timeout
	int32_t ____timeout_1;
	// System.Action`1<Mapbox.Platform.Response> Mapbox.Unity.Utilities.HTTPRequest::_callback
	Action_1_t4102991197 * ____callback_2;
	// System.Boolean Mapbox.Unity.Utilities.HTTPRequest::_wasCancelled
	bool ____wasCancelled_3;
	// System.Boolean Mapbox.Unity.Utilities.HTTPRequest::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of__request_0() { return static_cast<int32_t>(offsetof(HTTPRequest_t462231443, ____request_0)); }
	inline UnityWebRequest_t1423309490 * get__request_0() const { return ____request_0; }
	inline UnityWebRequest_t1423309490 ** get_address_of__request_0() { return &____request_0; }
	inline void set__request_0(UnityWebRequest_t1423309490 * value)
	{
		____request_0 = value;
		Il2CppCodeGenWriteBarrier((&____request_0), value);
	}

	inline static int32_t get_offset_of__timeout_1() { return static_cast<int32_t>(offsetof(HTTPRequest_t462231443, ____timeout_1)); }
	inline int32_t get__timeout_1() const { return ____timeout_1; }
	inline int32_t* get_address_of__timeout_1() { return &____timeout_1; }
	inline void set__timeout_1(int32_t value)
	{
		____timeout_1 = value;
	}

	inline static int32_t get_offset_of__callback_2() { return static_cast<int32_t>(offsetof(HTTPRequest_t462231443, ____callback_2)); }
	inline Action_1_t4102991197 * get__callback_2() const { return ____callback_2; }
	inline Action_1_t4102991197 ** get_address_of__callback_2() { return &____callback_2; }
	inline void set__callback_2(Action_1_t4102991197 * value)
	{
		____callback_2 = value;
		Il2CppCodeGenWriteBarrier((&____callback_2), value);
	}

	inline static int32_t get_offset_of__wasCancelled_3() { return static_cast<int32_t>(offsetof(HTTPRequest_t462231443, ____wasCancelled_3)); }
	inline bool get__wasCancelled_3() const { return ____wasCancelled_3; }
	inline bool* get_address_of__wasCancelled_3() { return &____wasCancelled_3; }
	inline void set__wasCancelled_3(bool value)
	{
		____wasCancelled_3 = value;
	}

	inline static int32_t get_offset_of_U3CIsCompletedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(HTTPRequest_t462231443, ___U3CIsCompletedU3Ek__BackingField_4)); }
	inline bool get_U3CIsCompletedU3Ek__BackingField_4() const { return ___U3CIsCompletedU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsCompletedU3Ek__BackingField_4() { return &___U3CIsCompletedU3Ek__BackingField_4; }
	inline void set_U3CIsCompletedU3Ek__BackingField_4(bool value)
	{
		___U3CIsCompletedU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPREQUEST_T462231443_H
#ifndef U3CWAITU3EC__ITERATOR0_T525031111_H
#define U3CWAITU3EC__ITERATOR0_T525031111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// loadDelayOutro/<Wait>c__Iterator0
struct  U3CWaitU3Ec__Iterator0_t525031111  : public RuntimeObject
{
public:
	// System.Object loadDelayOutro/<Wait>c__Iterator0::$current
	RuntimeObject * ___U24current_0;
	// System.Boolean loadDelayOutro/<Wait>c__Iterator0::$disposing
	bool ___U24disposing_1;
	// System.Int32 loadDelayOutro/<Wait>c__Iterator0::$PC
	int32_t ___U24PC_2;

public:
	inline static int32_t get_offset_of_U24current_0() { return static_cast<int32_t>(offsetof(U3CWaitU3Ec__Iterator0_t525031111, ___U24current_0)); }
	inline RuntimeObject * get_U24current_0() const { return ___U24current_0; }
	inline RuntimeObject ** get_address_of_U24current_0() { return &___U24current_0; }
	inline void set_U24current_0(RuntimeObject * value)
	{
		___U24current_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_0), value);
	}

	inline static int32_t get_offset_of_U24disposing_1() { return static_cast<int32_t>(offsetof(U3CWaitU3Ec__Iterator0_t525031111, ___U24disposing_1)); }
	inline bool get_U24disposing_1() const { return ___U24disposing_1; }
	inline bool* get_address_of_U24disposing_1() { return &___U24disposing_1; }
	inline void set_U24disposing_1(bool value)
	{
		___U24disposing_1 = value;
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CWaitU3Ec__Iterator0_t525031111, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CWAITU3EC__ITERATOR0_T525031111_H
#ifndef U3CWAITU3EC__ITERATOR0_T2142947824_H
#define U3CWAITU3EC__ITERATOR0_T2142947824_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// outroBtn/<Wait>c__Iterator0
struct  U3CWaitU3Ec__Iterator0_t2142947824  : public RuntimeObject
{
public:
	// System.Object outroBtn/<Wait>c__Iterator0::$current
	RuntimeObject * ___U24current_0;
	// System.Boolean outroBtn/<Wait>c__Iterator0::$disposing
	bool ___U24disposing_1;
	// System.Int32 outroBtn/<Wait>c__Iterator0::$PC
	int32_t ___U24PC_2;

public:
	inline static int32_t get_offset_of_U24current_0() { return static_cast<int32_t>(offsetof(U3CWaitU3Ec__Iterator0_t2142947824, ___U24current_0)); }
	inline RuntimeObject * get_U24current_0() const { return ___U24current_0; }
	inline RuntimeObject ** get_address_of_U24current_0() { return &___U24current_0; }
	inline void set_U24current_0(RuntimeObject * value)
	{
		___U24current_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_0), value);
	}

	inline static int32_t get_offset_of_U24disposing_1() { return static_cast<int32_t>(offsetof(U3CWaitU3Ec__Iterator0_t2142947824, ___U24disposing_1)); }
	inline bool get_U24disposing_1() const { return ___U24disposing_1; }
	inline bool* get_address_of_U24disposing_1() { return &___U24disposing_1; }
	inline void set_U24disposing_1(bool value)
	{
		___U24disposing_1 = value;
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CWaitU3Ec__Iterator0_t2142947824, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CWAITU3EC__ITERATOR0_T2142947824_H
#ifndef U3CWAITU3EC__ITERATOR0_T301842953_H
#define U3CWAITU3EC__ITERATOR0_T301842953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// replay/<Wait>c__Iterator0
struct  U3CWaitU3Ec__Iterator0_t301842953  : public RuntimeObject
{
public:
	// System.Object replay/<Wait>c__Iterator0::$current
	RuntimeObject * ___U24current_0;
	// System.Boolean replay/<Wait>c__Iterator0::$disposing
	bool ___U24disposing_1;
	// System.Int32 replay/<Wait>c__Iterator0::$PC
	int32_t ___U24PC_2;

public:
	inline static int32_t get_offset_of_U24current_0() { return static_cast<int32_t>(offsetof(U3CWaitU3Ec__Iterator0_t301842953, ___U24current_0)); }
	inline RuntimeObject * get_U24current_0() const { return ___U24current_0; }
	inline RuntimeObject ** get_address_of_U24current_0() { return &___U24current_0; }
	inline void set_U24current_0(RuntimeObject * value)
	{
		___U24current_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_0), value);
	}

	inline static int32_t get_offset_of_U24disposing_1() { return static_cast<int32_t>(offsetof(U3CWaitU3Ec__Iterator0_t301842953, ___U24disposing_1)); }
	inline bool get_U24disposing_1() const { return ___U24disposing_1; }
	inline bool* get_address_of_U24disposing_1() { return &___U24disposing_1; }
	inline void set_U24disposing_1(bool value)
	{
		___U24disposing_1 = value;
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CWaitU3Ec__Iterator0_t301842953, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CWAITU3EC__ITERATOR0_T301842953_H
#ifndef U3CWAITU3EC__ITERATOR0_T1999146689_H
#define U3CWAITU3EC__ITERATOR0_T1999146689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// loadDelayIntro2/<Wait>c__Iterator0
struct  U3CWaitU3Ec__Iterator0_t1999146689  : public RuntimeObject
{
public:
	// System.Object loadDelayIntro2/<Wait>c__Iterator0::$current
	RuntimeObject * ___U24current_0;
	// System.Boolean loadDelayIntro2/<Wait>c__Iterator0::$disposing
	bool ___U24disposing_1;
	// System.Int32 loadDelayIntro2/<Wait>c__Iterator0::$PC
	int32_t ___U24PC_2;

public:
	inline static int32_t get_offset_of_U24current_0() { return static_cast<int32_t>(offsetof(U3CWaitU3Ec__Iterator0_t1999146689, ___U24current_0)); }
	inline RuntimeObject * get_U24current_0() const { return ___U24current_0; }
	inline RuntimeObject ** get_address_of_U24current_0() { return &___U24current_0; }
	inline void set_U24current_0(RuntimeObject * value)
	{
		___U24current_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_0), value);
	}

	inline static int32_t get_offset_of_U24disposing_1() { return static_cast<int32_t>(offsetof(U3CWaitU3Ec__Iterator0_t1999146689, ___U24disposing_1)); }
	inline bool get_U24disposing_1() const { return ___U24disposing_1; }
	inline bool* get_address_of_U24disposing_1() { return &___U24disposing_1; }
	inline void set_U24disposing_1(bool value)
	{
		___U24disposing_1 = value;
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CWaitU3Ec__Iterator0_t1999146689, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CWAITU3EC__ITERATOR0_T1999146689_H
#ifndef INITIATE_T1256188312_H
#define INITIATE_T1256188312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Initiate
struct  Initiate_t1256188312  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INITIATE_T1256188312_H
#ifndef CONNECTIONMESSAGEIDS_T2201604772_H
#define CONNECTIONMESSAGEIDS_T2201604772_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ConnectionMessageIds
struct  ConnectionMessageIds_t2201604772  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONMESSAGEIDS_T2201604772_H
#ifndef SUBMESSAGEIDS_T1787092473_H
#define SUBMESSAGEIDS_T1787092473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.SubMessageIds
struct  SubMessageIds_t1787092473  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBMESSAGEIDS_T1787092473_H
#ifndef OBJECTSERIALIZATIONEXTENSION_T4143292742_H
#define OBJECTSERIALIZATIONEXTENSION_T4143292742_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.ObjectSerializationExtension
struct  ObjectSerializationExtension_t4143292742  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTSERIALIZATIONEXTENSION_T4143292742_H
#ifndef SERIALIZABLEVECTOR4_T3942108960_H
#define SERIALIZABLEVECTOR4_T3942108960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.SerializableVector4
struct  SerializableVector4_t3942108960  : public RuntimeObject
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(SerializableVector4_t3942108960, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(SerializableVector4_t3942108960, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(SerializableVector4_t3942108960, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(SerializableVector4_t3942108960, ___w_3)); }
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
#endif // SERIALIZABLEVECTOR4_T3942108960_H
#ifndef SERIALIZABLEUNITYARMATRIX4X4_T2471070835_H
#define SERIALIZABLEUNITYARMATRIX4X4_T2471070835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableUnityARMatrix4x4
struct  serializableUnityARMatrix4x4_t2471070835  : public RuntimeObject
{
public:
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column0
	SerializableVector4_t3942108960 * ___column0_0;
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column1
	SerializableVector4_t3942108960 * ___column1_1;
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column2
	SerializableVector4_t3942108960 * ___column2_2;
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column3
	SerializableVector4_t3942108960 * ___column3_3;

public:
	inline static int32_t get_offset_of_column0_0() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t2471070835, ___column0_0)); }
	inline SerializableVector4_t3942108960 * get_column0_0() const { return ___column0_0; }
	inline SerializableVector4_t3942108960 ** get_address_of_column0_0() { return &___column0_0; }
	inline void set_column0_0(SerializableVector4_t3942108960 * value)
	{
		___column0_0 = value;
		Il2CppCodeGenWriteBarrier((&___column0_0), value);
	}

	inline static int32_t get_offset_of_column1_1() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t2471070835, ___column1_1)); }
	inline SerializableVector4_t3942108960 * get_column1_1() const { return ___column1_1; }
	inline SerializableVector4_t3942108960 ** get_address_of_column1_1() { return &___column1_1; }
	inline void set_column1_1(SerializableVector4_t3942108960 * value)
	{
		___column1_1 = value;
		Il2CppCodeGenWriteBarrier((&___column1_1), value);
	}

	inline static int32_t get_offset_of_column2_2() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t2471070835, ___column2_2)); }
	inline SerializableVector4_t3942108960 * get_column2_2() const { return ___column2_2; }
	inline SerializableVector4_t3942108960 ** get_address_of_column2_2() { return &___column2_2; }
	inline void set_column2_2(SerializableVector4_t3942108960 * value)
	{
		___column2_2 = value;
		Il2CppCodeGenWriteBarrier((&___column2_2), value);
	}

	inline static int32_t get_offset_of_column3_3() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t2471070835, ___column3_3)); }
	inline SerializableVector4_t3942108960 * get_column3_3() const { return ___column3_3; }
	inline SerializableVector4_t3942108960 ** get_address_of_column3_3() { return &___column3_3; }
	inline void set_column3_3(SerializableVector4_t3942108960 * value)
	{
		___column3_3 = value;
		Il2CppCodeGenWriteBarrier((&___column3_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARMATRIX4X4_T2471070835_H
#ifndef SERIALIZABLEPOINTCLOUD_T1312981559_H
#define SERIALIZABLEPOINTCLOUD_T1312981559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializablePointCloud
struct  serializablePointCloud_t1312981559  : public RuntimeObject
{
public:
	// System.Byte[] Utils.serializablePointCloud::pointCloudData
	ByteU5BU5D_t250263739* ___pointCloudData_0;

public:
	inline static int32_t get_offset_of_pointCloudData_0() { return static_cast<int32_t>(offsetof(serializablePointCloud_t1312981559, ___pointCloudData_0)); }
	inline ByteU5BU5D_t250263739* get_pointCloudData_0() const { return ___pointCloudData_0; }
	inline ByteU5BU5D_t250263739** get_address_of_pointCloudData_0() { return &___pointCloudData_0; }
	inline void set_pointCloudData_0(ByteU5BU5D_t250263739* value)
	{
		___pointCloudData_0 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudData_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEPOINTCLOUD_T1312981559_H
#ifndef ATTRIBUTE_T2825975485_H
#define ATTRIBUTE_T2825975485_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t2825975485  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T2825975485_H
#ifndef U3CWAITU3EC__ITERATOR0_T750400810_H
#define U3CWAITU3EC__ITERATOR0_T750400810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// loadDelayIntro/<Wait>c__Iterator0
struct  U3CWaitU3Ec__Iterator0_t750400810  : public RuntimeObject
{
public:
	// System.Object loadDelayIntro/<Wait>c__Iterator0::$current
	RuntimeObject * ___U24current_0;
	// System.Boolean loadDelayIntro/<Wait>c__Iterator0::$disposing
	bool ___U24disposing_1;
	// System.Int32 loadDelayIntro/<Wait>c__Iterator0::$PC
	int32_t ___U24PC_2;

public:
	inline static int32_t get_offset_of_U24current_0() { return static_cast<int32_t>(offsetof(U3CWaitU3Ec__Iterator0_t750400810, ___U24current_0)); }
	inline RuntimeObject * get_U24current_0() const { return ___U24current_0; }
	inline RuntimeObject ** get_address_of_U24current_0() { return &___U24current_0; }
	inline void set_U24current_0(RuntimeObject * value)
	{
		___U24current_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_0), value);
	}

	inline static int32_t get_offset_of_U24disposing_1() { return static_cast<int32_t>(offsetof(U3CWaitU3Ec__Iterator0_t750400810, ___U24disposing_1)); }
	inline bool get_U24disposing_1() const { return ___U24disposing_1; }
	inline bool* get_address_of_U24disposing_1() { return &___U24disposing_1; }
	inline void set_U24disposing_1(bool value)
	{
		___U24disposing_1 = value;
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CWaitU3Ec__Iterator0_t750400810, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CWAITU3EC__ITERATOR0_T750400810_H
#ifndef U3CWAITU3EC__ITERATOR0_T3598046156_H
#define U3CWAITU3EC__ITERATOR0_T3598046156_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// loadDelay/<Wait>c__Iterator0
struct  U3CWaitU3Ec__Iterator0_t3598046156  : public RuntimeObject
{
public:
	// System.Object loadDelay/<Wait>c__Iterator0::$current
	RuntimeObject * ___U24current_0;
	// System.Boolean loadDelay/<Wait>c__Iterator0::$disposing
	bool ___U24disposing_1;
	// System.Int32 loadDelay/<Wait>c__Iterator0::$PC
	int32_t ___U24PC_2;

public:
	inline static int32_t get_offset_of_U24current_0() { return static_cast<int32_t>(offsetof(U3CWaitU3Ec__Iterator0_t3598046156, ___U24current_0)); }
	inline RuntimeObject * get_U24current_0() const { return ___U24current_0; }
	inline RuntimeObject ** get_address_of_U24current_0() { return &___U24current_0; }
	inline void set_U24current_0(RuntimeObject * value)
	{
		___U24current_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_0), value);
	}

	inline static int32_t get_offset_of_U24disposing_1() { return static_cast<int32_t>(offsetof(U3CWaitU3Ec__Iterator0_t3598046156, ___U24disposing_1)); }
	inline bool get_U24disposing_1() const { return ___U24disposing_1; }
	inline bool* get_address_of_U24disposing_1() { return &___U24disposing_1; }
	inline void set_U24disposing_1(bool value)
	{
		___U24disposing_1 = value;
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CWaitU3Ec__Iterator0_t3598046156, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CWAITU3EC__ITERATOR0_T3598046156_H
#ifndef UNITYEVENTBASE_T2441023078_H
#define UNITYEVENTBASE_T2441023078_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t2441023078  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t1598536549 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3177702348 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t2441023078, ___m_Calls_0)); }
	inline InvokableCallList_t1598536549 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t1598536549 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t1598536549 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t2441023078, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3177702348 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3177702348 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3177702348 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t2441023078, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t2441023078, ___m_CallsDirty_3)); }
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
#endif // UNITYEVENTBASE_T2441023078_H
#ifndef VECTOREXTENSIONS_T2107134398_H
#define VECTOREXTENSIONS_T2107134398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.Utilities.VectorExtensions
struct  VectorExtensions_t2107134398  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOREXTENSIONS_T2107134398_H
#ifndef VALUETYPE_T214794469_H
#define VALUETYPE_T214794469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t214794469  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t214794469_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t214794469_marshaled_com
{
};
#endif // VALUETYPE_T214794469_H
#ifndef ROUTINE_T3189200842_H
#define ROUTINE_T3189200842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.Utilities.Runnable/Routine
struct  Routine_t3189200842  : public RuntimeObject
{
public:
	// System.Int32 Mapbox.Unity.Utilities.Runnable/Routine::<ID>k__BackingField
	int32_t ___U3CIDU3Ek__BackingField_0;
	// System.Boolean Mapbox.Unity.Utilities.Runnable/Routine::<Stop>k__BackingField
	bool ___U3CStopU3Ek__BackingField_1;
	// System.Boolean Mapbox.Unity.Utilities.Runnable/Routine::m_bMoveNext
	bool ___m_bMoveNext_2;
	// System.Collections.IEnumerator Mapbox.Unity.Utilities.Runnable/Routine::m_Enumerator
	RuntimeObject* ___m_Enumerator_3;

public:
	inline static int32_t get_offset_of_U3CIDU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Routine_t3189200842, ___U3CIDU3Ek__BackingField_0)); }
	inline int32_t get_U3CIDU3Ek__BackingField_0() const { return ___U3CIDU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIDU3Ek__BackingField_0() { return &___U3CIDU3Ek__BackingField_0; }
	inline void set_U3CIDU3Ek__BackingField_0(int32_t value)
	{
		___U3CIDU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CStopU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Routine_t3189200842, ___U3CStopU3Ek__BackingField_1)); }
	inline bool get_U3CStopU3Ek__BackingField_1() const { return ___U3CStopU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CStopU3Ek__BackingField_1() { return &___U3CStopU3Ek__BackingField_1; }
	inline void set_U3CStopU3Ek__BackingField_1(bool value)
	{
		___U3CStopU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_m_bMoveNext_2() { return static_cast<int32_t>(offsetof(Routine_t3189200842, ___m_bMoveNext_2)); }
	inline bool get_m_bMoveNext_2() const { return ___m_bMoveNext_2; }
	inline bool* get_address_of_m_bMoveNext_2() { return &___m_bMoveNext_2; }
	inline void set_m_bMoveNext_2(bool value)
	{
		___m_bMoveNext_2 = value;
	}

	inline static int32_t get_offset_of_m_Enumerator_3() { return static_cast<int32_t>(offsetof(Routine_t3189200842, ___m_Enumerator_3)); }
	inline RuntimeObject* get_m_Enumerator_3() const { return ___m_Enumerator_3; }
	inline RuntimeObject** get_address_of_m_Enumerator_3() { return &___m_Enumerator_3; }
	inline void set_m_Enumerator_3(RuntimeObject* value)
	{
		___m_Enumerator_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Enumerator_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROUTINE_T3189200842_H
#ifndef U3CMYCOROUTINEU3EC__ITERATOR0_T946539094_H
#define U3CMYCOROUTINEU3EC__ITERATOR0_T946539094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// badCollision/<MyCoroutine>c__Iterator0
struct  U3CMyCoroutineU3Ec__Iterator0_t946539094  : public RuntimeObject
{
public:
	// badCollision badCollision/<MyCoroutine>c__Iterator0::$this
	badCollision_t1007815740 * ___U24this_0;
	// System.Object badCollision/<MyCoroutine>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean badCollision/<MyCoroutine>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 badCollision/<MyCoroutine>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CMyCoroutineU3Ec__Iterator0_t946539094, ___U24this_0)); }
	inline badCollision_t1007815740 * get_U24this_0() const { return ___U24this_0; }
	inline badCollision_t1007815740 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(badCollision_t1007815740 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CMyCoroutineU3Ec__Iterator0_t946539094, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CMyCoroutineU3Ec__Iterator0_t946539094, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CMyCoroutineU3Ec__Iterator0_t946539094, ___U24PC_3)); }
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
#endif // U3CMYCOROUTINEU3EC__ITERATOR0_T946539094_H
#ifndef COLOR_T1559040956_H
#define COLOR_T1559040956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t1559040956 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t1559040956, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t1559040956, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t1559040956, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t1559040956, ___a_3)); }
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
#endif // COLOR_T1559040956_H
#ifndef UNITYEVENT_1_T170516133_H
#define UNITYEVENT_1_T170516133_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct  UnityEvent_1_t170516133  : public UnityEventBase_t2441023078
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t4181569305* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t170516133, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t4181569305* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t4181569305** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t4181569305* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T170516133_H
#ifndef TIMESPAN_T1627018810_H
#define TIMESPAN_T1627018810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t1627018810 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t1627018810, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t1627018810_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t1627018810  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t1627018810  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t1627018810  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t1627018810_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t1627018810  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t1627018810 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t1627018810  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t1627018810_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t1627018810  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t1627018810 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t1627018810  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t1627018810_StaticFields, ___Zero_2)); }
	inline TimeSpan_t1627018810  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t1627018810 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t1627018810  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T1627018810_H
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
	RandomNumberGenerator_t3399161153 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t3399161153 * ____fastRng_14;

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
	inline RandomNumberGenerator_t3399161153 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t3399161153 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t3399161153 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t3399161153 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t3399161153 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t3399161153 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef LAYERMASK_T3213958634_H
#define LAYERMASK_T3213958634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_t3213958634 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t3213958634, ___m_Mask_0)); }
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
#endif // LAYERMASK_T3213958634_H
#ifndef GCHANDLE_T225103611_H
#define GCHANDLE_T225103611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t225103611 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t225103611, ___handle_0)); }
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
#endif // GCHANDLE_T225103611_H
#ifndef VECTOR3_T3278824678_H
#define VECTOR3_T3278824678_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3278824678 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3278824678, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3278824678, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3278824678, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3278824678_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3278824678  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3278824678  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3278824678  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3278824678  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3278824678  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3278824678  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3278824678  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3278824678  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3278824678  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3278824678  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3278824678_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3278824678  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3278824678 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3278824678  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3278824678_StaticFields, ___oneVector_5)); }
	inline Vector3_t3278824678  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3278824678 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3278824678  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3278824678_StaticFields, ___upVector_6)); }
	inline Vector3_t3278824678  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3278824678 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3278824678  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3278824678_StaticFields, ___downVector_7)); }
	inline Vector3_t3278824678  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3278824678 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3278824678  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3278824678_StaticFields, ___leftVector_8)); }
	inline Vector3_t3278824678  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3278824678 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3278824678  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3278824678_StaticFields, ___rightVector_9)); }
	inline Vector3_t3278824678  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3278824678 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3278824678  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3278824678_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3278824678  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3278824678 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3278824678  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3278824678_StaticFields, ___backVector_11)); }
	inline Vector3_t3278824678  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3278824678 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3278824678  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3278824678_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3278824678  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3278824678 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3278824678  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3278824678_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3278824678  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3278824678 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3278824678  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3278824678_H
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
#ifndef NODEEDITORELEMENTATTRIBUTE_T1631509551_H
#define NODEEDITORELEMENTATTRIBUTE_T1631509551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NodeEditorElementAttribute
struct  NodeEditorElementAttribute_t1631509551  : public Attribute_t2825975485
{
public:
	// System.String NodeEditorElementAttribute::Name
	String_t* ___Name_0;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(NodeEditorElementAttribute_t1631509551, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODEEDITORELEMENTATTRIBUTE_T1631509551_H
#ifndef UNITYARLIGHTESTIMATE_T1741766008_H
#define UNITYARLIGHTESTIMATE_T1741766008_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARLightEstimate
struct  UnityARLightEstimate_t1741766008 
{
public:
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientIntensity
	float ___ambientIntensity_0;
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientColorTemperature
	float ___ambientColorTemperature_1;

public:
	inline static int32_t get_offset_of_ambientIntensity_0() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_t1741766008, ___ambientIntensity_0)); }
	inline float get_ambientIntensity_0() const { return ___ambientIntensity_0; }
	inline float* get_address_of_ambientIntensity_0() { return &___ambientIntensity_0; }
	inline void set_ambientIntensity_0(float value)
	{
		___ambientIntensity_0 = value;
	}

	inline static int32_t get_offset_of_ambientColorTemperature_1() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_t1741766008, ___ambientColorTemperature_1)); }
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
#endif // UNITYARLIGHTESTIMATE_T1741766008_H
#ifndef PROPERTYATTRIBUTE_T60484150_H
#define PROPERTYATTRIBUTE_T60484150_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyAttribute
struct  PropertyAttribute_t60484150  : public Attribute_t2825975485
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYATTRIBUTE_T60484150_H
#ifndef ENUM_T454561195_H
#define ENUM_T454561195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t454561195  : public ValueType_t214794469
{
public:

public:
};

struct Enum_t454561195_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3056575431* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t454561195_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3056575431* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3056575431** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3056575431* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t454561195_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t454561195_marshaled_com
{
};
#endif // ENUM_T454561195_H
#ifndef DATETIMEKIND_T246261555_H
#define DATETIMEKIND_T246261555_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t246261555 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t246261555, ___value___1)); }
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
#endif // DATETIMEKIND_T246261555_H
#ifndef FOCUSSTATE_T275834306_H
#define FOCUSSTATE_T275834306_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FocusSquare/FocusState
struct  FocusState_t275834306 
{
public:
	// System.Int32 FocusSquare/FocusState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FocusState_t275834306, ___value___1)); }
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
#endif // FOCUSSTATE_T275834306_H
#ifndef UNITYARPLANEDETECTION_T1321191606_H
#define UNITYARPLANEDETECTION_T1321191606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARPlaneDetection
struct  UnityARPlaneDetection_t1321191606 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARPlaneDetection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityARPlaneDetection_t1321191606, ___value___1)); }
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
#endif // UNITYARPLANEDETECTION_T1321191606_H
#ifndef COLORVALUES_T298336711_H
#define COLORVALUES_T298336711_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorValues
struct  ColorValues_t298336711 
{
public:
	// System.Int32 ColorValues::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ColorValues_t298336711, ___value___1)); }
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
#endif // COLORVALUES_T298336711_H
#ifndef COLORCHANGEDEVENT_T4134586285_H
#define COLORCHANGEDEVENT_T4134586285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorChangedEvent
struct  ColorChangedEvent_t4134586285  : public UnityEvent_1_t170516133
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORCHANGEDEVENT_T4134586285_H
#ifndef UNITYARSESSIONRUNOPTION_T3177573259_H
#define UNITYARSESSIONRUNOPTION_T3177573259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionRunOption
struct  UnityARSessionRunOption_t3177573259 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARSessionRunOption::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityARSessionRunOption_t3177573259, ___value___1)); }
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
#endif // UNITYARSESSIONRUNOPTION_T3177573259_H
#ifndef ARTRACKINGSTATE_T722224801_H
#define ARTRACKINGSTATE_T722224801_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingState
struct  ARTrackingState_t722224801 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingState_t722224801, ___value___1)); }
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
#endif // ARTRACKINGSTATE_T722224801_H
#ifndef ARTRACKINGSTATEREASON_T44404695_H
#define ARTRACKINGSTATEREASON_T44404695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingStateReason
struct  ARTrackingStateReason_t44404695 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingStateReason::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingStateReason_t44404695, ___value___1)); }
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
#endif // ARTRACKINGSTATEREASON_T44404695_H
#ifndef UNITYVIDEOPARAMS_T3855855657_H
#define UNITYVIDEOPARAMS_T3855855657_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityVideoParams
struct  UnityVideoParams_t3855855657 
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
	inline static int32_t get_offset_of_yWidth_0() { return static_cast<int32_t>(offsetof(UnityVideoParams_t3855855657, ___yWidth_0)); }
	inline int32_t get_yWidth_0() const { return ___yWidth_0; }
	inline int32_t* get_address_of_yWidth_0() { return &___yWidth_0; }
	inline void set_yWidth_0(int32_t value)
	{
		___yWidth_0 = value;
	}

	inline static int32_t get_offset_of_yHeight_1() { return static_cast<int32_t>(offsetof(UnityVideoParams_t3855855657, ___yHeight_1)); }
	inline int32_t get_yHeight_1() const { return ___yHeight_1; }
	inline int32_t* get_address_of_yHeight_1() { return &___yHeight_1; }
	inline void set_yHeight_1(int32_t value)
	{
		___yHeight_1 = value;
	}

	inline static int32_t get_offset_of_screenOrientation_2() { return static_cast<int32_t>(offsetof(UnityVideoParams_t3855855657, ___screenOrientation_2)); }
	inline int32_t get_screenOrientation_2() const { return ___screenOrientation_2; }
	inline int32_t* get_address_of_screenOrientation_2() { return &___screenOrientation_2; }
	inline void set_screenOrientation_2(int32_t value)
	{
		___screenOrientation_2 = value;
	}

	inline static int32_t get_offset_of_texCoordScale_3() { return static_cast<int32_t>(offsetof(UnityVideoParams_t3855855657, ___texCoordScale_3)); }
	inline float get_texCoordScale_3() const { return ___texCoordScale_3; }
	inline float* get_address_of_texCoordScale_3() { return &___texCoordScale_3; }
	inline void set_texCoordScale_3(float value)
	{
		___texCoordScale_3 = value;
	}

	inline static int32_t get_offset_of_cvPixelBufferPtr_4() { return static_cast<int32_t>(offsetof(UnityVideoParams_t3855855657, ___cvPixelBufferPtr_4)); }
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
#endif // UNITYVIDEOPARAMS_T3855855657_H
#ifndef ARPLANEANCHORALIGNMENT_T1828017563_H
#define ARPLANEANCHORALIGNMENT_T1828017563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneAnchorAlignment
struct  ARPlaneAnchorAlignment_t1828017563 
{
public:
	// System.Int64 UnityEngine.XR.iOS.ARPlaneAnchorAlignment::value__
	int64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARPlaneAnchorAlignment_t1828017563, ___value___1)); }
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
#endif // ARPLANEANCHORALIGNMENT_T1828017563_H
#ifndef SERIALIZABLEFROMEDITORMESSAGE_T690643568_H
#define SERIALIZABLEFROMEDITORMESSAGE_T690643568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableFromEditorMessage
struct  serializableFromEditorMessage_t690643568  : public RuntimeObject
{
public:
	// System.Guid Utils.serializableFromEditorMessage::subMessageId
	Guid_t  ___subMessageId_0;
	// Utils.serializableARKitInit Utils.serializableFromEditorMessage::arkitConfigMsg
	serializableARKitInit_t2496204220 * ___arkitConfigMsg_1;

public:
	inline static int32_t get_offset_of_subMessageId_0() { return static_cast<int32_t>(offsetof(serializableFromEditorMessage_t690643568, ___subMessageId_0)); }
	inline Guid_t  get_subMessageId_0() const { return ___subMessageId_0; }
	inline Guid_t * get_address_of_subMessageId_0() { return &___subMessageId_0; }
	inline void set_subMessageId_0(Guid_t  value)
	{
		___subMessageId_0 = value;
	}

	inline static int32_t get_offset_of_arkitConfigMsg_1() { return static_cast<int32_t>(offsetof(serializableFromEditorMessage_t690643568, ___arkitConfigMsg_1)); }
	inline serializableARKitInit_t2496204220 * get_arkitConfigMsg_1() const { return ___arkitConfigMsg_1; }
	inline serializableARKitInit_t2496204220 ** get_address_of_arkitConfigMsg_1() { return &___arkitConfigMsg_1; }
	inline void set_arkitConfigMsg_1(serializableARKitInit_t2496204220 * value)
	{
		___arkitConfigMsg_1 = value;
		Il2CppCodeGenWriteBarrier((&___arkitConfigMsg_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEFROMEDITORMESSAGE_T690643568_H
#ifndef UNITYARALIGNMENT_T3974281971_H
#define UNITYARALIGNMENT_T3974281971_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAlignment
struct  UnityARAlignment_t3974281971 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARAlignment::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityARAlignment_t3974281971, ___value___1)); }
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
#endif // UNITYARALIGNMENT_T3974281971_H
#ifndef OBJECT_T1019830254_H
#define OBJECT_T1019830254_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t1019830254  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t1019830254, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t1019830254_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t1019830254_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_t1019830254_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t1019830254_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T1019830254_H
#ifndef STYLESEARCHATTRIBUTE_T686296578_H
#define STYLESEARCHATTRIBUTE_T686296578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.Utilities.StyleSearchAttribute
struct  StyleSearchAttribute_t686296578  : public PropertyAttribute_t60484150
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STYLESEARCHATTRIBUTE_T686296578_H
#ifndef SERIALIZABLEARSESSIONCONFIGURATION_T2134036775_H
#define SERIALIZABLEARSESSIONCONFIGURATION_T2134036775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableARSessionConfiguration
struct  serializableARSessionConfiguration_t2134036775  : public RuntimeObject
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
	inline static int32_t get_offset_of_alignment_0() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t2134036775, ___alignment_0)); }
	inline int32_t get_alignment_0() const { return ___alignment_0; }
	inline int32_t* get_address_of_alignment_0() { return &___alignment_0; }
	inline void set_alignment_0(int32_t value)
	{
		___alignment_0 = value;
	}

	inline static int32_t get_offset_of_planeDetection_1() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t2134036775, ___planeDetection_1)); }
	inline int32_t get_planeDetection_1() const { return ___planeDetection_1; }
	inline int32_t* get_address_of_planeDetection_1() { return &___planeDetection_1; }
	inline void set_planeDetection_1(int32_t value)
	{
		___planeDetection_1 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_2() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t2134036775, ___getPointCloudData_2)); }
	inline bool get_getPointCloudData_2() const { return ___getPointCloudData_2; }
	inline bool* get_address_of_getPointCloudData_2() { return &___getPointCloudData_2; }
	inline void set_getPointCloudData_2(bool value)
	{
		___getPointCloudData_2 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_3() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t2134036775, ___enableLightEstimation_3)); }
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
#endif // SERIALIZABLEARSESSIONCONFIGURATION_T2134036775_H
#ifndef SERIALIZABLEUNITYARPLANEANCHOR_T808622527_H
#define SERIALIZABLEUNITYARPLANEANCHOR_T808622527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableUnityARPlaneAnchor
struct  serializableUnityARPlaneAnchor_t808622527  : public RuntimeObject
{
public:
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARPlaneAnchor::worldTransform
	serializableUnityARMatrix4x4_t2471070835 * ___worldTransform_0;
	// Utils.SerializableVector4 Utils.serializableUnityARPlaneAnchor::center
	SerializableVector4_t3942108960 * ___center_1;
	// Utils.SerializableVector4 Utils.serializableUnityARPlaneAnchor::extent
	SerializableVector4_t3942108960 * ___extent_2;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment Utils.serializableUnityARPlaneAnchor::planeAlignment
	int64_t ___planeAlignment_3;
	// System.Byte[] Utils.serializableUnityARPlaneAnchor::identifierStr
	ByteU5BU5D_t250263739* ___identifierStr_4;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t808622527, ___worldTransform_0)); }
	inline serializableUnityARMatrix4x4_t2471070835 * get_worldTransform_0() const { return ___worldTransform_0; }
	inline serializableUnityARMatrix4x4_t2471070835 ** get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(serializableUnityARMatrix4x4_t2471070835 * value)
	{
		___worldTransform_0 = value;
		Il2CppCodeGenWriteBarrier((&___worldTransform_0), value);
	}

	inline static int32_t get_offset_of_center_1() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t808622527, ___center_1)); }
	inline SerializableVector4_t3942108960 * get_center_1() const { return ___center_1; }
	inline SerializableVector4_t3942108960 ** get_address_of_center_1() { return &___center_1; }
	inline void set_center_1(SerializableVector4_t3942108960 * value)
	{
		___center_1 = value;
		Il2CppCodeGenWriteBarrier((&___center_1), value);
	}

	inline static int32_t get_offset_of_extent_2() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t808622527, ___extent_2)); }
	inline SerializableVector4_t3942108960 * get_extent_2() const { return ___extent_2; }
	inline SerializableVector4_t3942108960 ** get_address_of_extent_2() { return &___extent_2; }
	inline void set_extent_2(SerializableVector4_t3942108960 * value)
	{
		___extent_2 = value;
		Il2CppCodeGenWriteBarrier((&___extent_2), value);
	}

	inline static int32_t get_offset_of_planeAlignment_3() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t808622527, ___planeAlignment_3)); }
	inline int64_t get_planeAlignment_3() const { return ___planeAlignment_3; }
	inline int64_t* get_address_of_planeAlignment_3() { return &___planeAlignment_3; }
	inline void set_planeAlignment_3(int64_t value)
	{
		___planeAlignment_3 = value;
	}

	inline static int32_t get_offset_of_identifierStr_4() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t808622527, ___identifierStr_4)); }
	inline ByteU5BU5D_t250263739* get_identifierStr_4() const { return ___identifierStr_4; }
	inline ByteU5BU5D_t250263739** get_address_of_identifierStr_4() { return &___identifierStr_4; }
	inline void set_identifierStr_4(ByteU5BU5D_t250263739* value)
	{
		___identifierStr_4 = value;
		Il2CppCodeGenWriteBarrier((&___identifierStr_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARPLANEANCHOR_T808622527_H
#ifndef SERIALIZABLEUNITYARCAMERA_T3436699307_H
#define SERIALIZABLEUNITYARCAMERA_T3436699307_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableUnityARCamera
struct  serializableUnityARCamera_t3436699307  : public RuntimeObject
{
public:
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARCamera::worldTransform
	serializableUnityARMatrix4x4_t2471070835 * ___worldTransform_0;
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARCamera::projectionMatrix
	serializableUnityARMatrix4x4_t2471070835 * ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState Utils.serializableUnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason Utils.serializableUnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams Utils.serializableUnityARCamera::videoParams
	UnityVideoParams_t3855855657  ___videoParams_4;
	// UnityEngine.XR.iOS.UnityARLightEstimate Utils.serializableUnityARCamera::lightEstimation
	UnityARLightEstimate_t1741766008  ___lightEstimation_5;
	// Utils.serializablePointCloud Utils.serializableUnityARCamera::pointCloud
	serializablePointCloud_t1312981559 * ___pointCloud_6;
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARCamera::displayTransform
	serializableUnityARMatrix4x4_t2471070835 * ___displayTransform_7;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t3436699307, ___worldTransform_0)); }
	inline serializableUnityARMatrix4x4_t2471070835 * get_worldTransform_0() const { return ___worldTransform_0; }
	inline serializableUnityARMatrix4x4_t2471070835 ** get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(serializableUnityARMatrix4x4_t2471070835 * value)
	{
		___worldTransform_0 = value;
		Il2CppCodeGenWriteBarrier((&___worldTransform_0), value);
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t3436699307, ___projectionMatrix_1)); }
	inline serializableUnityARMatrix4x4_t2471070835 * get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline serializableUnityARMatrix4x4_t2471070835 ** get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(serializableUnityARMatrix4x4_t2471070835 * value)
	{
		___projectionMatrix_1 = value;
		Il2CppCodeGenWriteBarrier((&___projectionMatrix_1), value);
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t3436699307, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t3436699307, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t3436699307, ___videoParams_4)); }
	inline UnityVideoParams_t3855855657  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t3855855657 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t3855855657  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightEstimation_5() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t3436699307, ___lightEstimation_5)); }
	inline UnityARLightEstimate_t1741766008  get_lightEstimation_5() const { return ___lightEstimation_5; }
	inline UnityARLightEstimate_t1741766008 * get_address_of_lightEstimation_5() { return &___lightEstimation_5; }
	inline void set_lightEstimation_5(UnityARLightEstimate_t1741766008  value)
	{
		___lightEstimation_5 = value;
	}

	inline static int32_t get_offset_of_pointCloud_6() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t3436699307, ___pointCloud_6)); }
	inline serializablePointCloud_t1312981559 * get_pointCloud_6() const { return ___pointCloud_6; }
	inline serializablePointCloud_t1312981559 ** get_address_of_pointCloud_6() { return &___pointCloud_6; }
	inline void set_pointCloud_6(serializablePointCloud_t1312981559 * value)
	{
		___pointCloud_6 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloud_6), value);
	}

	inline static int32_t get_offset_of_displayTransform_7() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t3436699307, ___displayTransform_7)); }
	inline serializableUnityARMatrix4x4_t2471070835 * get_displayTransform_7() const { return ___displayTransform_7; }
	inline serializableUnityARMatrix4x4_t2471070835 ** get_address_of_displayTransform_7() { return &___displayTransform_7; }
	inline void set_displayTransform_7(serializableUnityARMatrix4x4_t2471070835 * value)
	{
		___displayTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___displayTransform_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARCAMERA_T3436699307_H
#ifndef DATETIME_T2876083226_H
#define DATETIME_T2876083226_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t2876083226 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t1627018810  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t2876083226, ___ticks_0)); }
	inline TimeSpan_t1627018810  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t1627018810 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t1627018810  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t2876083226, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t2876083226_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t2876083226  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t2876083226  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t2379194589* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t2379194589* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t2379194589* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t2379194589* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t2379194589* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t2379194589* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t2379194589* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t632066244* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t632066244* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t2876083226_StaticFields, ___MaxValue_2)); }
	inline DateTime_t2876083226  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t2876083226 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t2876083226  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t2876083226_StaticFields, ___MinValue_3)); }
	inline DateTime_t2876083226  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t2876083226 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t2876083226  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t2876083226_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t2379194589* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t2379194589** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t2379194589* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t2876083226_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t2379194589* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t2379194589** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t2379194589* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t2876083226_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t2379194589* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t2379194589** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t2379194589* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t2876083226_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t2379194589* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t2379194589** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t2379194589* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t2876083226_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t2379194589* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t2379194589** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t2379194589* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t2876083226_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t2379194589* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t2379194589** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t2379194589* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t2876083226_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t2379194589* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t2379194589** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t2379194589* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t2876083226_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t632066244* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t632066244** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t632066244* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t2876083226_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t632066244* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t632066244** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t632066244* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t2876083226_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t2876083226_StaticFields, ___last_now_14)); }
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
#endif // DATETIME_T2876083226_H
#ifndef COMPONENT_T2544583566_H
#define COMPONENT_T2544583566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t2544583566  : public Object_t1019830254
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T2544583566_H
#ifndef SERIALIZABLEARKITINIT_T2496204220_H
#define SERIALIZABLEARKITINIT_T2496204220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableARKitInit
struct  serializableARKitInit_t2496204220  : public RuntimeObject
{
public:
	// Utils.serializableARSessionConfiguration Utils.serializableARKitInit::config
	serializableARSessionConfiguration_t2134036775 * ___config_0;
	// UnityEngine.XR.iOS.UnityARSessionRunOption Utils.serializableARKitInit::runOption
	int32_t ___runOption_1;

public:
	inline static int32_t get_offset_of_config_0() { return static_cast<int32_t>(offsetof(serializableARKitInit_t2496204220, ___config_0)); }
	inline serializableARSessionConfiguration_t2134036775 * get_config_0() const { return ___config_0; }
	inline serializableARSessionConfiguration_t2134036775 ** get_address_of_config_0() { return &___config_0; }
	inline void set_config_0(serializableARSessionConfiguration_t2134036775 * value)
	{
		___config_0 = value;
		Il2CppCodeGenWriteBarrier((&___config_0), value);
	}

	inline static int32_t get_offset_of_runOption_1() { return static_cast<int32_t>(offsetof(serializableARKitInit_t2496204220, ___runOption_1)); }
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
#endif // SERIALIZABLEARKITINIT_T2496204220_H
#ifndef U3CDOREQUESTU3EC__ITERATOR0_T3605170012_H
#define U3CDOREQUESTU3EC__ITERATOR0_T3605170012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.Utilities.HTTPRequest/<DoRequest>c__Iterator0
struct  U3CDoRequestU3Ec__Iterator0_t3605170012  : public RuntimeObject
{
public:
	// System.DateTime Mapbox.Unity.Utilities.HTTPRequest/<DoRequest>c__Iterator0::<timeout>__0
	DateTime_t2876083226  ___U3CtimeoutU3E__0_0;
	// System.Boolean Mapbox.Unity.Utilities.HTTPRequest/<DoRequest>c__Iterator0::<didTimeout>__0
	bool ___U3CdidTimeoutU3E__0_1;
	// Mapbox.Platform.Response Mapbox.Unity.Utilities.HTTPRequest/<DoRequest>c__Iterator0::<response>__1
	Response_t3757304824 * ___U3CresponseU3E__1_2;
	// Mapbox.Unity.Utilities.HTTPRequest Mapbox.Unity.Utilities.HTTPRequest/<DoRequest>c__Iterator0::$this
	HTTPRequest_t462231443 * ___U24this_3;
	// System.Object Mapbox.Unity.Utilities.HTTPRequest/<DoRequest>c__Iterator0::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean Mapbox.Unity.Utilities.HTTPRequest/<DoRequest>c__Iterator0::$disposing
	bool ___U24disposing_5;
	// System.Int32 Mapbox.Unity.Utilities.HTTPRequest/<DoRequest>c__Iterator0::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_U3CtimeoutU3E__0_0() { return static_cast<int32_t>(offsetof(U3CDoRequestU3Ec__Iterator0_t3605170012, ___U3CtimeoutU3E__0_0)); }
	inline DateTime_t2876083226  get_U3CtimeoutU3E__0_0() const { return ___U3CtimeoutU3E__0_0; }
	inline DateTime_t2876083226 * get_address_of_U3CtimeoutU3E__0_0() { return &___U3CtimeoutU3E__0_0; }
	inline void set_U3CtimeoutU3E__0_0(DateTime_t2876083226  value)
	{
		___U3CtimeoutU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CdidTimeoutU3E__0_1() { return static_cast<int32_t>(offsetof(U3CDoRequestU3Ec__Iterator0_t3605170012, ___U3CdidTimeoutU3E__0_1)); }
	inline bool get_U3CdidTimeoutU3E__0_1() const { return ___U3CdidTimeoutU3E__0_1; }
	inline bool* get_address_of_U3CdidTimeoutU3E__0_1() { return &___U3CdidTimeoutU3E__0_1; }
	inline void set_U3CdidTimeoutU3E__0_1(bool value)
	{
		___U3CdidTimeoutU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CresponseU3E__1_2() { return static_cast<int32_t>(offsetof(U3CDoRequestU3Ec__Iterator0_t3605170012, ___U3CresponseU3E__1_2)); }
	inline Response_t3757304824 * get_U3CresponseU3E__1_2() const { return ___U3CresponseU3E__1_2; }
	inline Response_t3757304824 ** get_address_of_U3CresponseU3E__1_2() { return &___U3CresponseU3E__1_2; }
	inline void set_U3CresponseU3E__1_2(Response_t3757304824 * value)
	{
		___U3CresponseU3E__1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CresponseU3E__1_2), value);
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CDoRequestU3Ec__Iterator0_t3605170012, ___U24this_3)); }
	inline HTTPRequest_t462231443 * get_U24this_3() const { return ___U24this_3; }
	inline HTTPRequest_t462231443 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(HTTPRequest_t462231443 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CDoRequestU3Ec__Iterator0_t3605170012, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CDoRequestU3Ec__Iterator0_t3605170012, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CDoRequestU3Ec__Iterator0_t3605170012, ___U24PC_6)); }
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
#endif // U3CDOREQUESTU3EC__ITERATOR0_T3605170012_H
#ifndef BEHAVIOUR_T53332243_H
#define BEHAVIOUR_T53332243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t53332243  : public Component_t2544583566
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T53332243_H
#ifndef MONOBEHAVIOUR_T4005906508_H
#define MONOBEHAVIOUR_T4005906508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4005906508  : public Behaviour_t53332243
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4005906508_H
#ifndef ONCLICKEXAMPLE_T2149891408_H
#define ONCLICKEXAMPLE_T2149891408_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnClickExample
struct  OnClickExample_t2149891408  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.GameObject OnClickExample::yourButton
	GameObject_t2790157070 * ___yourButton_2;

public:
	inline static int32_t get_offset_of_yourButton_2() { return static_cast<int32_t>(offsetof(OnClickExample_t2149891408, ___yourButton_2)); }
	inline GameObject_t2790157070 * get_yourButton_2() const { return ___yourButton_2; }
	inline GameObject_t2790157070 ** get_address_of_yourButton_2() { return &___yourButton_2; }
	inline void set_yourButton_2(GameObject_t2790157070 * value)
	{
		___yourButton_2 = value;
		Il2CppCodeGenWriteBarrier((&___yourButton_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONCLICKEXAMPLE_T2149891408_H
#ifndef UNITYARUSERANCHOREXAMPLE_T1094171739_H
#define UNITYARUSERANCHOREXAMPLE_T1094171739_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityARUserAnchorExample
struct  UnityARUserAnchorExample_t1094171739  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.GameObject UnityARUserAnchorExample::prefabObject
	GameObject_t2790157070 * ___prefabObject_2;
	// System.Int32 UnityARUserAnchorExample::distanceFromCamera
	int32_t ___distanceFromCamera_3;
	// System.Collections.Generic.HashSet`1<System.String> UnityARUserAnchorExample::m_Clones
	HashSet_1_t3047845133 * ___m_Clones_4;
	// System.Single UnityARUserAnchorExample::m_TimeUntilRemove
	float ___m_TimeUntilRemove_5;

public:
	inline static int32_t get_offset_of_prefabObject_2() { return static_cast<int32_t>(offsetof(UnityARUserAnchorExample_t1094171739, ___prefabObject_2)); }
	inline GameObject_t2790157070 * get_prefabObject_2() const { return ___prefabObject_2; }
	inline GameObject_t2790157070 ** get_address_of_prefabObject_2() { return &___prefabObject_2; }
	inline void set_prefabObject_2(GameObject_t2790157070 * value)
	{
		___prefabObject_2 = value;
		Il2CppCodeGenWriteBarrier((&___prefabObject_2), value);
	}

	inline static int32_t get_offset_of_distanceFromCamera_3() { return static_cast<int32_t>(offsetof(UnityARUserAnchorExample_t1094171739, ___distanceFromCamera_3)); }
	inline int32_t get_distanceFromCamera_3() const { return ___distanceFromCamera_3; }
	inline int32_t* get_address_of_distanceFromCamera_3() { return &___distanceFromCamera_3; }
	inline void set_distanceFromCamera_3(int32_t value)
	{
		___distanceFromCamera_3 = value;
	}

	inline static int32_t get_offset_of_m_Clones_4() { return static_cast<int32_t>(offsetof(UnityARUserAnchorExample_t1094171739, ___m_Clones_4)); }
	inline HashSet_1_t3047845133 * get_m_Clones_4() const { return ___m_Clones_4; }
	inline HashSet_1_t3047845133 ** get_address_of_m_Clones_4() { return &___m_Clones_4; }
	inline void set_m_Clones_4(HashSet_1_t3047845133 * value)
	{
		___m_Clones_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Clones_4), value);
	}

	inline static int32_t get_offset_of_m_TimeUntilRemove_5() { return static_cast<int32_t>(offsetof(UnityARUserAnchorExample_t1094171739, ___m_TimeUntilRemove_5)); }
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
#endif // UNITYARUSERANCHOREXAMPLE_T1094171739_H
#ifndef OPENURLONBUTTONCLICK_T3988605793_H
#define OPENURLONBUTTONCLICK_T3988605793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.Utilities.OpenUrlOnButtonClick
struct  OpenUrlOnButtonClick_t3988605793  : public MonoBehaviour_t4005906508
{
public:
	// System.String Mapbox.Unity.Utilities.OpenUrlOnButtonClick::_url
	String_t* ____url_2;

public:
	inline static int32_t get_offset_of__url_2() { return static_cast<int32_t>(offsetof(OpenUrlOnButtonClick_t3988605793, ____url_2)); }
	inline String_t* get__url_2() const { return ____url_2; }
	inline String_t** get_address_of__url_2() { return &____url_2; }
	inline void set__url_2(String_t* value)
	{
		____url_2 = value;
		Il2CppCodeGenWriteBarrier((&____url_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPENURLONBUTTONCLICK_T3988605793_H
#ifndef FOCUSSQUARE_T1236987896_H
#define FOCUSSQUARE_T1236987896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FocusSquare
struct  FocusSquare_t1236987896  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.GameObject FocusSquare::findingSquare
	GameObject_t2790157070 * ___findingSquare_2;
	// UnityEngine.GameObject FocusSquare::foundSquare
	GameObject_t2790157070 * ___foundSquare_3;
	// System.Single FocusSquare::maxRayDistance
	float ___maxRayDistance_4;
	// UnityEngine.LayerMask FocusSquare::collisionLayerMask
	LayerMask_t3213958634  ___collisionLayerMask_5;
	// System.Single FocusSquare::findingSquareDist
	float ___findingSquareDist_6;
	// UnityEngine.GameObject FocusSquare::lampComponent
	GameObject_t2790157070 * ___lampComponent_7;
	// UnityEngine.GameObject FocusSquare::tapToPlaceText
	GameObject_t2790157070 * ___tapToPlaceText_8;
	// UnityEngine.GameObject FocusSquare::findFlatSurface
	GameObject_t2790157070 * ___findFlatSurface_9;
	// FocusSquare/FocusState FocusSquare::squareState
	int32_t ___squareState_10;
	// System.Boolean FocusSquare::trackingInitialized
	bool ___trackingInitialized_11;

public:
	inline static int32_t get_offset_of_findingSquare_2() { return static_cast<int32_t>(offsetof(FocusSquare_t1236987896, ___findingSquare_2)); }
	inline GameObject_t2790157070 * get_findingSquare_2() const { return ___findingSquare_2; }
	inline GameObject_t2790157070 ** get_address_of_findingSquare_2() { return &___findingSquare_2; }
	inline void set_findingSquare_2(GameObject_t2790157070 * value)
	{
		___findingSquare_2 = value;
		Il2CppCodeGenWriteBarrier((&___findingSquare_2), value);
	}

	inline static int32_t get_offset_of_foundSquare_3() { return static_cast<int32_t>(offsetof(FocusSquare_t1236987896, ___foundSquare_3)); }
	inline GameObject_t2790157070 * get_foundSquare_3() const { return ___foundSquare_3; }
	inline GameObject_t2790157070 ** get_address_of_foundSquare_3() { return &___foundSquare_3; }
	inline void set_foundSquare_3(GameObject_t2790157070 * value)
	{
		___foundSquare_3 = value;
		Il2CppCodeGenWriteBarrier((&___foundSquare_3), value);
	}

	inline static int32_t get_offset_of_maxRayDistance_4() { return static_cast<int32_t>(offsetof(FocusSquare_t1236987896, ___maxRayDistance_4)); }
	inline float get_maxRayDistance_4() const { return ___maxRayDistance_4; }
	inline float* get_address_of_maxRayDistance_4() { return &___maxRayDistance_4; }
	inline void set_maxRayDistance_4(float value)
	{
		___maxRayDistance_4 = value;
	}

	inline static int32_t get_offset_of_collisionLayerMask_5() { return static_cast<int32_t>(offsetof(FocusSquare_t1236987896, ___collisionLayerMask_5)); }
	inline LayerMask_t3213958634  get_collisionLayerMask_5() const { return ___collisionLayerMask_5; }
	inline LayerMask_t3213958634 * get_address_of_collisionLayerMask_5() { return &___collisionLayerMask_5; }
	inline void set_collisionLayerMask_5(LayerMask_t3213958634  value)
	{
		___collisionLayerMask_5 = value;
	}

	inline static int32_t get_offset_of_findingSquareDist_6() { return static_cast<int32_t>(offsetof(FocusSquare_t1236987896, ___findingSquareDist_6)); }
	inline float get_findingSquareDist_6() const { return ___findingSquareDist_6; }
	inline float* get_address_of_findingSquareDist_6() { return &___findingSquareDist_6; }
	inline void set_findingSquareDist_6(float value)
	{
		___findingSquareDist_6 = value;
	}

	inline static int32_t get_offset_of_lampComponent_7() { return static_cast<int32_t>(offsetof(FocusSquare_t1236987896, ___lampComponent_7)); }
	inline GameObject_t2790157070 * get_lampComponent_7() const { return ___lampComponent_7; }
	inline GameObject_t2790157070 ** get_address_of_lampComponent_7() { return &___lampComponent_7; }
	inline void set_lampComponent_7(GameObject_t2790157070 * value)
	{
		___lampComponent_7 = value;
		Il2CppCodeGenWriteBarrier((&___lampComponent_7), value);
	}

	inline static int32_t get_offset_of_tapToPlaceText_8() { return static_cast<int32_t>(offsetof(FocusSquare_t1236987896, ___tapToPlaceText_8)); }
	inline GameObject_t2790157070 * get_tapToPlaceText_8() const { return ___tapToPlaceText_8; }
	inline GameObject_t2790157070 ** get_address_of_tapToPlaceText_8() { return &___tapToPlaceText_8; }
	inline void set_tapToPlaceText_8(GameObject_t2790157070 * value)
	{
		___tapToPlaceText_8 = value;
		Il2CppCodeGenWriteBarrier((&___tapToPlaceText_8), value);
	}

	inline static int32_t get_offset_of_findFlatSurface_9() { return static_cast<int32_t>(offsetof(FocusSquare_t1236987896, ___findFlatSurface_9)); }
	inline GameObject_t2790157070 * get_findFlatSurface_9() const { return ___findFlatSurface_9; }
	inline GameObject_t2790157070 ** get_address_of_findFlatSurface_9() { return &___findFlatSurface_9; }
	inline void set_findFlatSurface_9(GameObject_t2790157070 * value)
	{
		___findFlatSurface_9 = value;
		Il2CppCodeGenWriteBarrier((&___findFlatSurface_9), value);
	}

	inline static int32_t get_offset_of_squareState_10() { return static_cast<int32_t>(offsetof(FocusSquare_t1236987896, ___squareState_10)); }
	inline int32_t get_squareState_10() const { return ___squareState_10; }
	inline int32_t* get_address_of_squareState_10() { return &___squareState_10; }
	inline void set_squareState_10(int32_t value)
	{
		___squareState_10 = value;
	}

	inline static int32_t get_offset_of_trackingInitialized_11() { return static_cast<int32_t>(offsetof(FocusSquare_t1236987896, ___trackingInitialized_11)); }
	inline bool get_trackingInitialized_11() const { return ___trackingInitialized_11; }
	inline bool* get_address_of_trackingInitialized_11() { return &___trackingInitialized_11; }
	inline void set_trackingInitialized_11(bool value)
	{
		___trackingInitialized_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOCUSSQUARE_T1236987896_H
#ifndef FIXEDPOS_T3698351978_H
#define FIXEDPOS_T3698351978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// fixedpos
struct  fixedpos_t3698351978  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.GameObject fixedpos::cfl
	GameObject_t2790157070 * ___cfl_2;
	// UnityEngine.Vector3 fixedpos::offset
	Vector3_t3278824678  ___offset_3;

public:
	inline static int32_t get_offset_of_cfl_2() { return static_cast<int32_t>(offsetof(fixedpos_t3698351978, ___cfl_2)); }
	inline GameObject_t2790157070 * get_cfl_2() const { return ___cfl_2; }
	inline GameObject_t2790157070 ** get_address_of_cfl_2() { return &___cfl_2; }
	inline void set_cfl_2(GameObject_t2790157070 * value)
	{
		___cfl_2 = value;
		Il2CppCodeGenWriteBarrier((&___cfl_2), value);
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(fixedpos_t3698351978, ___offset_3)); }
	inline Vector3_t3278824678  get_offset_3() const { return ___offset_3; }
	inline Vector3_t3278824678 * get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(Vector3_t3278824678  value)
	{
		___offset_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIXEDPOS_T3698351978_H
#ifndef BALLMAKER_T3504366277_H
#define BALLMAKER_T3504366277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BallMaker
struct  BallMaker_t3504366277  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.GameObject BallMaker::ballPrefab
	GameObject_t2790157070 * ___ballPrefab_2;
	// System.Single BallMaker::createHeight
	float ___createHeight_3;
	// UnityEngine.MaterialPropertyBlock BallMaker::props
	MaterialPropertyBlock_t2185221811 * ___props_4;

public:
	inline static int32_t get_offset_of_ballPrefab_2() { return static_cast<int32_t>(offsetof(BallMaker_t3504366277, ___ballPrefab_2)); }
	inline GameObject_t2790157070 * get_ballPrefab_2() const { return ___ballPrefab_2; }
	inline GameObject_t2790157070 ** get_address_of_ballPrefab_2() { return &___ballPrefab_2; }
	inline void set_ballPrefab_2(GameObject_t2790157070 * value)
	{
		___ballPrefab_2 = value;
		Il2CppCodeGenWriteBarrier((&___ballPrefab_2), value);
	}

	inline static int32_t get_offset_of_createHeight_3() { return static_cast<int32_t>(offsetof(BallMaker_t3504366277, ___createHeight_3)); }
	inline float get_createHeight_3() const { return ___createHeight_3; }
	inline float* get_address_of_createHeight_3() { return &___createHeight_3; }
	inline void set_createHeight_3(float value)
	{
		___createHeight_3 = value;
	}

	inline static int32_t get_offset_of_props_4() { return static_cast<int32_t>(offsetof(BallMaker_t3504366277, ___props_4)); }
	inline MaterialPropertyBlock_t2185221811 * get_props_4() const { return ___props_4; }
	inline MaterialPropertyBlock_t2185221811 ** get_address_of_props_4() { return &___props_4; }
	inline void set_props_4(MaterialPropertyBlock_t2185221811 * value)
	{
		___props_4 = value;
		Il2CppCodeGenWriteBarrier((&___props_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BALLMAKER_T3504366277_H
#ifndef BALLMOVER_T259337474_H
#define BALLMOVER_T259337474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BallMover
struct  BallMover_t259337474  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.GameObject BallMover::collBallPrefab
	GameObject_t2790157070 * ___collBallPrefab_2;
	// UnityEngine.GameObject BallMover::collBallGO
	GameObject_t2790157070 * ___collBallGO_3;

public:
	inline static int32_t get_offset_of_collBallPrefab_2() { return static_cast<int32_t>(offsetof(BallMover_t259337474, ___collBallPrefab_2)); }
	inline GameObject_t2790157070 * get_collBallPrefab_2() const { return ___collBallPrefab_2; }
	inline GameObject_t2790157070 ** get_address_of_collBallPrefab_2() { return &___collBallPrefab_2; }
	inline void set_collBallPrefab_2(GameObject_t2790157070 * value)
	{
		___collBallPrefab_2 = value;
		Il2CppCodeGenWriteBarrier((&___collBallPrefab_2), value);
	}

	inline static int32_t get_offset_of_collBallGO_3() { return static_cast<int32_t>(offsetof(BallMover_t259337474, ___collBallGO_3)); }
	inline GameObject_t2790157070 * get_collBallGO_3() const { return ___collBallGO_3; }
	inline GameObject_t2790157070 ** get_address_of_collBallGO_3() { return &___collBallGO_3; }
	inline void set_collBallGO_3(GameObject_t2790157070 * value)
	{
		___collBallGO_3 = value;
		Il2CppCodeGenWriteBarrier((&___collBallGO_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BALLMOVER_T259337474_H
#ifndef BALLZ_T4211643134_H
#define BALLZ_T4211643134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ballz
struct  Ballz_t4211643134  : public MonoBehaviour_t4005906508
{
public:
	// System.Single Ballz::yDistanceThreshold
	float ___yDistanceThreshold_2;
	// System.Single Ballz::startingY
	float ___startingY_3;

public:
	inline static int32_t get_offset_of_yDistanceThreshold_2() { return static_cast<int32_t>(offsetof(Ballz_t4211643134, ___yDistanceThreshold_2)); }
	inline float get_yDistanceThreshold_2() const { return ___yDistanceThreshold_2; }
	inline float* get_address_of_yDistanceThreshold_2() { return &___yDistanceThreshold_2; }
	inline void set_yDistanceThreshold_2(float value)
	{
		___yDistanceThreshold_2 = value;
	}

	inline static int32_t get_offset_of_startingY_3() { return static_cast<int32_t>(offsetof(Ballz_t4211643134, ___startingY_3)); }
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
#endif // BALLZ_T4211643134_H
#ifndef MODESWITCHER_T1880064702_H
#define MODESWITCHER_T1880064702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ModeSwitcher
struct  ModeSwitcher_t1880064702  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.GameObject ModeSwitcher::ballMake
	GameObject_t2790157070 * ___ballMake_2;
	// UnityEngine.GameObject ModeSwitcher::ballMove
	GameObject_t2790157070 * ___ballMove_3;
	// System.Int32 ModeSwitcher::appMode
	int32_t ___appMode_4;

public:
	inline static int32_t get_offset_of_ballMake_2() { return static_cast<int32_t>(offsetof(ModeSwitcher_t1880064702, ___ballMake_2)); }
	inline GameObject_t2790157070 * get_ballMake_2() const { return ___ballMake_2; }
	inline GameObject_t2790157070 ** get_address_of_ballMake_2() { return &___ballMake_2; }
	inline void set_ballMake_2(GameObject_t2790157070 * value)
	{
		___ballMake_2 = value;
		Il2CppCodeGenWriteBarrier((&___ballMake_2), value);
	}

	inline static int32_t get_offset_of_ballMove_3() { return static_cast<int32_t>(offsetof(ModeSwitcher_t1880064702, ___ballMove_3)); }
	inline GameObject_t2790157070 * get_ballMove_3() const { return ___ballMove_3; }
	inline GameObject_t2790157070 ** get_address_of_ballMove_3() { return &___ballMove_3; }
	inline void set_ballMove_3(GameObject_t2790157070 * value)
	{
		___ballMove_3 = value;
		Il2CppCodeGenWriteBarrier((&___ballMove_3), value);
	}

	inline static int32_t get_offset_of_appMode_4() { return static_cast<int32_t>(offsetof(ModeSwitcher_t1880064702, ___appMode_4)); }
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
#endif // MODESWITCHER_T1880064702_H
#ifndef FIRSTMODULE_T3741243721_H
#define FIRSTMODULE_T3741243721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// firstModule
struct  firstModule_t3741243721  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.GameObject firstModule::replaceBulb
	GameObject_t2790157070 * ___replaceBulb_2;
	// UnityEngine.GameObject firstModule::badBulb
	GameObject_t2790157070 * ___badBulb_3;
	// UnityEngine.GameObject firstModule::cflTrans
	GameObject_t2790157070 * ___cflTrans_4;
	// UnityEngine.GameObject firstModule::cflBulb
	GameObject_t2790157070 * ___cflBulb_5;
	// UnityEngine.GameObject firstModule::lampShade
	GameObject_t2790157070 * ___lampShade_6;
	// UnityEngine.Material firstModule::lampShadeMat
	Material_t1280402239 * ___lampShadeMat_7;
	// UnityEngine.GameObject firstModule::buildingFactTop
	GameObject_t2790157070 * ___buildingFactTop_8;
	// UnityEngine.GameObject firstModule::pointer
	GameObject_t2790157070 * ___pointer_9;
	// UnityEngine.GameObject firstModule::buildingFactBot
	GameObject_t2790157070 * ___buildingFactBot_10;
	// UnityEngine.GameObject firstModule::dontForget
	GameObject_t2790157070 * ___dontForget_11;
	// UnityEngine.GameObject firstModule::turnOff
	GameObject_t2790157070 * ___turnOff_12;
	// UnityEngine.GameObject firstModule::lampSpotlight
	GameObject_t2790157070 * ___lampSpotlight_13;
	// UnityEngine.Material firstModule::smokeHigh
	Material_t1280402239 * ___smokeHigh_14;
	// UnityEngine.GameObject firstModule::toSecondMod
	GameObject_t2790157070 * ___toSecondMod_15;

public:
	inline static int32_t get_offset_of_replaceBulb_2() { return static_cast<int32_t>(offsetof(firstModule_t3741243721, ___replaceBulb_2)); }
	inline GameObject_t2790157070 * get_replaceBulb_2() const { return ___replaceBulb_2; }
	inline GameObject_t2790157070 ** get_address_of_replaceBulb_2() { return &___replaceBulb_2; }
	inline void set_replaceBulb_2(GameObject_t2790157070 * value)
	{
		___replaceBulb_2 = value;
		Il2CppCodeGenWriteBarrier((&___replaceBulb_2), value);
	}

	inline static int32_t get_offset_of_badBulb_3() { return static_cast<int32_t>(offsetof(firstModule_t3741243721, ___badBulb_3)); }
	inline GameObject_t2790157070 * get_badBulb_3() const { return ___badBulb_3; }
	inline GameObject_t2790157070 ** get_address_of_badBulb_3() { return &___badBulb_3; }
	inline void set_badBulb_3(GameObject_t2790157070 * value)
	{
		___badBulb_3 = value;
		Il2CppCodeGenWriteBarrier((&___badBulb_3), value);
	}

	inline static int32_t get_offset_of_cflTrans_4() { return static_cast<int32_t>(offsetof(firstModule_t3741243721, ___cflTrans_4)); }
	inline GameObject_t2790157070 * get_cflTrans_4() const { return ___cflTrans_4; }
	inline GameObject_t2790157070 ** get_address_of_cflTrans_4() { return &___cflTrans_4; }
	inline void set_cflTrans_4(GameObject_t2790157070 * value)
	{
		___cflTrans_4 = value;
		Il2CppCodeGenWriteBarrier((&___cflTrans_4), value);
	}

	inline static int32_t get_offset_of_cflBulb_5() { return static_cast<int32_t>(offsetof(firstModule_t3741243721, ___cflBulb_5)); }
	inline GameObject_t2790157070 * get_cflBulb_5() const { return ___cflBulb_5; }
	inline GameObject_t2790157070 ** get_address_of_cflBulb_5() { return &___cflBulb_5; }
	inline void set_cflBulb_5(GameObject_t2790157070 * value)
	{
		___cflBulb_5 = value;
		Il2CppCodeGenWriteBarrier((&___cflBulb_5), value);
	}

	inline static int32_t get_offset_of_lampShade_6() { return static_cast<int32_t>(offsetof(firstModule_t3741243721, ___lampShade_6)); }
	inline GameObject_t2790157070 * get_lampShade_6() const { return ___lampShade_6; }
	inline GameObject_t2790157070 ** get_address_of_lampShade_6() { return &___lampShade_6; }
	inline void set_lampShade_6(GameObject_t2790157070 * value)
	{
		___lampShade_6 = value;
		Il2CppCodeGenWriteBarrier((&___lampShade_6), value);
	}

	inline static int32_t get_offset_of_lampShadeMat_7() { return static_cast<int32_t>(offsetof(firstModule_t3741243721, ___lampShadeMat_7)); }
	inline Material_t1280402239 * get_lampShadeMat_7() const { return ___lampShadeMat_7; }
	inline Material_t1280402239 ** get_address_of_lampShadeMat_7() { return &___lampShadeMat_7; }
	inline void set_lampShadeMat_7(Material_t1280402239 * value)
	{
		___lampShadeMat_7 = value;
		Il2CppCodeGenWriteBarrier((&___lampShadeMat_7), value);
	}

	inline static int32_t get_offset_of_buildingFactTop_8() { return static_cast<int32_t>(offsetof(firstModule_t3741243721, ___buildingFactTop_8)); }
	inline GameObject_t2790157070 * get_buildingFactTop_8() const { return ___buildingFactTop_8; }
	inline GameObject_t2790157070 ** get_address_of_buildingFactTop_8() { return &___buildingFactTop_8; }
	inline void set_buildingFactTop_8(GameObject_t2790157070 * value)
	{
		___buildingFactTop_8 = value;
		Il2CppCodeGenWriteBarrier((&___buildingFactTop_8), value);
	}

	inline static int32_t get_offset_of_pointer_9() { return static_cast<int32_t>(offsetof(firstModule_t3741243721, ___pointer_9)); }
	inline GameObject_t2790157070 * get_pointer_9() const { return ___pointer_9; }
	inline GameObject_t2790157070 ** get_address_of_pointer_9() { return &___pointer_9; }
	inline void set_pointer_9(GameObject_t2790157070 * value)
	{
		___pointer_9 = value;
		Il2CppCodeGenWriteBarrier((&___pointer_9), value);
	}

	inline static int32_t get_offset_of_buildingFactBot_10() { return static_cast<int32_t>(offsetof(firstModule_t3741243721, ___buildingFactBot_10)); }
	inline GameObject_t2790157070 * get_buildingFactBot_10() const { return ___buildingFactBot_10; }
	inline GameObject_t2790157070 ** get_address_of_buildingFactBot_10() { return &___buildingFactBot_10; }
	inline void set_buildingFactBot_10(GameObject_t2790157070 * value)
	{
		___buildingFactBot_10 = value;
		Il2CppCodeGenWriteBarrier((&___buildingFactBot_10), value);
	}

	inline static int32_t get_offset_of_dontForget_11() { return static_cast<int32_t>(offsetof(firstModule_t3741243721, ___dontForget_11)); }
	inline GameObject_t2790157070 * get_dontForget_11() const { return ___dontForget_11; }
	inline GameObject_t2790157070 ** get_address_of_dontForget_11() { return &___dontForget_11; }
	inline void set_dontForget_11(GameObject_t2790157070 * value)
	{
		___dontForget_11 = value;
		Il2CppCodeGenWriteBarrier((&___dontForget_11), value);
	}

	inline static int32_t get_offset_of_turnOff_12() { return static_cast<int32_t>(offsetof(firstModule_t3741243721, ___turnOff_12)); }
	inline GameObject_t2790157070 * get_turnOff_12() const { return ___turnOff_12; }
	inline GameObject_t2790157070 ** get_address_of_turnOff_12() { return &___turnOff_12; }
	inline void set_turnOff_12(GameObject_t2790157070 * value)
	{
		___turnOff_12 = value;
		Il2CppCodeGenWriteBarrier((&___turnOff_12), value);
	}

	inline static int32_t get_offset_of_lampSpotlight_13() { return static_cast<int32_t>(offsetof(firstModule_t3741243721, ___lampSpotlight_13)); }
	inline GameObject_t2790157070 * get_lampSpotlight_13() const { return ___lampSpotlight_13; }
	inline GameObject_t2790157070 ** get_address_of_lampSpotlight_13() { return &___lampSpotlight_13; }
	inline void set_lampSpotlight_13(GameObject_t2790157070 * value)
	{
		___lampSpotlight_13 = value;
		Il2CppCodeGenWriteBarrier((&___lampSpotlight_13), value);
	}

	inline static int32_t get_offset_of_smokeHigh_14() { return static_cast<int32_t>(offsetof(firstModule_t3741243721, ___smokeHigh_14)); }
	inline Material_t1280402239 * get_smokeHigh_14() const { return ___smokeHigh_14; }
	inline Material_t1280402239 ** get_address_of_smokeHigh_14() { return &___smokeHigh_14; }
	inline void set_smokeHigh_14(Material_t1280402239 * value)
	{
		___smokeHigh_14 = value;
		Il2CppCodeGenWriteBarrier((&___smokeHigh_14), value);
	}

	inline static int32_t get_offset_of_toSecondMod_15() { return static_cast<int32_t>(offsetof(firstModule_t3741243721, ___toSecondMod_15)); }
	inline GameObject_t2790157070 * get_toSecondMod_15() const { return ___toSecondMod_15; }
	inline GameObject_t2790157070 ** get_address_of_toSecondMod_15() { return &___toSecondMod_15; }
	inline void set_toSecondMod_15(GameObject_t2790157070 * value)
	{
		___toSecondMod_15 = value;
		Il2CppCodeGenWriteBarrier((&___toSecondMod_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIRSTMODULE_T3741243721_H
#ifndef FALLCONTROLLER_T62648720_H
#define FALLCONTROLLER_T62648720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// fallController
struct  fallController_t62648720  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.GameObject fallController::ballGroup
	GameObject_t2790157070 * ___ballGroup_2;

public:
	inline static int32_t get_offset_of_ballGroup_2() { return static_cast<int32_t>(offsetof(fallController_t62648720, ___ballGroup_2)); }
	inline GameObject_t2790157070 * get_ballGroup_2() const { return ___ballGroup_2; }
	inline GameObject_t2790157070 ** get_address_of_ballGroup_2() { return &___ballGroup_2; }
	inline void set_ballGroup_2(GameObject_t2790157070 * value)
	{
		___ballGroup_2 = value;
		Il2CppCodeGenWriteBarrier((&___ballGroup_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FALLCONTROLLER_T62648720_H
#ifndef FADEAWAYSCRIPT_T3107141636_H
#define FADEAWAYSCRIPT_T3107141636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FadeAwayScript
struct  FadeAwayScript_t3107141636  : public MonoBehaviour_t4005906508
{
public:
	// System.Single FadeAwayScript::duration
	float ___duration_2;
	// UnityEngine.GameObject FadeAwayScript::TapToText
	GameObject_t2790157070 * ___TapToText_3;

public:
	inline static int32_t get_offset_of_duration_2() { return static_cast<int32_t>(offsetof(FadeAwayScript_t3107141636, ___duration_2)); }
	inline float get_duration_2() const { return ___duration_2; }
	inline float* get_address_of_duration_2() { return &___duration_2; }
	inline void set_duration_2(float value)
	{
		___duration_2 = value;
	}

	inline static int32_t get_offset_of_TapToText_3() { return static_cast<int32_t>(offsetof(FadeAwayScript_t3107141636, ___TapToText_3)); }
	inline GameObject_t2790157070 * get_TapToText_3() const { return ___TapToText_3; }
	inline GameObject_t2790157070 ** get_address_of_TapToText_3() { return &___TapToText_3; }
	inline void set_TapToText_3(GameObject_t2790157070 * value)
	{
		___TapToText_3 = value;
		Il2CppCodeGenWriteBarrier((&___TapToText_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FADEAWAYSCRIPT_T3107141636_H
#ifndef FACTTRIGGER_T111081606_H
#define FACTTRIGGER_T111081606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// factTrigger
struct  factTrigger_t111081606  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.GameObject factTrigger::fact2
	GameObject_t2790157070 * ___fact2_2;

public:
	inline static int32_t get_offset_of_fact2_2() { return static_cast<int32_t>(offsetof(factTrigger_t111081606, ___fact2_2)); }
	inline GameObject_t2790157070 * get_fact2_2() const { return ___fact2_2; }
	inline GameObject_t2790157070 ** get_address_of_fact2_2() { return &___fact2_2; }
	inline void set_fact2_2(GameObject_t2790157070 * value)
	{
		___fact2_2 = value;
		Il2CppCodeGenWriteBarrier((&___fact2_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FACTTRIGGER_T111081606_H
#ifndef FACTHIT4_T240439677_H
#define FACTHIT4_T240439677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FactHit4
struct  FactHit4_t240439677  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.Vector3 FactHit4::fact4OrigPos
	Vector3_t3278824678  ___fact4OrigPos_2;
	// UnityEngine.Vector3 FactHit4::fact4NewPos
	Vector3_t3278824678  ___fact4NewPos_3;

public:
	inline static int32_t get_offset_of_fact4OrigPos_2() { return static_cast<int32_t>(offsetof(FactHit4_t240439677, ___fact4OrigPos_2)); }
	inline Vector3_t3278824678  get_fact4OrigPos_2() const { return ___fact4OrigPos_2; }
	inline Vector3_t3278824678 * get_address_of_fact4OrigPos_2() { return &___fact4OrigPos_2; }
	inline void set_fact4OrigPos_2(Vector3_t3278824678  value)
	{
		___fact4OrigPos_2 = value;
	}

	inline static int32_t get_offset_of_fact4NewPos_3() { return static_cast<int32_t>(offsetof(FactHit4_t240439677, ___fact4NewPos_3)); }
	inline Vector3_t3278824678  get_fact4NewPos_3() const { return ___fact4NewPos_3; }
	inline Vector3_t3278824678 * get_address_of_fact4NewPos_3() { return &___fact4NewPos_3; }
	inline void set_fact4NewPos_3(Vector3_t3278824678  value)
	{
		___fact4NewPos_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FACTHIT4_T240439677_H
#ifndef FACTHIT3_T3642583700_H
#define FACTHIT3_T3642583700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FactHit3
struct  FactHit3_t3642583700  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.Vector3 FactHit3::fact3OrigPos
	Vector3_t3278824678  ___fact3OrigPos_2;
	// UnityEngine.Vector3 FactHit3::fact3NewPos
	Vector3_t3278824678  ___fact3NewPos_3;

public:
	inline static int32_t get_offset_of_fact3OrigPos_2() { return static_cast<int32_t>(offsetof(FactHit3_t3642583700, ___fact3OrigPos_2)); }
	inline Vector3_t3278824678  get_fact3OrigPos_2() const { return ___fact3OrigPos_2; }
	inline Vector3_t3278824678 * get_address_of_fact3OrigPos_2() { return &___fact3OrigPos_2; }
	inline void set_fact3OrigPos_2(Vector3_t3278824678  value)
	{
		___fact3OrigPos_2 = value;
	}

	inline static int32_t get_offset_of_fact3NewPos_3() { return static_cast<int32_t>(offsetof(FactHit3_t3642583700, ___fact3NewPos_3)); }
	inline Vector3_t3278824678  get_fact3NewPos_3() const { return ___fact3NewPos_3; }
	inline Vector3_t3278824678 * get_address_of_fact3NewPos_3() { return &___fact3NewPos_3; }
	inline void set_fact3NewPos_3(Vector3_t3278824678  value)
	{
		___fact3NewPos_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FACTHIT3_T3642583700_H
#ifndef CO2ARHITTEST_T2479271917_H
#define CO2ARHITTEST_T2479271917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.Co2ARHitTest
struct  Co2ARHitTest_t2479271917  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.Transform UnityEngine.XR.iOS.Co2ARHitTest::m_HitTransform
	Transform_t3297798951 * ___m_HitTransform_2;
	// System.Single UnityEngine.XR.iOS.Co2ARHitTest::maxRayDistance
	float ___maxRayDistance_3;
	// UnityEngine.LayerMask UnityEngine.XR.iOS.Co2ARHitTest::collisionLayer
	LayerMask_t3213958634  ___collisionLayer_4;
	// UnityEngine.GameObject UnityEngine.XR.iOS.Co2ARHitTest::BlueFocusSquare
	GameObject_t2790157070 * ___BlueFocusSquare_5;
	// UnityEngine.GameObject UnityEngine.XR.iOS.Co2ARHitTest::FocusedSquare
	GameObject_t2790157070 * ___FocusedSquare_6;
	// UnityEngine.GameObject UnityEngine.XR.iOS.Co2ARHitTest::WholeLamp
	GameObject_t2790157070 * ___WholeLamp_7;
	// UnityEngine.GameObject UnityEngine.XR.iOS.Co2ARHitTest::TapToText
	GameObject_t2790157070 * ___TapToText_8;
	// UnityEngine.GameObject UnityEngine.XR.iOS.Co2ARHitTest::lampNewCollider
	GameObject_t2790157070 * ___lampNewCollider_9;
	// UnityEngine.Material UnityEngine.XR.iOS.Co2ARHitTest::lampShade
	Material_t1280402239 * ___lampShade_10;
	// UnityEngine.Collider UnityEngine.XR.iOS.Co2ARHitTest::m_Collider
	Collider_t1018170857 * ___m_Collider_11;

public:
	inline static int32_t get_offset_of_m_HitTransform_2() { return static_cast<int32_t>(offsetof(Co2ARHitTest_t2479271917, ___m_HitTransform_2)); }
	inline Transform_t3297798951 * get_m_HitTransform_2() const { return ___m_HitTransform_2; }
	inline Transform_t3297798951 ** get_address_of_m_HitTransform_2() { return &___m_HitTransform_2; }
	inline void set_m_HitTransform_2(Transform_t3297798951 * value)
	{
		___m_HitTransform_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_HitTransform_2), value);
	}

	inline static int32_t get_offset_of_maxRayDistance_3() { return static_cast<int32_t>(offsetof(Co2ARHitTest_t2479271917, ___maxRayDistance_3)); }
	inline float get_maxRayDistance_3() const { return ___maxRayDistance_3; }
	inline float* get_address_of_maxRayDistance_3() { return &___maxRayDistance_3; }
	inline void set_maxRayDistance_3(float value)
	{
		___maxRayDistance_3 = value;
	}

	inline static int32_t get_offset_of_collisionLayer_4() { return static_cast<int32_t>(offsetof(Co2ARHitTest_t2479271917, ___collisionLayer_4)); }
	inline LayerMask_t3213958634  get_collisionLayer_4() const { return ___collisionLayer_4; }
	inline LayerMask_t3213958634 * get_address_of_collisionLayer_4() { return &___collisionLayer_4; }
	inline void set_collisionLayer_4(LayerMask_t3213958634  value)
	{
		___collisionLayer_4 = value;
	}

	inline static int32_t get_offset_of_BlueFocusSquare_5() { return static_cast<int32_t>(offsetof(Co2ARHitTest_t2479271917, ___BlueFocusSquare_5)); }
	inline GameObject_t2790157070 * get_BlueFocusSquare_5() const { return ___BlueFocusSquare_5; }
	inline GameObject_t2790157070 ** get_address_of_BlueFocusSquare_5() { return &___BlueFocusSquare_5; }
	inline void set_BlueFocusSquare_5(GameObject_t2790157070 * value)
	{
		___BlueFocusSquare_5 = value;
		Il2CppCodeGenWriteBarrier((&___BlueFocusSquare_5), value);
	}

	inline static int32_t get_offset_of_FocusedSquare_6() { return static_cast<int32_t>(offsetof(Co2ARHitTest_t2479271917, ___FocusedSquare_6)); }
	inline GameObject_t2790157070 * get_FocusedSquare_6() const { return ___FocusedSquare_6; }
	inline GameObject_t2790157070 ** get_address_of_FocusedSquare_6() { return &___FocusedSquare_6; }
	inline void set_FocusedSquare_6(GameObject_t2790157070 * value)
	{
		___FocusedSquare_6 = value;
		Il2CppCodeGenWriteBarrier((&___FocusedSquare_6), value);
	}

	inline static int32_t get_offset_of_WholeLamp_7() { return static_cast<int32_t>(offsetof(Co2ARHitTest_t2479271917, ___WholeLamp_7)); }
	inline GameObject_t2790157070 * get_WholeLamp_7() const { return ___WholeLamp_7; }
	inline GameObject_t2790157070 ** get_address_of_WholeLamp_7() { return &___WholeLamp_7; }
	inline void set_WholeLamp_7(GameObject_t2790157070 * value)
	{
		___WholeLamp_7 = value;
		Il2CppCodeGenWriteBarrier((&___WholeLamp_7), value);
	}

	inline static int32_t get_offset_of_TapToText_8() { return static_cast<int32_t>(offsetof(Co2ARHitTest_t2479271917, ___TapToText_8)); }
	inline GameObject_t2790157070 * get_TapToText_8() const { return ___TapToText_8; }
	inline GameObject_t2790157070 ** get_address_of_TapToText_8() { return &___TapToText_8; }
	inline void set_TapToText_8(GameObject_t2790157070 * value)
	{
		___TapToText_8 = value;
		Il2CppCodeGenWriteBarrier((&___TapToText_8), value);
	}

	inline static int32_t get_offset_of_lampNewCollider_9() { return static_cast<int32_t>(offsetof(Co2ARHitTest_t2479271917, ___lampNewCollider_9)); }
	inline GameObject_t2790157070 * get_lampNewCollider_9() const { return ___lampNewCollider_9; }
	inline GameObject_t2790157070 ** get_address_of_lampNewCollider_9() { return &___lampNewCollider_9; }
	inline void set_lampNewCollider_9(GameObject_t2790157070 * value)
	{
		___lampNewCollider_9 = value;
		Il2CppCodeGenWriteBarrier((&___lampNewCollider_9), value);
	}

	inline static int32_t get_offset_of_lampShade_10() { return static_cast<int32_t>(offsetof(Co2ARHitTest_t2479271917, ___lampShade_10)); }
	inline Material_t1280402239 * get_lampShade_10() const { return ___lampShade_10; }
	inline Material_t1280402239 ** get_address_of_lampShade_10() { return &___lampShade_10; }
	inline void set_lampShade_10(Material_t1280402239 * value)
	{
		___lampShade_10 = value;
		Il2CppCodeGenWriteBarrier((&___lampShade_10), value);
	}

	inline static int32_t get_offset_of_m_Collider_11() { return static_cast<int32_t>(offsetof(Co2ARHitTest_t2479271917, ___m_Collider_11)); }
	inline Collider_t1018170857 * get_m_Collider_11() const { return ___m_Collider_11; }
	inline Collider_t1018170857 ** get_address_of_m_Collider_11() { return &___m_Collider_11; }
	inline void set_m_Collider_11(Collider_t1018170857 * value)
	{
		___m_Collider_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CO2ARHITTEST_T2479271917_H
#ifndef BADCOLLISION_T1007815740_H
#define BADCOLLISION_T1007815740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// badCollision
struct  badCollision_t1007815740  : public MonoBehaviour_t4005906508
{
public:
	// System.Boolean badCollision::hasCollide
	bool ___hasCollide_2;

public:
	inline static int32_t get_offset_of_hasCollide_2() { return static_cast<int32_t>(offsetof(badCollision_t1007815740, ___hasCollide_2)); }
	inline bool get_hasCollide_2() const { return ___hasCollide_2; }
	inline bool* get_address_of_hasCollide_2() { return &___hasCollide_2; }
	inline void set_hasCollide_2(bool value)
	{
		___hasCollide_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BADCOLLISION_T1007815740_H
#ifndef BALLDROP_T731330100_H
#define BALLDROP_T731330100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ballDrop
struct  ballDrop_t731330100  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.GameObject ballDrop::sphereContainer
	GameObject_t2790157070 * ___sphereContainer_2;

public:
	inline static int32_t get_offset_of_sphereContainer_2() { return static_cast<int32_t>(offsetof(ballDrop_t731330100, ___sphereContainer_2)); }
	inline GameObject_t2790157070 * get_sphereContainer_2() const { return ___sphereContainer_2; }
	inline GameObject_t2790157070 ** get_address_of_sphereContainer_2() { return &___sphereContainer_2; }
	inline void set_sphereContainer_2(GameObject_t2790157070 * value)
	{
		___sphereContainer_2 = value;
		Il2CppCodeGenWriteBarrier((&___sphereContainer_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BALLDROP_T731330100_H
#ifndef CAMERASCRIPT_T929757159_H
#define CAMERASCRIPT_T929757159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraScript
struct  CameraScript_t929757159  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.Transform CameraScript::lookAt
	Transform_t3297798951 * ___lookAt_2;
	// UnityEngine.Transform CameraScript::camTransform
	Transform_t3297798951 * ___camTransform_3;
	// UnityEngine.Camera CameraScript::cam
	Camera_t24784459 * ___cam_4;
	// System.Single CameraScript::distance
	float ___distance_5;
	// System.Single CameraScript::currentX
	float ___currentX_6;
	// System.Single CameraScript::currentY
	float ___currentY_7;
	// System.Single CameraScript::sensivityX
	float ___sensivityX_8;
	// System.Single CameraScript::sensivityY
	float ___sensivityY_9;

public:
	inline static int32_t get_offset_of_lookAt_2() { return static_cast<int32_t>(offsetof(CameraScript_t929757159, ___lookAt_2)); }
	inline Transform_t3297798951 * get_lookAt_2() const { return ___lookAt_2; }
	inline Transform_t3297798951 ** get_address_of_lookAt_2() { return &___lookAt_2; }
	inline void set_lookAt_2(Transform_t3297798951 * value)
	{
		___lookAt_2 = value;
		Il2CppCodeGenWriteBarrier((&___lookAt_2), value);
	}

	inline static int32_t get_offset_of_camTransform_3() { return static_cast<int32_t>(offsetof(CameraScript_t929757159, ___camTransform_3)); }
	inline Transform_t3297798951 * get_camTransform_3() const { return ___camTransform_3; }
	inline Transform_t3297798951 ** get_address_of_camTransform_3() { return &___camTransform_3; }
	inline void set_camTransform_3(Transform_t3297798951 * value)
	{
		___camTransform_3 = value;
		Il2CppCodeGenWriteBarrier((&___camTransform_3), value);
	}

	inline static int32_t get_offset_of_cam_4() { return static_cast<int32_t>(offsetof(CameraScript_t929757159, ___cam_4)); }
	inline Camera_t24784459 * get_cam_4() const { return ___cam_4; }
	inline Camera_t24784459 ** get_address_of_cam_4() { return &___cam_4; }
	inline void set_cam_4(Camera_t24784459 * value)
	{
		___cam_4 = value;
		Il2CppCodeGenWriteBarrier((&___cam_4), value);
	}

	inline static int32_t get_offset_of_distance_5() { return static_cast<int32_t>(offsetof(CameraScript_t929757159, ___distance_5)); }
	inline float get_distance_5() const { return ___distance_5; }
	inline float* get_address_of_distance_5() { return &___distance_5; }
	inline void set_distance_5(float value)
	{
		___distance_5 = value;
	}

	inline static int32_t get_offset_of_currentX_6() { return static_cast<int32_t>(offsetof(CameraScript_t929757159, ___currentX_6)); }
	inline float get_currentX_6() const { return ___currentX_6; }
	inline float* get_address_of_currentX_6() { return &___currentX_6; }
	inline void set_currentX_6(float value)
	{
		___currentX_6 = value;
	}

	inline static int32_t get_offset_of_currentY_7() { return static_cast<int32_t>(offsetof(CameraScript_t929757159, ___currentY_7)); }
	inline float get_currentY_7() const { return ___currentY_7; }
	inline float* get_address_of_currentY_7() { return &___currentY_7; }
	inline void set_currentY_7(float value)
	{
		___currentY_7 = value;
	}

	inline static int32_t get_offset_of_sensivityX_8() { return static_cast<int32_t>(offsetof(CameraScript_t929757159, ___sensivityX_8)); }
	inline float get_sensivityX_8() const { return ___sensivityX_8; }
	inline float* get_address_of_sensivityX_8() { return &___sensivityX_8; }
	inline void set_sensivityX_8(float value)
	{
		___sensivityX_8 = value;
	}

	inline static int32_t get_offset_of_sensivityY_9() { return static_cast<int32_t>(offsetof(CameraScript_t929757159, ___sensivityY_9)); }
	inline float get_sensivityY_9() const { return ___sensivityY_9; }
	inline float* get_address_of_sensivityY_9() { return &___sensivityY_9; }
	inline void set_sensivityY_9(float value)
	{
		___sensivityY_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERASCRIPT_T929757159_H
#ifndef CHANGETRASHCOLOR_T2877154574_H
#define CHANGETRASHCOLOR_T2877154574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// changeTrashColor
struct  changeTrashColor_t2877154574  : public MonoBehaviour_t4005906508
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANGETRASHCOLOR_T2877154574_H
#ifndef COLLIDEFREEZE_T287383390_H
#define COLLIDEFREEZE_T287383390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// collideFreeze
struct  collideFreeze_t287383390  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.Rigidbody collideFreeze::rb
	Rigidbody_t1534326339 * ___rb_2;

public:
	inline static int32_t get_offset_of_rb_2() { return static_cast<int32_t>(offsetof(collideFreeze_t287383390, ___rb_2)); }
	inline Rigidbody_t1534326339 * get_rb_2() const { return ___rb_2; }
	inline Rigidbody_t1534326339 ** get_address_of_rb_2() { return &___rb_2; }
	inline void set_rb_2(Rigidbody_t1534326339 * value)
	{
		___rb_2 = value;
		Il2CppCodeGenWriteBarrier((&___rb_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDEFREEZE_T287383390_H
#ifndef TELEMETRYCONFIGURATIONBUTTON_T3565569840_H
#define TELEMETRYCONFIGURATIONBUTTON_T3565569840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.Utilities.TelemetryConfigurationButton
struct  TelemetryConfigurationButton_t3565569840  : public MonoBehaviour_t4005906508
{
public:
	// System.Boolean Mapbox.Unity.Utilities.TelemetryConfigurationButton::_booleanValue
	bool ____booleanValue_2;

public:
	inline static int32_t get_offset_of__booleanValue_2() { return static_cast<int32_t>(offsetof(TelemetryConfigurationButton_t3565569840, ____booleanValue_2)); }
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
#endif // TELEMETRYCONFIGURATIONBUTTON_T3565569840_H
#ifndef COLLIDESCRIPT_T2225690301_H
#define COLLIDESCRIPT_T2225690301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// collideScript
struct  collideScript_t2225690301  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.GameObject collideScript::showCube
	GameObject_t2790157070 * ___showCube_2;

public:
	inline static int32_t get_offset_of_showCube_2() { return static_cast<int32_t>(offsetof(collideScript_t2225690301, ___showCube_2)); }
	inline GameObject_t2790157070 * get_showCube_2() const { return ___showCube_2; }
	inline GameObject_t2790157070 ** get_address_of_showCube_2() { return &___showCube_2; }
	inline void set_showCube_2(GameObject_t2790157070 * value)
	{
		___showCube_2 = value;
		Il2CppCodeGenWriteBarrier((&___showCube_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDESCRIPT_T2225690301_H
#ifndef RUNNABLE_T1303446502_H
#define RUNNABLE_T1303446502_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.Utilities.Runnable
struct  Runnable_t1303446502  : public MonoBehaviour_t4005906508
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Mapbox.Unity.Utilities.Runnable/Routine> Mapbox.Unity.Utilities.Runnable::m_Routines
	Dictionary_2_t1452874026 * ___m_Routines_2;
	// System.Int32 Mapbox.Unity.Utilities.Runnable::m_NextRoutineId
	int32_t ___m_NextRoutineId_3;

public:
	inline static int32_t get_offset_of_m_Routines_2() { return static_cast<int32_t>(offsetof(Runnable_t1303446502, ___m_Routines_2)); }
	inline Dictionary_2_t1452874026 * get_m_Routines_2() const { return ___m_Routines_2; }
	inline Dictionary_2_t1452874026 ** get_address_of_m_Routines_2() { return &___m_Routines_2; }
	inline void set_m_Routines_2(Dictionary_2_t1452874026 * value)
	{
		___m_Routines_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Routines_2), value);
	}

	inline static int32_t get_offset_of_m_NextRoutineId_3() { return static_cast<int32_t>(offsetof(Runnable_t1303446502, ___m_NextRoutineId_3)); }
	inline int32_t get_m_NextRoutineId_3() const { return ___m_NextRoutineId_3; }
	inline int32_t* get_address_of_m_NextRoutineId_3() { return &___m_NextRoutineId_3; }
	inline void set_m_NextRoutineId_3(int32_t value)
	{
		___m_NextRoutineId_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNNABLE_T1303446502_H
#ifndef DETECTCOLLISION_T1611557039_H
#define DETECTCOLLISION_T1611557039_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// detectCollision
struct  detectCollision_t1611557039  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.GameObject detectCollision::boxDialogue
	GameObject_t2790157070 * ___boxDialogue_2;
	// UnityEngine.GameObject detectCollision::sodaDialogue
	GameObject_t2790157070 * ___sodaDialogue_3;
	// UnityEngine.GameObject detectCollision::bottleDialogue
	GameObject_t2790157070 * ___bottleDialogue_4;

public:
	inline static int32_t get_offset_of_boxDialogue_2() { return static_cast<int32_t>(offsetof(detectCollision_t1611557039, ___boxDialogue_2)); }
	inline GameObject_t2790157070 * get_boxDialogue_2() const { return ___boxDialogue_2; }
	inline GameObject_t2790157070 ** get_address_of_boxDialogue_2() { return &___boxDialogue_2; }
	inline void set_boxDialogue_2(GameObject_t2790157070 * value)
	{
		___boxDialogue_2 = value;
		Il2CppCodeGenWriteBarrier((&___boxDialogue_2), value);
	}

	inline static int32_t get_offset_of_sodaDialogue_3() { return static_cast<int32_t>(offsetof(detectCollision_t1611557039, ___sodaDialogue_3)); }
	inline GameObject_t2790157070 * get_sodaDialogue_3() const { return ___sodaDialogue_3; }
	inline GameObject_t2790157070 ** get_address_of_sodaDialogue_3() { return &___sodaDialogue_3; }
	inline void set_sodaDialogue_3(GameObject_t2790157070 * value)
	{
		___sodaDialogue_3 = value;
		Il2CppCodeGenWriteBarrier((&___sodaDialogue_3), value);
	}

	inline static int32_t get_offset_of_bottleDialogue_4() { return static_cast<int32_t>(offsetof(detectCollision_t1611557039, ___bottleDialogue_4)); }
	inline GameObject_t2790157070 * get_bottleDialogue_4() const { return ___bottleDialogue_4; }
	inline GameObject_t2790157070 ** get_address_of_bottleDialogue_4() { return &___bottleDialogue_4; }
	inline void set_bottleDialogue_4(GameObject_t2790157070 * value)
	{
		___bottleDialogue_4 = value;
		Il2CppCodeGenWriteBarrier((&___bottleDialogue_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DETECTCOLLISION_T1611557039_H
#ifndef ENERGYHIT_T2262725360_H
#define ENERGYHIT_T2262725360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnergyHit
struct  EnergyHit_t2262725360  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.GameObject EnergyHit::coal
	GameObject_t2790157070 * ___coal_2;
	// UnityEngine.GameObject EnergyHit::solar
	GameObject_t2790157070 * ___solar_3;
	// UnityEngine.GameObject EnergyHit::chooseEnergy
	GameObject_t2790157070 * ___chooseEnergy_4;
	// UnityEngine.GameObject EnergyHit::energyFact
	GameObject_t2790157070 * ___energyFact_5;
	// UnityEngine.GameObject EnergyHit::pointer
	GameObject_t2790157070 * ___pointer_6;
	// UnityEngine.GameObject EnergyHit::energyFact2
	GameObject_t2790157070 * ___energyFact2_7;
	// UnityEngine.GameObject EnergyHit::seeImpact
	GameObject_t2790157070 * ___seeImpact_8;
	// UnityEngine.Material EnergyHit::smokeHigh
	Material_t1280402239 * ___smokeHigh_9;

public:
	inline static int32_t get_offset_of_coal_2() { return static_cast<int32_t>(offsetof(EnergyHit_t2262725360, ___coal_2)); }
	inline GameObject_t2790157070 * get_coal_2() const { return ___coal_2; }
	inline GameObject_t2790157070 ** get_address_of_coal_2() { return &___coal_2; }
	inline void set_coal_2(GameObject_t2790157070 * value)
	{
		___coal_2 = value;
		Il2CppCodeGenWriteBarrier((&___coal_2), value);
	}

	inline static int32_t get_offset_of_solar_3() { return static_cast<int32_t>(offsetof(EnergyHit_t2262725360, ___solar_3)); }
	inline GameObject_t2790157070 * get_solar_3() const { return ___solar_3; }
	inline GameObject_t2790157070 ** get_address_of_solar_3() { return &___solar_3; }
	inline void set_solar_3(GameObject_t2790157070 * value)
	{
		___solar_3 = value;
		Il2CppCodeGenWriteBarrier((&___solar_3), value);
	}

	inline static int32_t get_offset_of_chooseEnergy_4() { return static_cast<int32_t>(offsetof(EnergyHit_t2262725360, ___chooseEnergy_4)); }
	inline GameObject_t2790157070 * get_chooseEnergy_4() const { return ___chooseEnergy_4; }
	inline GameObject_t2790157070 ** get_address_of_chooseEnergy_4() { return &___chooseEnergy_4; }
	inline void set_chooseEnergy_4(GameObject_t2790157070 * value)
	{
		___chooseEnergy_4 = value;
		Il2CppCodeGenWriteBarrier((&___chooseEnergy_4), value);
	}

	inline static int32_t get_offset_of_energyFact_5() { return static_cast<int32_t>(offsetof(EnergyHit_t2262725360, ___energyFact_5)); }
	inline GameObject_t2790157070 * get_energyFact_5() const { return ___energyFact_5; }
	inline GameObject_t2790157070 ** get_address_of_energyFact_5() { return &___energyFact_5; }
	inline void set_energyFact_5(GameObject_t2790157070 * value)
	{
		___energyFact_5 = value;
		Il2CppCodeGenWriteBarrier((&___energyFact_5), value);
	}

	inline static int32_t get_offset_of_pointer_6() { return static_cast<int32_t>(offsetof(EnergyHit_t2262725360, ___pointer_6)); }
	inline GameObject_t2790157070 * get_pointer_6() const { return ___pointer_6; }
	inline GameObject_t2790157070 ** get_address_of_pointer_6() { return &___pointer_6; }
	inline void set_pointer_6(GameObject_t2790157070 * value)
	{
		___pointer_6 = value;
		Il2CppCodeGenWriteBarrier((&___pointer_6), value);
	}

	inline static int32_t get_offset_of_energyFact2_7() { return static_cast<int32_t>(offsetof(EnergyHit_t2262725360, ___energyFact2_7)); }
	inline GameObject_t2790157070 * get_energyFact2_7() const { return ___energyFact2_7; }
	inline GameObject_t2790157070 ** get_address_of_energyFact2_7() { return &___energyFact2_7; }
	inline void set_energyFact2_7(GameObject_t2790157070 * value)
	{
		___energyFact2_7 = value;
		Il2CppCodeGenWriteBarrier((&___energyFact2_7), value);
	}

	inline static int32_t get_offset_of_seeImpact_8() { return static_cast<int32_t>(offsetof(EnergyHit_t2262725360, ___seeImpact_8)); }
	inline GameObject_t2790157070 * get_seeImpact_8() const { return ___seeImpact_8; }
	inline GameObject_t2790157070 ** get_address_of_seeImpact_8() { return &___seeImpact_8; }
	inline void set_seeImpact_8(GameObject_t2790157070 * value)
	{
		___seeImpact_8 = value;
		Il2CppCodeGenWriteBarrier((&___seeImpact_8), value);
	}

	inline static int32_t get_offset_of_smokeHigh_9() { return static_cast<int32_t>(offsetof(EnergyHit_t2262725360, ___smokeHigh_9)); }
	inline Material_t1280402239 * get_smokeHigh_9() const { return ___smokeHigh_9; }
	inline Material_t1280402239 ** get_address_of_smokeHigh_9() { return &___smokeHigh_9; }
	inline void set_smokeHigh_9(Material_t1280402239 * value)
	{
		___smokeHigh_9 = value;
		Il2CppCodeGenWriteBarrier((&___smokeHigh_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENERGYHIT_T2262725360_H
#ifndef FACT1_SCRIPT_T1202835441_H
#define FACT1_SCRIPT_T1202835441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// fact1_script
struct  fact1_script_t1202835441  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.GameObject fact1_script::fact1
	GameObject_t2790157070 * ___fact1_2;

public:
	inline static int32_t get_offset_of_fact1_2() { return static_cast<int32_t>(offsetof(fact1_script_t1202835441, ___fact1_2)); }
	inline GameObject_t2790157070 * get_fact1_2() const { return ___fact1_2; }
	inline GameObject_t2790157070 ** get_address_of_fact1_2() { return &___fact1_2; }
	inline void set_fact1_2(GameObject_t2790157070 * value)
	{
		___fact1_2 = value;
		Il2CppCodeGenWriteBarrier((&___fact1_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FACT1_SCRIPT_T1202835441_H
#ifndef UNITYREMOTEVIDEO_T990286538_H
#define UNITYREMOTEVIDEO_T990286538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityRemoteVideo
struct  UnityRemoteVideo_t990286538  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.XR.iOS.ConnectToEditor UnityEngine.XR.iOS.UnityRemoteVideo::connectToEditor
	ConnectToEditor_t2268165222 * ___connectToEditor_2;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.UnityRemoteVideo::m_Session
	UnityARSessionNativeInterface_t3588887273 * ___m_Session_3;
	// System.Boolean UnityEngine.XR.iOS.UnityRemoteVideo::bTexturesInitialized
	bool ___bTexturesInitialized_4;
	// System.Int32 UnityEngine.XR.iOS.UnityRemoteVideo::currentFrameIndex
	int32_t ___currentFrameIndex_5;
	// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::m_textureYBytes
	ByteU5BU5D_t250263739* ___m_textureYBytes_6;
	// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::m_textureUVBytes
	ByteU5BU5D_t250263739* ___m_textureUVBytes_7;
	// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::m_textureYBytes2
	ByteU5BU5D_t250263739* ___m_textureYBytes2_8;
	// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::m_textureUVBytes2
	ByteU5BU5D_t250263739* ___m_textureUVBytes2_9;
	// System.Runtime.InteropServices.GCHandle UnityEngine.XR.iOS.UnityRemoteVideo::m_pinnedYArray
	GCHandle_t225103611  ___m_pinnedYArray_10;
	// System.Runtime.InteropServices.GCHandle UnityEngine.XR.iOS.UnityRemoteVideo::m_pinnedUVArray
	GCHandle_t225103611  ___m_pinnedUVArray_11;

public:
	inline static int32_t get_offset_of_connectToEditor_2() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t990286538, ___connectToEditor_2)); }
	inline ConnectToEditor_t2268165222 * get_connectToEditor_2() const { return ___connectToEditor_2; }
	inline ConnectToEditor_t2268165222 ** get_address_of_connectToEditor_2() { return &___connectToEditor_2; }
	inline void set_connectToEditor_2(ConnectToEditor_t2268165222 * value)
	{
		___connectToEditor_2 = value;
		Il2CppCodeGenWriteBarrier((&___connectToEditor_2), value);
	}

	inline static int32_t get_offset_of_m_Session_3() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t990286538, ___m_Session_3)); }
	inline UnityARSessionNativeInterface_t3588887273 * get_m_Session_3() const { return ___m_Session_3; }
	inline UnityARSessionNativeInterface_t3588887273 ** get_address_of_m_Session_3() { return &___m_Session_3; }
	inline void set_m_Session_3(UnityARSessionNativeInterface_t3588887273 * value)
	{
		___m_Session_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Session_3), value);
	}

	inline static int32_t get_offset_of_bTexturesInitialized_4() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t990286538, ___bTexturesInitialized_4)); }
	inline bool get_bTexturesInitialized_4() const { return ___bTexturesInitialized_4; }
	inline bool* get_address_of_bTexturesInitialized_4() { return &___bTexturesInitialized_4; }
	inline void set_bTexturesInitialized_4(bool value)
	{
		___bTexturesInitialized_4 = value;
	}

	inline static int32_t get_offset_of_currentFrameIndex_5() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t990286538, ___currentFrameIndex_5)); }
	inline int32_t get_currentFrameIndex_5() const { return ___currentFrameIndex_5; }
	inline int32_t* get_address_of_currentFrameIndex_5() { return &___currentFrameIndex_5; }
	inline void set_currentFrameIndex_5(int32_t value)
	{
		___currentFrameIndex_5 = value;
	}

	inline static int32_t get_offset_of_m_textureYBytes_6() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t990286538, ___m_textureYBytes_6)); }
	inline ByteU5BU5D_t250263739* get_m_textureYBytes_6() const { return ___m_textureYBytes_6; }
	inline ByteU5BU5D_t250263739** get_address_of_m_textureYBytes_6() { return &___m_textureYBytes_6; }
	inline void set_m_textureYBytes_6(ByteU5BU5D_t250263739* value)
	{
		___m_textureYBytes_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_textureYBytes_6), value);
	}

	inline static int32_t get_offset_of_m_textureUVBytes_7() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t990286538, ___m_textureUVBytes_7)); }
	inline ByteU5BU5D_t250263739* get_m_textureUVBytes_7() const { return ___m_textureUVBytes_7; }
	inline ByteU5BU5D_t250263739** get_address_of_m_textureUVBytes_7() { return &___m_textureUVBytes_7; }
	inline void set_m_textureUVBytes_7(ByteU5BU5D_t250263739* value)
	{
		___m_textureUVBytes_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_textureUVBytes_7), value);
	}

	inline static int32_t get_offset_of_m_textureYBytes2_8() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t990286538, ___m_textureYBytes2_8)); }
	inline ByteU5BU5D_t250263739* get_m_textureYBytes2_8() const { return ___m_textureYBytes2_8; }
	inline ByteU5BU5D_t250263739** get_address_of_m_textureYBytes2_8() { return &___m_textureYBytes2_8; }
	inline void set_m_textureYBytes2_8(ByteU5BU5D_t250263739* value)
	{
		___m_textureYBytes2_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_textureYBytes2_8), value);
	}

	inline static int32_t get_offset_of_m_textureUVBytes2_9() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t990286538, ___m_textureUVBytes2_9)); }
	inline ByteU5BU5D_t250263739* get_m_textureUVBytes2_9() const { return ___m_textureUVBytes2_9; }
	inline ByteU5BU5D_t250263739** get_address_of_m_textureUVBytes2_9() { return &___m_textureUVBytes2_9; }
	inline void set_m_textureUVBytes2_9(ByteU5BU5D_t250263739* value)
	{
		___m_textureUVBytes2_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_textureUVBytes2_9), value);
	}

	inline static int32_t get_offset_of_m_pinnedYArray_10() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t990286538, ___m_pinnedYArray_10)); }
	inline GCHandle_t225103611  get_m_pinnedYArray_10() const { return ___m_pinnedYArray_10; }
	inline GCHandle_t225103611 * get_address_of_m_pinnedYArray_10() { return &___m_pinnedYArray_10; }
	inline void set_m_pinnedYArray_10(GCHandle_t225103611  value)
	{
		___m_pinnedYArray_10 = value;
	}

	inline static int32_t get_offset_of_m_pinnedUVArray_11() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t990286538, ___m_pinnedUVArray_11)); }
	inline GCHandle_t225103611  get_m_pinnedUVArray_11() const { return ___m_pinnedUVArray_11; }
	inline GCHandle_t225103611 * get_address_of_m_pinnedUVArray_11() { return &___m_pinnedUVArray_11; }
	inline void set_m_pinnedUVArray_11(GCHandle_t225103611  value)
	{
		___m_pinnedUVArray_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYREMOTEVIDEO_T990286538_H
#ifndef FACTHIT2_T1251325783_H
#define FACTHIT2_T1251325783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FactHit2
struct  FactHit2_t1251325783  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.Vector3 FactHit2::fact2OrigPos
	Vector3_t3278824678  ___fact2OrigPos_2;
	// UnityEngine.Vector3 FactHit2::fact2NewPos
	Vector3_t3278824678  ___fact2NewPos_3;
	// UnityEngine.GameObject FactHit2::spotlightObject
	GameObject_t2790157070 * ___spotlightObject_4;
	// UnityEngine.GameObject FactHit2::spotlightObject1
	GameObject_t2790157070 * ___spotlightObject1_5;
	// UnityEngine.GameObject FactHit2::TapToText
	GameObject_t2790157070 * ___TapToText_6;
	// UnityEngine.GameObject FactHit2::SmokeParent
	GameObject_t2790157070 * ___SmokeParent_7;
	// UnityEngine.GameObject FactHit2::SmokeParentLite
	GameObject_t2790157070 * ___SmokeParentLite_8;
	// UnityEngine.GameObject FactHit2::buildingsText
	GameObject_t2790157070 * ___buildingsText_9;

public:
	inline static int32_t get_offset_of_fact2OrigPos_2() { return static_cast<int32_t>(offsetof(FactHit2_t1251325783, ___fact2OrigPos_2)); }
	inline Vector3_t3278824678  get_fact2OrigPos_2() const { return ___fact2OrigPos_2; }
	inline Vector3_t3278824678 * get_address_of_fact2OrigPos_2() { return &___fact2OrigPos_2; }
	inline void set_fact2OrigPos_2(Vector3_t3278824678  value)
	{
		___fact2OrigPos_2 = value;
	}

	inline static int32_t get_offset_of_fact2NewPos_3() { return static_cast<int32_t>(offsetof(FactHit2_t1251325783, ___fact2NewPos_3)); }
	inline Vector3_t3278824678  get_fact2NewPos_3() const { return ___fact2NewPos_3; }
	inline Vector3_t3278824678 * get_address_of_fact2NewPos_3() { return &___fact2NewPos_3; }
	inline void set_fact2NewPos_3(Vector3_t3278824678  value)
	{
		___fact2NewPos_3 = value;
	}

	inline static int32_t get_offset_of_spotlightObject_4() { return static_cast<int32_t>(offsetof(FactHit2_t1251325783, ___spotlightObject_4)); }
	inline GameObject_t2790157070 * get_spotlightObject_4() const { return ___spotlightObject_4; }
	inline GameObject_t2790157070 ** get_address_of_spotlightObject_4() { return &___spotlightObject_4; }
	inline void set_spotlightObject_4(GameObject_t2790157070 * value)
	{
		___spotlightObject_4 = value;
		Il2CppCodeGenWriteBarrier((&___spotlightObject_4), value);
	}

	inline static int32_t get_offset_of_spotlightObject1_5() { return static_cast<int32_t>(offsetof(FactHit2_t1251325783, ___spotlightObject1_5)); }
	inline GameObject_t2790157070 * get_spotlightObject1_5() const { return ___spotlightObject1_5; }
	inline GameObject_t2790157070 ** get_address_of_spotlightObject1_5() { return &___spotlightObject1_5; }
	inline void set_spotlightObject1_5(GameObject_t2790157070 * value)
	{
		___spotlightObject1_5 = value;
		Il2CppCodeGenWriteBarrier((&___spotlightObject1_5), value);
	}

	inline static int32_t get_offset_of_TapToText_6() { return static_cast<int32_t>(offsetof(FactHit2_t1251325783, ___TapToText_6)); }
	inline GameObject_t2790157070 * get_TapToText_6() const { return ___TapToText_6; }
	inline GameObject_t2790157070 ** get_address_of_TapToText_6() { return &___TapToText_6; }
	inline void set_TapToText_6(GameObject_t2790157070 * value)
	{
		___TapToText_6 = value;
		Il2CppCodeGenWriteBarrier((&___TapToText_6), value);
	}

	inline static int32_t get_offset_of_SmokeParent_7() { return static_cast<int32_t>(offsetof(FactHit2_t1251325783, ___SmokeParent_7)); }
	inline GameObject_t2790157070 * get_SmokeParent_7() const { return ___SmokeParent_7; }
	inline GameObject_t2790157070 ** get_address_of_SmokeParent_7() { return &___SmokeParent_7; }
	inline void set_SmokeParent_7(GameObject_t2790157070 * value)
	{
		___SmokeParent_7 = value;
		Il2CppCodeGenWriteBarrier((&___SmokeParent_7), value);
	}

	inline static int32_t get_offset_of_SmokeParentLite_8() { return static_cast<int32_t>(offsetof(FactHit2_t1251325783, ___SmokeParentLite_8)); }
	inline GameObject_t2790157070 * get_SmokeParentLite_8() const { return ___SmokeParentLite_8; }
	inline GameObject_t2790157070 ** get_address_of_SmokeParentLite_8() { return &___SmokeParentLite_8; }
	inline void set_SmokeParentLite_8(GameObject_t2790157070 * value)
	{
		___SmokeParentLite_8 = value;
		Il2CppCodeGenWriteBarrier((&___SmokeParentLite_8), value);
	}

	inline static int32_t get_offset_of_buildingsText_9() { return static_cast<int32_t>(offsetof(FactHit2_t1251325783, ___buildingsText_9)); }
	inline GameObject_t2790157070 * get_buildingsText_9() const { return ___buildingsText_9; }
	inline GameObject_t2790157070 ** get_address_of_buildingsText_9() { return &___buildingsText_9; }
	inline void set_buildingsText_9(GameObject_t2790157070 * value)
	{
		___buildingsText_9 = value;
		Il2CppCodeGenWriteBarrier((&___buildingsText_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FACTHIT2_T1251325783_H
#ifndef CREATEBALLS_T1412997901_H
#define CREATEBALLS_T1412997901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// createBalls
struct  createBalls_t1412997901  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.Transform createBalls::prefab
	Transform_t3297798951 * ___prefab_2;

public:
	inline static int32_t get_offset_of_prefab_2() { return static_cast<int32_t>(offsetof(createBalls_t1412997901, ___prefab_2)); }
	inline Transform_t3297798951 * get_prefab_2() const { return ___prefab_2; }
	inline Transform_t3297798951 ** get_address_of_prefab_2() { return &___prefab_2; }
	inline void set_prefab_2(Transform_t3297798951 * value)
	{
		___prefab_2 = value;
		Il2CppCodeGenWriteBarrier((&___prefab_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CREATEBALLS_T1412997901_H
#ifndef FACTHIT1_T579436276_H
#define FACTHIT1_T579436276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FactHit1
struct  FactHit1_t579436276  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.Vector3 FactHit1::fact1OrigPos
	Vector3_t3278824678  ___fact1OrigPos_2;
	// UnityEngine.Vector3 FactHit1::fact1NewPos
	Vector3_t3278824678  ___fact1NewPos_3;

public:
	inline static int32_t get_offset_of_fact1OrigPos_2() { return static_cast<int32_t>(offsetof(FactHit1_t579436276, ___fact1OrigPos_2)); }
	inline Vector3_t3278824678  get_fact1OrigPos_2() const { return ___fact1OrigPos_2; }
	inline Vector3_t3278824678 * get_address_of_fact1OrigPos_2() { return &___fact1OrigPos_2; }
	inline void set_fact1OrigPos_2(Vector3_t3278824678  value)
	{
		___fact1OrigPos_2 = value;
	}

	inline static int32_t get_offset_of_fact1NewPos_3() { return static_cast<int32_t>(offsetof(FactHit1_t579436276, ___fact1NewPos_3)); }
	inline Vector3_t3278824678  get_fact1NewPos_3() const { return ___fact1NewPos_3; }
	inline Vector3_t3278824678 * get_address_of_fact1NewPos_3() { return &___fact1NewPos_3; }
	inline void set_fact1NewPos_3(Vector3_t3278824678  value)
	{
		___fact1NewPos_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FACTHIT1_T579436276_H
#ifndef LOADDELAY_T4076740582_H
#define LOADDELAY_T4076740582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// loadDelay
struct  loadDelay_t4076740582  : public MonoBehaviour_t4005906508
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADDELAY_T4076740582_H
#ifndef LOADDELAYINTRO_T1090822152_H
#define LOADDELAYINTRO_T1090822152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// loadDelayIntro
struct  loadDelayIntro_t1090822152  : public MonoBehaviour_t4005906508
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADDELAYINTRO_T1090822152_H
#ifndef SCENECHANGE_T2300739734_H
#define SCENECHANGE_T2300739734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// sceneChange
struct  sceneChange_t2300739734  : public MonoBehaviour_t4005906508
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENECHANGE_T2300739734_H
#ifndef LAMPBTNS_T1971243704_H
#define LAMPBTNS_T1971243704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// lampBtns
struct  lampBtns_t1971243704  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.GameObject lampBtns::BuildingFactTop
	GameObject_t2790157070 * ___BuildingFactTop_2;
	// UnityEngine.GameObject lampBtns::BuildingFactTop_Trans
	GameObject_t2790157070 * ___BuildingFactTop_Trans_3;
	// UnityEngine.GameObject lampBtns::BuildingFactBot_Trans
	GameObject_t2790157070 * ___BuildingFactBot_Trans_4;
	// UnityEngine.GameObject lampBtns::BuildingFactBot
	GameObject_t2790157070 * ___BuildingFactBot_5;
	// UnityEngine.GameObject lampBtns::dontForget
	GameObject_t2790157070 * ___dontForget_6;
	// UnityEngine.GameObject lampBtns::dontForgetTrans
	GameObject_t2790157070 * ___dontForgetTrans_7;
	// UnityEngine.GameObject lampBtns::turnOff
	GameObject_t2790157070 * ___turnOff_8;
	// UnityEngine.GameObject lampBtns::turnOffTrans
	GameObject_t2790157070 * ___turnOffTrans_9;
	// UnityEngine.GameObject lampBtns::pointer
	GameObject_t2790157070 * ___pointer_10;

public:
	inline static int32_t get_offset_of_BuildingFactTop_2() { return static_cast<int32_t>(offsetof(lampBtns_t1971243704, ___BuildingFactTop_2)); }
	inline GameObject_t2790157070 * get_BuildingFactTop_2() const { return ___BuildingFactTop_2; }
	inline GameObject_t2790157070 ** get_address_of_BuildingFactTop_2() { return &___BuildingFactTop_2; }
	inline void set_BuildingFactTop_2(GameObject_t2790157070 * value)
	{
		___BuildingFactTop_2 = value;
		Il2CppCodeGenWriteBarrier((&___BuildingFactTop_2), value);
	}

	inline static int32_t get_offset_of_BuildingFactTop_Trans_3() { return static_cast<int32_t>(offsetof(lampBtns_t1971243704, ___BuildingFactTop_Trans_3)); }
	inline GameObject_t2790157070 * get_BuildingFactTop_Trans_3() const { return ___BuildingFactTop_Trans_3; }
	inline GameObject_t2790157070 ** get_address_of_BuildingFactTop_Trans_3() { return &___BuildingFactTop_Trans_3; }
	inline void set_BuildingFactTop_Trans_3(GameObject_t2790157070 * value)
	{
		___BuildingFactTop_Trans_3 = value;
		Il2CppCodeGenWriteBarrier((&___BuildingFactTop_Trans_3), value);
	}

	inline static int32_t get_offset_of_BuildingFactBot_Trans_4() { return static_cast<int32_t>(offsetof(lampBtns_t1971243704, ___BuildingFactBot_Trans_4)); }
	inline GameObject_t2790157070 * get_BuildingFactBot_Trans_4() const { return ___BuildingFactBot_Trans_4; }
	inline GameObject_t2790157070 ** get_address_of_BuildingFactBot_Trans_4() { return &___BuildingFactBot_Trans_4; }
	inline void set_BuildingFactBot_Trans_4(GameObject_t2790157070 * value)
	{
		___BuildingFactBot_Trans_4 = value;
		Il2CppCodeGenWriteBarrier((&___BuildingFactBot_Trans_4), value);
	}

	inline static int32_t get_offset_of_BuildingFactBot_5() { return static_cast<int32_t>(offsetof(lampBtns_t1971243704, ___BuildingFactBot_5)); }
	inline GameObject_t2790157070 * get_BuildingFactBot_5() const { return ___BuildingFactBot_5; }
	inline GameObject_t2790157070 ** get_address_of_BuildingFactBot_5() { return &___BuildingFactBot_5; }
	inline void set_BuildingFactBot_5(GameObject_t2790157070 * value)
	{
		___BuildingFactBot_5 = value;
		Il2CppCodeGenWriteBarrier((&___BuildingFactBot_5), value);
	}

	inline static int32_t get_offset_of_dontForget_6() { return static_cast<int32_t>(offsetof(lampBtns_t1971243704, ___dontForget_6)); }
	inline GameObject_t2790157070 * get_dontForget_6() const { return ___dontForget_6; }
	inline GameObject_t2790157070 ** get_address_of_dontForget_6() { return &___dontForget_6; }
	inline void set_dontForget_6(GameObject_t2790157070 * value)
	{
		___dontForget_6 = value;
		Il2CppCodeGenWriteBarrier((&___dontForget_6), value);
	}

	inline static int32_t get_offset_of_dontForgetTrans_7() { return static_cast<int32_t>(offsetof(lampBtns_t1971243704, ___dontForgetTrans_7)); }
	inline GameObject_t2790157070 * get_dontForgetTrans_7() const { return ___dontForgetTrans_7; }
	inline GameObject_t2790157070 ** get_address_of_dontForgetTrans_7() { return &___dontForgetTrans_7; }
	inline void set_dontForgetTrans_7(GameObject_t2790157070 * value)
	{
		___dontForgetTrans_7 = value;
		Il2CppCodeGenWriteBarrier((&___dontForgetTrans_7), value);
	}

	inline static int32_t get_offset_of_turnOff_8() { return static_cast<int32_t>(offsetof(lampBtns_t1971243704, ___turnOff_8)); }
	inline GameObject_t2790157070 * get_turnOff_8() const { return ___turnOff_8; }
	inline GameObject_t2790157070 ** get_address_of_turnOff_8() { return &___turnOff_8; }
	inline void set_turnOff_8(GameObject_t2790157070 * value)
	{
		___turnOff_8 = value;
		Il2CppCodeGenWriteBarrier((&___turnOff_8), value);
	}

	inline static int32_t get_offset_of_turnOffTrans_9() { return static_cast<int32_t>(offsetof(lampBtns_t1971243704, ___turnOffTrans_9)); }
	inline GameObject_t2790157070 * get_turnOffTrans_9() const { return ___turnOffTrans_9; }
	inline GameObject_t2790157070 ** get_address_of_turnOffTrans_9() { return &___turnOffTrans_9; }
	inline void set_turnOffTrans_9(GameObject_t2790157070 * value)
	{
		___turnOffTrans_9 = value;
		Il2CppCodeGenWriteBarrier((&___turnOffTrans_9), value);
	}

	inline static int32_t get_offset_of_pointer_10() { return static_cast<int32_t>(offsetof(lampBtns_t1971243704, ___pointer_10)); }
	inline GameObject_t2790157070 * get_pointer_10() const { return ___pointer_10; }
	inline GameObject_t2790157070 ** get_address_of_pointer_10() { return &___pointer_10; }
	inline void set_pointer_10(GameObject_t2790157070 * value)
	{
		___pointer_10 = value;
		Il2CppCodeGenWriteBarrier((&___pointer_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAMPBTNS_T1971243704_H
#ifndef REPLAY_T4245199109_H
#define REPLAY_T4245199109_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// replay
struct  replay_t4245199109  : public MonoBehaviour_t4005906508
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REPLAY_T4245199109_H
#ifndef REJECTIONBADTRASH_T1244103250_H
#define REJECTIONBADTRASH_T1244103250_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// rejectionBadTrash
struct  rejectionBadTrash_t1244103250  : public MonoBehaviour_t4005906508
{
public:
	// System.Single rejectionBadTrash::thrust
	float ___thrust_2;
	// UnityEngine.Rigidbody rejectionBadTrash::rb
	Rigidbody_t1534326339 * ___rb_3;

public:
	inline static int32_t get_offset_of_thrust_2() { return static_cast<int32_t>(offsetof(rejectionBadTrash_t1244103250, ___thrust_2)); }
	inline float get_thrust_2() const { return ___thrust_2; }
	inline float* get_address_of_thrust_2() { return &___thrust_2; }
	inline void set_thrust_2(float value)
	{
		___thrust_2 = value;
	}

	inline static int32_t get_offset_of_rb_3() { return static_cast<int32_t>(offsetof(rejectionBadTrash_t1244103250, ___rb_3)); }
	inline Rigidbody_t1534326339 * get_rb_3() const { return ___rb_3; }
	inline Rigidbody_t1534326339 ** get_address_of_rb_3() { return &___rb_3; }
	inline void set_rb_3(Rigidbody_t1534326339 * value)
	{
		___rb_3 = value;
		Il2CppCodeGenWriteBarrier((&___rb_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REJECTIONBADTRASH_T1244103250_H
#ifndef RAYHITLAMP_T1532247678_H
#define RAYHITLAMP_T1532247678_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RayHitLamp
struct  RayHitLamp_t1532247678  : public MonoBehaviour_t4005906508
{
public:

public:
};

struct RayHitLamp_t1532247678_StaticFields
{
public:
	// UnityEngine.GameObject RayHitLamp::lampObject
	GameObject_t2790157070 * ___lampObject_2;

public:
	inline static int32_t get_offset_of_lampObject_2() { return static_cast<int32_t>(offsetof(RayHitLamp_t1532247678_StaticFields, ___lampObject_2)); }
	inline GameObject_t2790157070 * get_lampObject_2() const { return ___lampObject_2; }
	inline GameObject_t2790157070 ** get_address_of_lampObject_2() { return &___lampObject_2; }
	inline void set_lampObject_2(GameObject_t2790157070 * value)
	{
		___lampObject_2 = value;
		Il2CppCodeGenWriteBarrier((&___lampObject_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYHITLAMP_T1532247678_H
#ifndef RAYHIT_T4125576956_H
#define RAYHIT_T4125576956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RayHit
struct  RayHit_t4125576956  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.Vector3 RayHit::fixedPos
	Vector3_t3278824678  ___fixedPos_3;
	// UnityEngine.Vector3 RayHit::moleculePosition
	Vector3_t3278824678  ___moleculePosition_4;

public:
	inline static int32_t get_offset_of_fixedPos_3() { return static_cast<int32_t>(offsetof(RayHit_t4125576956, ___fixedPos_3)); }
	inline Vector3_t3278824678  get_fixedPos_3() const { return ___fixedPos_3; }
	inline Vector3_t3278824678 * get_address_of_fixedPos_3() { return &___fixedPos_3; }
	inline void set_fixedPos_3(Vector3_t3278824678  value)
	{
		___fixedPos_3 = value;
	}

	inline static int32_t get_offset_of_moleculePosition_4() { return static_cast<int32_t>(offsetof(RayHit_t4125576956, ___moleculePosition_4)); }
	inline Vector3_t3278824678  get_moleculePosition_4() const { return ___moleculePosition_4; }
	inline Vector3_t3278824678 * get_address_of_moleculePosition_4() { return &___moleculePosition_4; }
	inline void set_moleculePosition_4(Vector3_t3278824678  value)
	{
		___moleculePosition_4 = value;
	}
};

struct RayHit_t4125576956_StaticFields
{
public:
	// UnityEngine.GameObject RayHit::lampObject
	GameObject_t2790157070 * ___lampObject_2;

public:
	inline static int32_t get_offset_of_lampObject_2() { return static_cast<int32_t>(offsetof(RayHit_t4125576956_StaticFields, ___lampObject_2)); }
	inline GameObject_t2790157070 * get_lampObject_2() const { return ___lampObject_2; }
	inline GameObject_t2790157070 ** get_address_of_lampObject_2() { return &___lampObject_2; }
	inline void set_lampObject_2(GameObject_t2790157070 * value)
	{
		___lampObject_2 = value;
		Il2CppCodeGenWriteBarrier((&___lampObject_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYHIT_T4125576956_H
#ifndef LAMPHIT_T325052164_H
#define LAMPHIT_T325052164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LampHit
struct  LampHit_t325052164  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.GameObject LampHit::lampSpotlight
	GameObject_t2790157070 * ___lampSpotlight_2;
	// UnityEngine.GameObject LampHit::lampSpotlight2
	GameObject_t2790157070 * ___lampSpotlight2_3;
	// UnityEngine.Material LampHit::lampShade
	Material_t1280402239 * ___lampShade_4;
	// UnityEngine.GameObject LampHit::BuildingFactTop
	GameObject_t2790157070 * ___BuildingFactTop_5;
	// UnityEngine.GameObject LampHit::BuildingFactBot
	GameObject_t2790157070 * ___BuildingFactBot_6;
	// UnityEngine.Material LampHit::smokeHigh
	Material_t1280402239 * ___smokeHigh_7;
	// UnityEngine.GameObject LampHit::nextButton
	GameObject_t2790157070 * ___nextButton_8;
	// UnityEngine.GameObject LampHit::cflBulb
	GameObject_t2790157070 * ___cflBulb_9;
	// UnityEngine.GameObject LampHit::badBulb
	GameObject_t2790157070 * ___badBulb_10;
	// UnityEngine.GameObject LampHit::replaceBulb
	GameObject_t2790157070 * ___replaceBulb_11;
	// UnityEngine.GameObject LampHit::cflTrans
	GameObject_t2790157070 * ___cflTrans_12;
	// UnityEngine.GameObject LampHit::pointer
	GameObject_t2790157070 * ___pointer_13;
	// UnityEngine.GameObject LampHit::dontForget
	GameObject_t2790157070 * ___dontForget_14;
	// UnityEngine.GameObject LampHit::turnOff
	GameObject_t2790157070 * ___turnOff_15;
	// UnityEngine.GameObject LampHit::exampleCube
	GameObject_t2790157070 * ___exampleCube_16;
	// UnityEngine.GameObject LampHit::newPlacedLamp
	GameObject_t2790157070 * ___newPlacedLamp_17;

public:
	inline static int32_t get_offset_of_lampSpotlight_2() { return static_cast<int32_t>(offsetof(LampHit_t325052164, ___lampSpotlight_2)); }
	inline GameObject_t2790157070 * get_lampSpotlight_2() const { return ___lampSpotlight_2; }
	inline GameObject_t2790157070 ** get_address_of_lampSpotlight_2() { return &___lampSpotlight_2; }
	inline void set_lampSpotlight_2(GameObject_t2790157070 * value)
	{
		___lampSpotlight_2 = value;
		Il2CppCodeGenWriteBarrier((&___lampSpotlight_2), value);
	}

	inline static int32_t get_offset_of_lampSpotlight2_3() { return static_cast<int32_t>(offsetof(LampHit_t325052164, ___lampSpotlight2_3)); }
	inline GameObject_t2790157070 * get_lampSpotlight2_3() const { return ___lampSpotlight2_3; }
	inline GameObject_t2790157070 ** get_address_of_lampSpotlight2_3() { return &___lampSpotlight2_3; }
	inline void set_lampSpotlight2_3(GameObject_t2790157070 * value)
	{
		___lampSpotlight2_3 = value;
		Il2CppCodeGenWriteBarrier((&___lampSpotlight2_3), value);
	}

	inline static int32_t get_offset_of_lampShade_4() { return static_cast<int32_t>(offsetof(LampHit_t325052164, ___lampShade_4)); }
	inline Material_t1280402239 * get_lampShade_4() const { return ___lampShade_4; }
	inline Material_t1280402239 ** get_address_of_lampShade_4() { return &___lampShade_4; }
	inline void set_lampShade_4(Material_t1280402239 * value)
	{
		___lampShade_4 = value;
		Il2CppCodeGenWriteBarrier((&___lampShade_4), value);
	}

	inline static int32_t get_offset_of_BuildingFactTop_5() { return static_cast<int32_t>(offsetof(LampHit_t325052164, ___BuildingFactTop_5)); }
	inline GameObject_t2790157070 * get_BuildingFactTop_5() const { return ___BuildingFactTop_5; }
	inline GameObject_t2790157070 ** get_address_of_BuildingFactTop_5() { return &___BuildingFactTop_5; }
	inline void set_BuildingFactTop_5(GameObject_t2790157070 * value)
	{
		___BuildingFactTop_5 = value;
		Il2CppCodeGenWriteBarrier((&___BuildingFactTop_5), value);
	}

	inline static int32_t get_offset_of_BuildingFactBot_6() { return static_cast<int32_t>(offsetof(LampHit_t325052164, ___BuildingFactBot_6)); }
	inline GameObject_t2790157070 * get_BuildingFactBot_6() const { return ___BuildingFactBot_6; }
	inline GameObject_t2790157070 ** get_address_of_BuildingFactBot_6() { return &___BuildingFactBot_6; }
	inline void set_BuildingFactBot_6(GameObject_t2790157070 * value)
	{
		___BuildingFactBot_6 = value;
		Il2CppCodeGenWriteBarrier((&___BuildingFactBot_6), value);
	}

	inline static int32_t get_offset_of_smokeHigh_7() { return static_cast<int32_t>(offsetof(LampHit_t325052164, ___smokeHigh_7)); }
	inline Material_t1280402239 * get_smokeHigh_7() const { return ___smokeHigh_7; }
	inline Material_t1280402239 ** get_address_of_smokeHigh_7() { return &___smokeHigh_7; }
	inline void set_smokeHigh_7(Material_t1280402239 * value)
	{
		___smokeHigh_7 = value;
		Il2CppCodeGenWriteBarrier((&___smokeHigh_7), value);
	}

	inline static int32_t get_offset_of_nextButton_8() { return static_cast<int32_t>(offsetof(LampHit_t325052164, ___nextButton_8)); }
	inline GameObject_t2790157070 * get_nextButton_8() const { return ___nextButton_8; }
	inline GameObject_t2790157070 ** get_address_of_nextButton_8() { return &___nextButton_8; }
	inline void set_nextButton_8(GameObject_t2790157070 * value)
	{
		___nextButton_8 = value;
		Il2CppCodeGenWriteBarrier((&___nextButton_8), value);
	}

	inline static int32_t get_offset_of_cflBulb_9() { return static_cast<int32_t>(offsetof(LampHit_t325052164, ___cflBulb_9)); }
	inline GameObject_t2790157070 * get_cflBulb_9() const { return ___cflBulb_9; }
	inline GameObject_t2790157070 ** get_address_of_cflBulb_9() { return &___cflBulb_9; }
	inline void set_cflBulb_9(GameObject_t2790157070 * value)
	{
		___cflBulb_9 = value;
		Il2CppCodeGenWriteBarrier((&___cflBulb_9), value);
	}

	inline static int32_t get_offset_of_badBulb_10() { return static_cast<int32_t>(offsetof(LampHit_t325052164, ___badBulb_10)); }
	inline GameObject_t2790157070 * get_badBulb_10() const { return ___badBulb_10; }
	inline GameObject_t2790157070 ** get_address_of_badBulb_10() { return &___badBulb_10; }
	inline void set_badBulb_10(GameObject_t2790157070 * value)
	{
		___badBulb_10 = value;
		Il2CppCodeGenWriteBarrier((&___badBulb_10), value);
	}

	inline static int32_t get_offset_of_replaceBulb_11() { return static_cast<int32_t>(offsetof(LampHit_t325052164, ___replaceBulb_11)); }
	inline GameObject_t2790157070 * get_replaceBulb_11() const { return ___replaceBulb_11; }
	inline GameObject_t2790157070 ** get_address_of_replaceBulb_11() { return &___replaceBulb_11; }
	inline void set_replaceBulb_11(GameObject_t2790157070 * value)
	{
		___replaceBulb_11 = value;
		Il2CppCodeGenWriteBarrier((&___replaceBulb_11), value);
	}

	inline static int32_t get_offset_of_cflTrans_12() { return static_cast<int32_t>(offsetof(LampHit_t325052164, ___cflTrans_12)); }
	inline GameObject_t2790157070 * get_cflTrans_12() const { return ___cflTrans_12; }
	inline GameObject_t2790157070 ** get_address_of_cflTrans_12() { return &___cflTrans_12; }
	inline void set_cflTrans_12(GameObject_t2790157070 * value)
	{
		___cflTrans_12 = value;
		Il2CppCodeGenWriteBarrier((&___cflTrans_12), value);
	}

	inline static int32_t get_offset_of_pointer_13() { return static_cast<int32_t>(offsetof(LampHit_t325052164, ___pointer_13)); }
	inline GameObject_t2790157070 * get_pointer_13() const { return ___pointer_13; }
	inline GameObject_t2790157070 ** get_address_of_pointer_13() { return &___pointer_13; }
	inline void set_pointer_13(GameObject_t2790157070 * value)
	{
		___pointer_13 = value;
		Il2CppCodeGenWriteBarrier((&___pointer_13), value);
	}

	inline static int32_t get_offset_of_dontForget_14() { return static_cast<int32_t>(offsetof(LampHit_t325052164, ___dontForget_14)); }
	inline GameObject_t2790157070 * get_dontForget_14() const { return ___dontForget_14; }
	inline GameObject_t2790157070 ** get_address_of_dontForget_14() { return &___dontForget_14; }
	inline void set_dontForget_14(GameObject_t2790157070 * value)
	{
		___dontForget_14 = value;
		Il2CppCodeGenWriteBarrier((&___dontForget_14), value);
	}

	inline static int32_t get_offset_of_turnOff_15() { return static_cast<int32_t>(offsetof(LampHit_t325052164, ___turnOff_15)); }
	inline GameObject_t2790157070 * get_turnOff_15() const { return ___turnOff_15; }
	inline GameObject_t2790157070 ** get_address_of_turnOff_15() { return &___turnOff_15; }
	inline void set_turnOff_15(GameObject_t2790157070 * value)
	{
		___turnOff_15 = value;
		Il2CppCodeGenWriteBarrier((&___turnOff_15), value);
	}

	inline static int32_t get_offset_of_exampleCube_16() { return static_cast<int32_t>(offsetof(LampHit_t325052164, ___exampleCube_16)); }
	inline GameObject_t2790157070 * get_exampleCube_16() const { return ___exampleCube_16; }
	inline GameObject_t2790157070 ** get_address_of_exampleCube_16() { return &___exampleCube_16; }
	inline void set_exampleCube_16(GameObject_t2790157070 * value)
	{
		___exampleCube_16 = value;
		Il2CppCodeGenWriteBarrier((&___exampleCube_16), value);
	}

	inline static int32_t get_offset_of_newPlacedLamp_17() { return static_cast<int32_t>(offsetof(LampHit_t325052164, ___newPlacedLamp_17)); }
	inline GameObject_t2790157070 * get_newPlacedLamp_17() const { return ___newPlacedLamp_17; }
	inline GameObject_t2790157070 ** get_address_of_newPlacedLamp_17() { return &___newPlacedLamp_17; }
	inline void set_newPlacedLamp_17(GameObject_t2790157070 * value)
	{
		___newPlacedLamp_17 = value;
		Il2CppCodeGenWriteBarrier((&___newPlacedLamp_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAMPHIT_T325052164_H
#ifndef OUTROBTN_T432002624_H
#define OUTROBTN_T432002624_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// outroBtn
struct  outroBtn_t432002624  : public MonoBehaviour_t4005906508
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTROBTN_T432002624_H
#ifndef NEWSCREEN_T3195335929_H
#define NEWSCREEN_T3195335929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// newScreen
struct  newScreen_t3195335929  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.GameObject newScreen::Screen1
	GameObject_t2790157070 * ___Screen1_2;
	// UnityEngine.GameObject newScreen::Screen3
	GameObject_t2790157070 * ___Screen3_3;
	// UnityEngine.GameObject newScreen::Screen2
	GameObject_t2790157070 * ___Screen2_4;
	// UnityEngine.GameObject newScreen::smoke
	GameObject_t2790157070 * ___smoke_5;

public:
	inline static int32_t get_offset_of_Screen1_2() { return static_cast<int32_t>(offsetof(newScreen_t3195335929, ___Screen1_2)); }
	inline GameObject_t2790157070 * get_Screen1_2() const { return ___Screen1_2; }
	inline GameObject_t2790157070 ** get_address_of_Screen1_2() { return &___Screen1_2; }
	inline void set_Screen1_2(GameObject_t2790157070 * value)
	{
		___Screen1_2 = value;
		Il2CppCodeGenWriteBarrier((&___Screen1_2), value);
	}

	inline static int32_t get_offset_of_Screen3_3() { return static_cast<int32_t>(offsetof(newScreen_t3195335929, ___Screen3_3)); }
	inline GameObject_t2790157070 * get_Screen3_3() const { return ___Screen3_3; }
	inline GameObject_t2790157070 ** get_address_of_Screen3_3() { return &___Screen3_3; }
	inline void set_Screen3_3(GameObject_t2790157070 * value)
	{
		___Screen3_3 = value;
		Il2CppCodeGenWriteBarrier((&___Screen3_3), value);
	}

	inline static int32_t get_offset_of_Screen2_4() { return static_cast<int32_t>(offsetof(newScreen_t3195335929, ___Screen2_4)); }
	inline GameObject_t2790157070 * get_Screen2_4() const { return ___Screen2_4; }
	inline GameObject_t2790157070 ** get_address_of_Screen2_4() { return &___Screen2_4; }
	inline void set_Screen2_4(GameObject_t2790157070 * value)
	{
		___Screen2_4 = value;
		Il2CppCodeGenWriteBarrier((&___Screen2_4), value);
	}

	inline static int32_t get_offset_of_smoke_5() { return static_cast<int32_t>(offsetof(newScreen_t3195335929, ___smoke_5)); }
	inline GameObject_t2790157070 * get_smoke_5() const { return ___smoke_5; }
	inline GameObject_t2790157070 ** get_address_of_smoke_5() { return &___smoke_5; }
	inline void set_smoke_5(GameObject_t2790157070 * value)
	{
		___smoke_5 = value;
		Il2CppCodeGenWriteBarrier((&___smoke_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEWSCREEN_T3195335929_H
#ifndef MOVESCENE_T976741009_H
#define MOVESCENE_T976741009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoveScene
struct  MoveScene_t976741009  : public MonoBehaviour_t4005906508
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOVESCENE_T976741009_H
#ifndef MOVE2_T1555238509_H
#define MOVE2_T1555238509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Move2
struct  Move2_t1555238509  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.GameObject Move2::instructions
	GameObject_t2790157070 * ___instructions_2;
	// UnityEngine.Rigidbody Move2::rb
	Rigidbody_t1534326339 * ___rb_4;

public:
	inline static int32_t get_offset_of_instructions_2() { return static_cast<int32_t>(offsetof(Move2_t1555238509, ___instructions_2)); }
	inline GameObject_t2790157070 * get_instructions_2() const { return ___instructions_2; }
	inline GameObject_t2790157070 ** get_address_of_instructions_2() { return &___instructions_2; }
	inline void set_instructions_2(GameObject_t2790157070 * value)
	{
		___instructions_2 = value;
		Il2CppCodeGenWriteBarrier((&___instructions_2), value);
	}

	inline static int32_t get_offset_of_rb_4() { return static_cast<int32_t>(offsetof(Move2_t1555238509, ___rb_4)); }
	inline Rigidbody_t1534326339 * get_rb_4() const { return ___rb_4; }
	inline Rigidbody_t1534326339 ** get_address_of_rb_4() { return &___rb_4; }
	inline void set_rb_4(Rigidbody_t1534326339 * value)
	{
		___rb_4 = value;
		Il2CppCodeGenWriteBarrier((&___rb_4), value);
	}
};

struct Move2_t1555238509_StaticFields
{
public:
	// UnityEngine.GameObject Move2::objectSelect
	GameObject_t2790157070 * ___objectSelect_3;

public:
	inline static int32_t get_offset_of_objectSelect_3() { return static_cast<int32_t>(offsetof(Move2_t1555238509_StaticFields, ___objectSelect_3)); }
	inline GameObject_t2790157070 * get_objectSelect_3() const { return ___objectSelect_3; }
	inline GameObject_t2790157070 ** get_address_of_objectSelect_3() { return &___objectSelect_3; }
	inline void set_objectSelect_3(GameObject_t2790157070 * value)
	{
		___objectSelect_3 = value;
		Il2CppCodeGenWriteBarrier((&___objectSelect_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOVE2_T1555238509_H
#ifndef MOVE_T1767113688_H
#define MOVE_T1767113688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Move
struct  Move_t1767113688  : public MonoBehaviour_t4005906508
{
public:

public:
};

struct Move_t1767113688_StaticFields
{
public:
	// UnityEngine.GameObject Move::objectSelect
	GameObject_t2790157070 * ___objectSelect_2;

public:
	inline static int32_t get_offset_of_objectSelect_2() { return static_cast<int32_t>(offsetof(Move_t1767113688_StaticFields, ___objectSelect_2)); }
	inline GameObject_t2790157070 * get_objectSelect_2() const { return ___objectSelect_2; }
	inline GameObject_t2790157070 ** get_address_of_objectSelect_2() { return &___objectSelect_2; }
	inline void set_objectSelect_2(GameObject_t2790157070 * value)
	{
		___objectSelect_2 = value;
		Il2CppCodeGenWriteBarrier((&___objectSelect_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOVE_T1767113688_H
#ifndef MAPBUILDSCRIPT_T2416870533_H
#define MAPBUILDSCRIPT_T2416870533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// mapBuildScript
struct  mapBuildScript_t2416870533  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.GameObject mapBuildScript::smoke
	GameObject_t2790157070 * ___smoke_2;
	// UnityEngine.GameObject mapBuildScript::spheres
	GameObject_t2790157070 * ___spheres_3;

public:
	inline static int32_t get_offset_of_smoke_2() { return static_cast<int32_t>(offsetof(mapBuildScript_t2416870533, ___smoke_2)); }
	inline GameObject_t2790157070 * get_smoke_2() const { return ___smoke_2; }
	inline GameObject_t2790157070 ** get_address_of_smoke_2() { return &___smoke_2; }
	inline void set_smoke_2(GameObject_t2790157070 * value)
	{
		___smoke_2 = value;
		Il2CppCodeGenWriteBarrier((&___smoke_2), value);
	}

	inline static int32_t get_offset_of_spheres_3() { return static_cast<int32_t>(offsetof(mapBuildScript_t2416870533, ___spheres_3)); }
	inline GameObject_t2790157070 * get_spheres_3() const { return ___spheres_3; }
	inline GameObject_t2790157070 ** get_address_of_spheres_3() { return &___spheres_3; }
	inline void set_spheres_3(GameObject_t2790157070 * value)
	{
		___spheres_3 = value;
		Il2CppCodeGenWriteBarrier((&___spheres_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAPBUILDSCRIPT_T2416870533_H
#ifndef LAMPHIT2_T1787859456_H
#define LAMPHIT2_T1787859456_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LampHit2
struct  LampHit2_t1787859456  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.GameObject LampHit2::replaceBulb
	GameObject_t2790157070 * ___replaceBulb_2;
	// UnityEngine.GameObject LampHit2::badBulb
	GameObject_t2790157070 * ___badBulb_3;
	// UnityEngine.GameObject LampHit2::cflTrans
	GameObject_t2790157070 * ___cflTrans_4;
	// UnityEngine.GameObject LampHit2::cflBulb
	GameObject_t2790157070 * ___cflBulb_5;
	// UnityEngine.GameObject LampHit2::BuildingFactTop
	GameObject_t2790157070 * ___BuildingFactTop_6;
	// UnityEngine.GameObject LampHit2::pointer
	GameObject_t2790157070 * ___pointer_7;
	// UnityEngine.GameObject LampHit2::BuildingFactBot
	GameObject_t2790157070 * ___BuildingFactBot_8;
	// UnityEngine.GameObject LampHit2::dontForget
	GameObject_t2790157070 * ___dontForget_9;
	// UnityEngine.GameObject LampHit2::turnOff
	GameObject_t2790157070 * ___turnOff_10;
	// UnityEngine.GameObject LampHit2::lampSpotlight
	GameObject_t2790157070 * ___lampSpotlight_11;
	// UnityEngine.GameObject LampHit2::focusSquareFocus
	GameObject_t2790157070 * ___focusSquareFocus_12;
	// UnityEngine.GameObject LampHit2::focusSquareFind
	GameObject_t2790157070 * ___focusSquareFind_13;
	// UnityEngine.GameObject LampHit2::scanDots
	GameObject_t2790157070 * ___scanDots_14;
	// UnityEngine.Material LampHit2::smokeHigh
	Material_t1280402239 * ___smokeHigh_15;
	// UnityEngine.GameObject LampHit2::trashCanScene
	GameObject_t2790157070 * ___trashCanScene_16;
	// UnityEngine.GameObject LampHit2::newPlacedLamp
	GameObject_t2790157070 * ___newPlacedLamp_17;
	// UnityEngine.GameObject LampHit2::nextButton
	GameObject_t2790157070 * ___nextButton_18;
	// UnityEngine.GameObject LampHit2::newLightBulb
	GameObject_t2790157070 * ___newLightBulb_19;
	// UnityEngine.GameObject LampHit2::thirdModuleObj
	GameObject_t2790157070 * ___thirdModuleObj_20;
	// UnityEngine.GameObject LampHit2::thirdButton
	GameObject_t2790157070 * ___thirdButton_21;
	// UnityEngine.GameObject LampHit2::outroBtn
	GameObject_t2790157070 * ___outroBtn_22;
	// UnityEngine.GameObject LampHit2::seeImpact
	GameObject_t2790157070 * ___seeImpact_23;

public:
	inline static int32_t get_offset_of_replaceBulb_2() { return static_cast<int32_t>(offsetof(LampHit2_t1787859456, ___replaceBulb_2)); }
	inline GameObject_t2790157070 * get_replaceBulb_2() const { return ___replaceBulb_2; }
	inline GameObject_t2790157070 ** get_address_of_replaceBulb_2() { return &___replaceBulb_2; }
	inline void set_replaceBulb_2(GameObject_t2790157070 * value)
	{
		___replaceBulb_2 = value;
		Il2CppCodeGenWriteBarrier((&___replaceBulb_2), value);
	}

	inline static int32_t get_offset_of_badBulb_3() { return static_cast<int32_t>(offsetof(LampHit2_t1787859456, ___badBulb_3)); }
	inline GameObject_t2790157070 * get_badBulb_3() const { return ___badBulb_3; }
	inline GameObject_t2790157070 ** get_address_of_badBulb_3() { return &___badBulb_3; }
	inline void set_badBulb_3(GameObject_t2790157070 * value)
	{
		___badBulb_3 = value;
		Il2CppCodeGenWriteBarrier((&___badBulb_3), value);
	}

	inline static int32_t get_offset_of_cflTrans_4() { return static_cast<int32_t>(offsetof(LampHit2_t1787859456, ___cflTrans_4)); }
	inline GameObject_t2790157070 * get_cflTrans_4() const { return ___cflTrans_4; }
	inline GameObject_t2790157070 ** get_address_of_cflTrans_4() { return &___cflTrans_4; }
	inline void set_cflTrans_4(GameObject_t2790157070 * value)
	{
		___cflTrans_4 = value;
		Il2CppCodeGenWriteBarrier((&___cflTrans_4), value);
	}

	inline static int32_t get_offset_of_cflBulb_5() { return static_cast<int32_t>(offsetof(LampHit2_t1787859456, ___cflBulb_5)); }
	inline GameObject_t2790157070 * get_cflBulb_5() const { return ___cflBulb_5; }
	inline GameObject_t2790157070 ** get_address_of_cflBulb_5() { return &___cflBulb_5; }
	inline void set_cflBulb_5(GameObject_t2790157070 * value)
	{
		___cflBulb_5 = value;
		Il2CppCodeGenWriteBarrier((&___cflBulb_5), value);
	}

	inline static int32_t get_offset_of_BuildingFactTop_6() { return static_cast<int32_t>(offsetof(LampHit2_t1787859456, ___BuildingFactTop_6)); }
	inline GameObject_t2790157070 * get_BuildingFactTop_6() const { return ___BuildingFactTop_6; }
	inline GameObject_t2790157070 ** get_address_of_BuildingFactTop_6() { return &___BuildingFactTop_6; }
	inline void set_BuildingFactTop_6(GameObject_t2790157070 * value)
	{
		___BuildingFactTop_6 = value;
		Il2CppCodeGenWriteBarrier((&___BuildingFactTop_6), value);
	}

	inline static int32_t get_offset_of_pointer_7() { return static_cast<int32_t>(offsetof(LampHit2_t1787859456, ___pointer_7)); }
	inline GameObject_t2790157070 * get_pointer_7() const { return ___pointer_7; }
	inline GameObject_t2790157070 ** get_address_of_pointer_7() { return &___pointer_7; }
	inline void set_pointer_7(GameObject_t2790157070 * value)
	{
		___pointer_7 = value;
		Il2CppCodeGenWriteBarrier((&___pointer_7), value);
	}

	inline static int32_t get_offset_of_BuildingFactBot_8() { return static_cast<int32_t>(offsetof(LampHit2_t1787859456, ___BuildingFactBot_8)); }
	inline GameObject_t2790157070 * get_BuildingFactBot_8() const { return ___BuildingFactBot_8; }
	inline GameObject_t2790157070 ** get_address_of_BuildingFactBot_8() { return &___BuildingFactBot_8; }
	inline void set_BuildingFactBot_8(GameObject_t2790157070 * value)
	{
		___BuildingFactBot_8 = value;
		Il2CppCodeGenWriteBarrier((&___BuildingFactBot_8), value);
	}

	inline static int32_t get_offset_of_dontForget_9() { return static_cast<int32_t>(offsetof(LampHit2_t1787859456, ___dontForget_9)); }
	inline GameObject_t2790157070 * get_dontForget_9() const { return ___dontForget_9; }
	inline GameObject_t2790157070 ** get_address_of_dontForget_9() { return &___dontForget_9; }
	inline void set_dontForget_9(GameObject_t2790157070 * value)
	{
		___dontForget_9 = value;
		Il2CppCodeGenWriteBarrier((&___dontForget_9), value);
	}

	inline static int32_t get_offset_of_turnOff_10() { return static_cast<int32_t>(offsetof(LampHit2_t1787859456, ___turnOff_10)); }
	inline GameObject_t2790157070 * get_turnOff_10() const { return ___turnOff_10; }
	inline GameObject_t2790157070 ** get_address_of_turnOff_10() { return &___turnOff_10; }
	inline void set_turnOff_10(GameObject_t2790157070 * value)
	{
		___turnOff_10 = value;
		Il2CppCodeGenWriteBarrier((&___turnOff_10), value);
	}

	inline static int32_t get_offset_of_lampSpotlight_11() { return static_cast<int32_t>(offsetof(LampHit2_t1787859456, ___lampSpotlight_11)); }
	inline GameObject_t2790157070 * get_lampSpotlight_11() const { return ___lampSpotlight_11; }
	inline GameObject_t2790157070 ** get_address_of_lampSpotlight_11() { return &___lampSpotlight_11; }
	inline void set_lampSpotlight_11(GameObject_t2790157070 * value)
	{
		___lampSpotlight_11 = value;
		Il2CppCodeGenWriteBarrier((&___lampSpotlight_11), value);
	}

	inline static int32_t get_offset_of_focusSquareFocus_12() { return static_cast<int32_t>(offsetof(LampHit2_t1787859456, ___focusSquareFocus_12)); }
	inline GameObject_t2790157070 * get_focusSquareFocus_12() const { return ___focusSquareFocus_12; }
	inline GameObject_t2790157070 ** get_address_of_focusSquareFocus_12() { return &___focusSquareFocus_12; }
	inline void set_focusSquareFocus_12(GameObject_t2790157070 * value)
	{
		___focusSquareFocus_12 = value;
		Il2CppCodeGenWriteBarrier((&___focusSquareFocus_12), value);
	}

	inline static int32_t get_offset_of_focusSquareFind_13() { return static_cast<int32_t>(offsetof(LampHit2_t1787859456, ___focusSquareFind_13)); }
	inline GameObject_t2790157070 * get_focusSquareFind_13() const { return ___focusSquareFind_13; }
	inline GameObject_t2790157070 ** get_address_of_focusSquareFind_13() { return &___focusSquareFind_13; }
	inline void set_focusSquareFind_13(GameObject_t2790157070 * value)
	{
		___focusSquareFind_13 = value;
		Il2CppCodeGenWriteBarrier((&___focusSquareFind_13), value);
	}

	inline static int32_t get_offset_of_scanDots_14() { return static_cast<int32_t>(offsetof(LampHit2_t1787859456, ___scanDots_14)); }
	inline GameObject_t2790157070 * get_scanDots_14() const { return ___scanDots_14; }
	inline GameObject_t2790157070 ** get_address_of_scanDots_14() { return &___scanDots_14; }
	inline void set_scanDots_14(GameObject_t2790157070 * value)
	{
		___scanDots_14 = value;
		Il2CppCodeGenWriteBarrier((&___scanDots_14), value);
	}

	inline static int32_t get_offset_of_smokeHigh_15() { return static_cast<int32_t>(offsetof(LampHit2_t1787859456, ___smokeHigh_15)); }
	inline Material_t1280402239 * get_smokeHigh_15() const { return ___smokeHigh_15; }
	inline Material_t1280402239 ** get_address_of_smokeHigh_15() { return &___smokeHigh_15; }
	inline void set_smokeHigh_15(Material_t1280402239 * value)
	{
		___smokeHigh_15 = value;
		Il2CppCodeGenWriteBarrier((&___smokeHigh_15), value);
	}

	inline static int32_t get_offset_of_trashCanScene_16() { return static_cast<int32_t>(offsetof(LampHit2_t1787859456, ___trashCanScene_16)); }
	inline GameObject_t2790157070 * get_trashCanScene_16() const { return ___trashCanScene_16; }
	inline GameObject_t2790157070 ** get_address_of_trashCanScene_16() { return &___trashCanScene_16; }
	inline void set_trashCanScene_16(GameObject_t2790157070 * value)
	{
		___trashCanScene_16 = value;
		Il2CppCodeGenWriteBarrier((&___trashCanScene_16), value);
	}

	inline static int32_t get_offset_of_newPlacedLamp_17() { return static_cast<int32_t>(offsetof(LampHit2_t1787859456, ___newPlacedLamp_17)); }
	inline GameObject_t2790157070 * get_newPlacedLamp_17() const { return ___newPlacedLamp_17; }
	inline GameObject_t2790157070 ** get_address_of_newPlacedLamp_17() { return &___newPlacedLamp_17; }
	inline void set_newPlacedLamp_17(GameObject_t2790157070 * value)
	{
		___newPlacedLamp_17 = value;
		Il2CppCodeGenWriteBarrier((&___newPlacedLamp_17), value);
	}

	inline static int32_t get_offset_of_nextButton_18() { return static_cast<int32_t>(offsetof(LampHit2_t1787859456, ___nextButton_18)); }
	inline GameObject_t2790157070 * get_nextButton_18() const { return ___nextButton_18; }
	inline GameObject_t2790157070 ** get_address_of_nextButton_18() { return &___nextButton_18; }
	inline void set_nextButton_18(GameObject_t2790157070 * value)
	{
		___nextButton_18 = value;
		Il2CppCodeGenWriteBarrier((&___nextButton_18), value);
	}

	inline static int32_t get_offset_of_newLightBulb_19() { return static_cast<int32_t>(offsetof(LampHit2_t1787859456, ___newLightBulb_19)); }
	inline GameObject_t2790157070 * get_newLightBulb_19() const { return ___newLightBulb_19; }
	inline GameObject_t2790157070 ** get_address_of_newLightBulb_19() { return &___newLightBulb_19; }
	inline void set_newLightBulb_19(GameObject_t2790157070 * value)
	{
		___newLightBulb_19 = value;
		Il2CppCodeGenWriteBarrier((&___newLightBulb_19), value);
	}

	inline static int32_t get_offset_of_thirdModuleObj_20() { return static_cast<int32_t>(offsetof(LampHit2_t1787859456, ___thirdModuleObj_20)); }
	inline GameObject_t2790157070 * get_thirdModuleObj_20() const { return ___thirdModuleObj_20; }
	inline GameObject_t2790157070 ** get_address_of_thirdModuleObj_20() { return &___thirdModuleObj_20; }
	inline void set_thirdModuleObj_20(GameObject_t2790157070 * value)
	{
		___thirdModuleObj_20 = value;
		Il2CppCodeGenWriteBarrier((&___thirdModuleObj_20), value);
	}

	inline static int32_t get_offset_of_thirdButton_21() { return static_cast<int32_t>(offsetof(LampHit2_t1787859456, ___thirdButton_21)); }
	inline GameObject_t2790157070 * get_thirdButton_21() const { return ___thirdButton_21; }
	inline GameObject_t2790157070 ** get_address_of_thirdButton_21() { return &___thirdButton_21; }
	inline void set_thirdButton_21(GameObject_t2790157070 * value)
	{
		___thirdButton_21 = value;
		Il2CppCodeGenWriteBarrier((&___thirdButton_21), value);
	}

	inline static int32_t get_offset_of_outroBtn_22() { return static_cast<int32_t>(offsetof(LampHit2_t1787859456, ___outroBtn_22)); }
	inline GameObject_t2790157070 * get_outroBtn_22() const { return ___outroBtn_22; }
	inline GameObject_t2790157070 ** get_address_of_outroBtn_22() { return &___outroBtn_22; }
	inline void set_outroBtn_22(GameObject_t2790157070 * value)
	{
		___outroBtn_22 = value;
		Il2CppCodeGenWriteBarrier((&___outroBtn_22), value);
	}

	inline static int32_t get_offset_of_seeImpact_23() { return static_cast<int32_t>(offsetof(LampHit2_t1787859456, ___seeImpact_23)); }
	inline GameObject_t2790157070 * get_seeImpact_23() const { return ___seeImpact_23; }
	inline GameObject_t2790157070 ** get_address_of_seeImpact_23() { return &___seeImpact_23; }
	inline void set_seeImpact_23(GameObject_t2790157070 * value)
	{
		___seeImpact_23 = value;
		Il2CppCodeGenWriteBarrier((&___seeImpact_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAMPHIT2_T1787859456_H
#ifndef LOADDELAYOUTRO_T1767213290_H
#define LOADDELAYOUTRO_T1767213290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// loadDelayOutro
struct  loadDelayOutro_t1767213290  : public MonoBehaviour_t4005906508
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADDELAYOUTRO_T1767213290_H
#ifndef SCREEN3_T3028932180_H
#define SCREEN3_T3028932180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Screen3
struct  Screen3_t3028932180  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.GameObject Screen3::thirdScreen
	GameObject_t2790157070 * ___thirdScreen_2;

public:
	inline static int32_t get_offset_of_thirdScreen_2() { return static_cast<int32_t>(offsetof(Screen3_t3028932180, ___thirdScreen_2)); }
	inline GameObject_t2790157070 * get_thirdScreen_2() const { return ___thirdScreen_2; }
	inline GameObject_t2790157070 ** get_address_of_thirdScreen_2() { return &___thirdScreen_2; }
	inline void set_thirdScreen_2(GameObject_t2790157070 * value)
	{
		___thirdScreen_2 = value;
		Il2CppCodeGenWriteBarrier((&___thirdScreen_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREEN3_T3028932180_H
#ifndef START_T1641636982_H
#define START_T1641636982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// start
struct  start_t1641636982  : public MonoBehaviour_t4005906508
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // START_T1641636982_H
#ifndef TEAMARHITTEST_T981517283_H
#define TEAMARHITTEST_T981517283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.TeamARHitTest
struct  TeamARHitTest_t981517283  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.Transform UnityEngine.XR.iOS.TeamARHitTest::m_HitTransform
	Transform_t3297798951 * ___m_HitTransform_2;
	// System.Single UnityEngine.XR.iOS.TeamARHitTest::maxRayDistance
	float ___maxRayDistance_3;
	// UnityEngine.LayerMask UnityEngine.XR.iOS.TeamARHitTest::collisionLayer
	LayerMask_t3213958634  ___collisionLayer_4;
	// System.Single UnityEngine.XR.iOS.TeamARHitTest::findingSquareDist
	float ___findingSquareDist_5;
	// UnityEngine.GameObject UnityEngine.XR.iOS.TeamARHitTest::BlueFocusSquare
	GameObject_t2790157070 * ___BlueFocusSquare_6;
	// UnityEngine.GameObject UnityEngine.XR.iOS.TeamARHitTest::FocusedSquare
	GameObject_t2790157070 * ___FocusedSquare_7;
	// UnityEngine.GameObject UnityEngine.XR.iOS.TeamARHitTest::WholeLamp
	GameObject_t2790157070 * ___WholeLamp_8;
	// UnityEngine.GameObject UnityEngine.XR.iOS.TeamARHitTest::TapToText
	GameObject_t2790157070 * ___TapToText_9;
	// UnityEngine.GameObject UnityEngine.XR.iOS.TeamARHitTest::replaceBulb
	GameObject_t2790157070 * ___replaceBulb_10;
	// UnityEngine.GameObject UnityEngine.XR.iOS.TeamARHitTest::lampNewCollider
	GameObject_t2790157070 * ___lampNewCollider_11;
	// UnityEngine.Material UnityEngine.XR.iOS.TeamARHitTest::lampShade
	Material_t1280402239 * ___lampShade_12;
	// UnityEngine.Collider UnityEngine.XR.iOS.TeamARHitTest::m_Collider
	Collider_t1018170857 * ___m_Collider_13;

public:
	inline static int32_t get_offset_of_m_HitTransform_2() { return static_cast<int32_t>(offsetof(TeamARHitTest_t981517283, ___m_HitTransform_2)); }
	inline Transform_t3297798951 * get_m_HitTransform_2() const { return ___m_HitTransform_2; }
	inline Transform_t3297798951 ** get_address_of_m_HitTransform_2() { return &___m_HitTransform_2; }
	inline void set_m_HitTransform_2(Transform_t3297798951 * value)
	{
		___m_HitTransform_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_HitTransform_2), value);
	}

	inline static int32_t get_offset_of_maxRayDistance_3() { return static_cast<int32_t>(offsetof(TeamARHitTest_t981517283, ___maxRayDistance_3)); }
	inline float get_maxRayDistance_3() const { return ___maxRayDistance_3; }
	inline float* get_address_of_maxRayDistance_3() { return &___maxRayDistance_3; }
	inline void set_maxRayDistance_3(float value)
	{
		___maxRayDistance_3 = value;
	}

	inline static int32_t get_offset_of_collisionLayer_4() { return static_cast<int32_t>(offsetof(TeamARHitTest_t981517283, ___collisionLayer_4)); }
	inline LayerMask_t3213958634  get_collisionLayer_4() const { return ___collisionLayer_4; }
	inline LayerMask_t3213958634 * get_address_of_collisionLayer_4() { return &___collisionLayer_4; }
	inline void set_collisionLayer_4(LayerMask_t3213958634  value)
	{
		___collisionLayer_4 = value;
	}

	inline static int32_t get_offset_of_findingSquareDist_5() { return static_cast<int32_t>(offsetof(TeamARHitTest_t981517283, ___findingSquareDist_5)); }
	inline float get_findingSquareDist_5() const { return ___findingSquareDist_5; }
	inline float* get_address_of_findingSquareDist_5() { return &___findingSquareDist_5; }
	inline void set_findingSquareDist_5(float value)
	{
		___findingSquareDist_5 = value;
	}

	inline static int32_t get_offset_of_BlueFocusSquare_6() { return static_cast<int32_t>(offsetof(TeamARHitTest_t981517283, ___BlueFocusSquare_6)); }
	inline GameObject_t2790157070 * get_BlueFocusSquare_6() const { return ___BlueFocusSquare_6; }
	inline GameObject_t2790157070 ** get_address_of_BlueFocusSquare_6() { return &___BlueFocusSquare_6; }
	inline void set_BlueFocusSquare_6(GameObject_t2790157070 * value)
	{
		___BlueFocusSquare_6 = value;
		Il2CppCodeGenWriteBarrier((&___BlueFocusSquare_6), value);
	}

	inline static int32_t get_offset_of_FocusedSquare_7() { return static_cast<int32_t>(offsetof(TeamARHitTest_t981517283, ___FocusedSquare_7)); }
	inline GameObject_t2790157070 * get_FocusedSquare_7() const { return ___FocusedSquare_7; }
	inline GameObject_t2790157070 ** get_address_of_FocusedSquare_7() { return &___FocusedSquare_7; }
	inline void set_FocusedSquare_7(GameObject_t2790157070 * value)
	{
		___FocusedSquare_7 = value;
		Il2CppCodeGenWriteBarrier((&___FocusedSquare_7), value);
	}

	inline static int32_t get_offset_of_WholeLamp_8() { return static_cast<int32_t>(offsetof(TeamARHitTest_t981517283, ___WholeLamp_8)); }
	inline GameObject_t2790157070 * get_WholeLamp_8() const { return ___WholeLamp_8; }
	inline GameObject_t2790157070 ** get_address_of_WholeLamp_8() { return &___WholeLamp_8; }
	inline void set_WholeLamp_8(GameObject_t2790157070 * value)
	{
		___WholeLamp_8 = value;
		Il2CppCodeGenWriteBarrier((&___WholeLamp_8), value);
	}

	inline static int32_t get_offset_of_TapToText_9() { return static_cast<int32_t>(offsetof(TeamARHitTest_t981517283, ___TapToText_9)); }
	inline GameObject_t2790157070 * get_TapToText_9() const { return ___TapToText_9; }
	inline GameObject_t2790157070 ** get_address_of_TapToText_9() { return &___TapToText_9; }
	inline void set_TapToText_9(GameObject_t2790157070 * value)
	{
		___TapToText_9 = value;
		Il2CppCodeGenWriteBarrier((&___TapToText_9), value);
	}

	inline static int32_t get_offset_of_replaceBulb_10() { return static_cast<int32_t>(offsetof(TeamARHitTest_t981517283, ___replaceBulb_10)); }
	inline GameObject_t2790157070 * get_replaceBulb_10() const { return ___replaceBulb_10; }
	inline GameObject_t2790157070 ** get_address_of_replaceBulb_10() { return &___replaceBulb_10; }
	inline void set_replaceBulb_10(GameObject_t2790157070 * value)
	{
		___replaceBulb_10 = value;
		Il2CppCodeGenWriteBarrier((&___replaceBulb_10), value);
	}

	inline static int32_t get_offset_of_lampNewCollider_11() { return static_cast<int32_t>(offsetof(TeamARHitTest_t981517283, ___lampNewCollider_11)); }
	inline GameObject_t2790157070 * get_lampNewCollider_11() const { return ___lampNewCollider_11; }
	inline GameObject_t2790157070 ** get_address_of_lampNewCollider_11() { return &___lampNewCollider_11; }
	inline void set_lampNewCollider_11(GameObject_t2790157070 * value)
	{
		___lampNewCollider_11 = value;
		Il2CppCodeGenWriteBarrier((&___lampNewCollider_11), value);
	}

	inline static int32_t get_offset_of_lampShade_12() { return static_cast<int32_t>(offsetof(TeamARHitTest_t981517283, ___lampShade_12)); }
	inline Material_t1280402239 * get_lampShade_12() const { return ___lampShade_12; }
	inline Material_t1280402239 ** get_address_of_lampShade_12() { return &___lampShade_12; }
	inline void set_lampShade_12(Material_t1280402239 * value)
	{
		___lampShade_12 = value;
		Il2CppCodeGenWriteBarrier((&___lampShade_12), value);
	}

	inline static int32_t get_offset_of_m_Collider_13() { return static_cast<int32_t>(offsetof(TeamARHitTest_t981517283, ___m_Collider_13)); }
	inline Collider_t1018170857 * get_m_Collider_13() const { return ___m_Collider_13; }
	inline Collider_t1018170857 ** get_address_of_m_Collider_13() { return &___m_Collider_13; }
	inline void set_m_Collider_13(Collider_t1018170857 * value)
	{
		___m_Collider_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEAMARHITTEST_T981517283_H
#ifndef THIRDMOD_T1444623421_H
#define THIRDMOD_T1444623421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// thirdmod
struct  thirdmod_t1444623421  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.GameObject thirdmod::fire
	GameObject_t2790157070 * ___fire_2;
	// UnityEngine.GameObject thirdmod::coal
	GameObject_t2790157070 * ___coal_3;
	// UnityEngine.GameObject thirdmod::gas
	GameObject_t2790157070 * ___gas_4;
	// UnityEngine.GameObject thirdmod::clean
	GameObject_t2790157070 * ___clean_5;
	// UnityEngine.GameObject thirdmod::woodEnergy
	GameObject_t2790157070 * ___woodEnergy_6;
	// UnityEngine.GameObject thirdmod::coalEnergy
	GameObject_t2790157070 * ___coalEnergy_7;
	// UnityEngine.GameObject thirdmod::gasEnergy
	GameObject_t2790157070 * ___gasEnergy_8;

public:
	inline static int32_t get_offset_of_fire_2() { return static_cast<int32_t>(offsetof(thirdmod_t1444623421, ___fire_2)); }
	inline GameObject_t2790157070 * get_fire_2() const { return ___fire_2; }
	inline GameObject_t2790157070 ** get_address_of_fire_2() { return &___fire_2; }
	inline void set_fire_2(GameObject_t2790157070 * value)
	{
		___fire_2 = value;
		Il2CppCodeGenWriteBarrier((&___fire_2), value);
	}

	inline static int32_t get_offset_of_coal_3() { return static_cast<int32_t>(offsetof(thirdmod_t1444623421, ___coal_3)); }
	inline GameObject_t2790157070 * get_coal_3() const { return ___coal_3; }
	inline GameObject_t2790157070 ** get_address_of_coal_3() { return &___coal_3; }
	inline void set_coal_3(GameObject_t2790157070 * value)
	{
		___coal_3 = value;
		Il2CppCodeGenWriteBarrier((&___coal_3), value);
	}

	inline static int32_t get_offset_of_gas_4() { return static_cast<int32_t>(offsetof(thirdmod_t1444623421, ___gas_4)); }
	inline GameObject_t2790157070 * get_gas_4() const { return ___gas_4; }
	inline GameObject_t2790157070 ** get_address_of_gas_4() { return &___gas_4; }
	inline void set_gas_4(GameObject_t2790157070 * value)
	{
		___gas_4 = value;
		Il2CppCodeGenWriteBarrier((&___gas_4), value);
	}

	inline static int32_t get_offset_of_clean_5() { return static_cast<int32_t>(offsetof(thirdmod_t1444623421, ___clean_5)); }
	inline GameObject_t2790157070 * get_clean_5() const { return ___clean_5; }
	inline GameObject_t2790157070 ** get_address_of_clean_5() { return &___clean_5; }
	inline void set_clean_5(GameObject_t2790157070 * value)
	{
		___clean_5 = value;
		Il2CppCodeGenWriteBarrier((&___clean_5), value);
	}

	inline static int32_t get_offset_of_woodEnergy_6() { return static_cast<int32_t>(offsetof(thirdmod_t1444623421, ___woodEnergy_6)); }
	inline GameObject_t2790157070 * get_woodEnergy_6() const { return ___woodEnergy_6; }
	inline GameObject_t2790157070 ** get_address_of_woodEnergy_6() { return &___woodEnergy_6; }
	inline void set_woodEnergy_6(GameObject_t2790157070 * value)
	{
		___woodEnergy_6 = value;
		Il2CppCodeGenWriteBarrier((&___woodEnergy_6), value);
	}

	inline static int32_t get_offset_of_coalEnergy_7() { return static_cast<int32_t>(offsetof(thirdmod_t1444623421, ___coalEnergy_7)); }
	inline GameObject_t2790157070 * get_coalEnergy_7() const { return ___coalEnergy_7; }
	inline GameObject_t2790157070 ** get_address_of_coalEnergy_7() { return &___coalEnergy_7; }
	inline void set_coalEnergy_7(GameObject_t2790157070 * value)
	{
		___coalEnergy_7 = value;
		Il2CppCodeGenWriteBarrier((&___coalEnergy_7), value);
	}

	inline static int32_t get_offset_of_gasEnergy_8() { return static_cast<int32_t>(offsetof(thirdmod_t1444623421, ___gasEnergy_8)); }
	inline GameObject_t2790157070 * get_gasEnergy_8() const { return ___gasEnergy_8; }
	inline GameObject_t2790157070 ** get_address_of_gasEnergy_8() { return &___gasEnergy_8; }
	inline void set_gasEnergy_8(GameObject_t2790157070 * value)
	{
		___gasEnergy_8 = value;
		Il2CppCodeGenWriteBarrier((&___gasEnergy_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THIRDMOD_T1444623421_H
#ifndef FLICKERINGLIGHT_T1093893472_H
#define FLICKERINGLIGHT_T1093893472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// flickeringLight
struct  flickeringLight_t1093893472  : public MonoBehaviour_t4005906508
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLICKERINGLIGHT_T1093893472_H
#ifndef HITBYRAY_T2158920764_H
#define HITBYRAY_T2158920764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HitByRay
struct  HitByRay_t2158920764  : public MonoBehaviour_t4005906508
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HITBYRAY_T2158920764_H
#ifndef HITBYRAYCAST_T3033053920_H
#define HITBYRAYCAST_T3033053920_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HitByRaycast
struct  HitByRaycast_t3033053920  : public MonoBehaviour_t4005906508
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HITBYRAYCAST_T3033053920_H
#ifndef IFANCHORADDEDSCRIPT_T1665314291_H
#define IFANCHORADDEDSCRIPT_T1665314291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IfAnchorAddedScript
struct  IfAnchorAddedScript_t1665314291  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.XR.iOS.UnityARAnchorManager IfAnchorAddedScript::unityARAnchorManager
	UnityARAnchorManager_t3980877334 * ___unityARAnchorManager_2;
	// UnityEngine.GameObject IfAnchorAddedScript::FindFlatSurfaceIcon
	GameObject_t2790157070 * ___FindFlatSurfaceIcon_3;
	// UnityEngine.GameObject IfAnchorAddedScript::FindFlatSurfaceText
	GameObject_t2790157070 * ___FindFlatSurfaceText_4;
	// UnityEngine.GameObject IfAnchorAddedScript::TapToPlaceText
	GameObject_t2790157070 * ___TapToPlaceText_5;
	// UnityEngine.GameObject IfAnchorAddedScript::ObjectFocusSquare
	GameObject_t2790157070 * ___ObjectFocusSquare_6;
	// UnityEngine.Material IfAnchorAddedScript::lampShade
	Material_t1280402239 * ___lampShade_7;

public:
	inline static int32_t get_offset_of_unityARAnchorManager_2() { return static_cast<int32_t>(offsetof(IfAnchorAddedScript_t1665314291, ___unityARAnchorManager_2)); }
	inline UnityARAnchorManager_t3980877334 * get_unityARAnchorManager_2() const { return ___unityARAnchorManager_2; }
	inline UnityARAnchorManager_t3980877334 ** get_address_of_unityARAnchorManager_2() { return &___unityARAnchorManager_2; }
	inline void set_unityARAnchorManager_2(UnityARAnchorManager_t3980877334 * value)
	{
		___unityARAnchorManager_2 = value;
		Il2CppCodeGenWriteBarrier((&___unityARAnchorManager_2), value);
	}

	inline static int32_t get_offset_of_FindFlatSurfaceIcon_3() { return static_cast<int32_t>(offsetof(IfAnchorAddedScript_t1665314291, ___FindFlatSurfaceIcon_3)); }
	inline GameObject_t2790157070 * get_FindFlatSurfaceIcon_3() const { return ___FindFlatSurfaceIcon_3; }
	inline GameObject_t2790157070 ** get_address_of_FindFlatSurfaceIcon_3() { return &___FindFlatSurfaceIcon_3; }
	inline void set_FindFlatSurfaceIcon_3(GameObject_t2790157070 * value)
	{
		___FindFlatSurfaceIcon_3 = value;
		Il2CppCodeGenWriteBarrier((&___FindFlatSurfaceIcon_3), value);
	}

	inline static int32_t get_offset_of_FindFlatSurfaceText_4() { return static_cast<int32_t>(offsetof(IfAnchorAddedScript_t1665314291, ___FindFlatSurfaceText_4)); }
	inline GameObject_t2790157070 * get_FindFlatSurfaceText_4() const { return ___FindFlatSurfaceText_4; }
	inline GameObject_t2790157070 ** get_address_of_FindFlatSurfaceText_4() { return &___FindFlatSurfaceText_4; }
	inline void set_FindFlatSurfaceText_4(GameObject_t2790157070 * value)
	{
		___FindFlatSurfaceText_4 = value;
		Il2CppCodeGenWriteBarrier((&___FindFlatSurfaceText_4), value);
	}

	inline static int32_t get_offset_of_TapToPlaceText_5() { return static_cast<int32_t>(offsetof(IfAnchorAddedScript_t1665314291, ___TapToPlaceText_5)); }
	inline GameObject_t2790157070 * get_TapToPlaceText_5() const { return ___TapToPlaceText_5; }
	inline GameObject_t2790157070 ** get_address_of_TapToPlaceText_5() { return &___TapToPlaceText_5; }
	inline void set_TapToPlaceText_5(GameObject_t2790157070 * value)
	{
		___TapToPlaceText_5 = value;
		Il2CppCodeGenWriteBarrier((&___TapToPlaceText_5), value);
	}

	inline static int32_t get_offset_of_ObjectFocusSquare_6() { return static_cast<int32_t>(offsetof(IfAnchorAddedScript_t1665314291, ___ObjectFocusSquare_6)); }
	inline GameObject_t2790157070 * get_ObjectFocusSquare_6() const { return ___ObjectFocusSquare_6; }
	inline GameObject_t2790157070 ** get_address_of_ObjectFocusSquare_6() { return &___ObjectFocusSquare_6; }
	inline void set_ObjectFocusSquare_6(GameObject_t2790157070 * value)
	{
		___ObjectFocusSquare_6 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectFocusSquare_6), value);
	}

	inline static int32_t get_offset_of_lampShade_7() { return static_cast<int32_t>(offsetof(IfAnchorAddedScript_t1665314291, ___lampShade_7)); }
	inline Material_t1280402239 * get_lampShade_7() const { return ___lampShade_7; }
	inline Material_t1280402239 ** get_address_of_lampShade_7() { return &___lampShade_7; }
	inline void set_lampShade_7(Material_t1280402239 * value)
	{
		___lampShade_7 = value;
		Il2CppCodeGenWriteBarrier((&___lampShade_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IFANCHORADDEDSCRIPT_T1665314291_H
#ifndef EDITORHITTEST_T1374729210_H
#define EDITORHITTEST_T1374729210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.EditorHitTest
struct  EditorHitTest_t1374729210  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.Transform UnityEngine.XR.iOS.EditorHitTest::m_HitTransform
	Transform_t3297798951 * ___m_HitTransform_2;
	// System.Single UnityEngine.XR.iOS.EditorHitTest::maxRayDistance
	float ___maxRayDistance_3;
	// UnityEngine.LayerMask UnityEngine.XR.iOS.EditorHitTest::collisionLayerMask
	LayerMask_t3213958634  ___collisionLayerMask_4;

public:
	inline static int32_t get_offset_of_m_HitTransform_2() { return static_cast<int32_t>(offsetof(EditorHitTest_t1374729210, ___m_HitTransform_2)); }
	inline Transform_t3297798951 * get_m_HitTransform_2() const { return ___m_HitTransform_2; }
	inline Transform_t3297798951 ** get_address_of_m_HitTransform_2() { return &___m_HitTransform_2; }
	inline void set_m_HitTransform_2(Transform_t3297798951 * value)
	{
		___m_HitTransform_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_HitTransform_2), value);
	}

	inline static int32_t get_offset_of_maxRayDistance_3() { return static_cast<int32_t>(offsetof(EditorHitTest_t1374729210, ___maxRayDistance_3)); }
	inline float get_maxRayDistance_3() const { return ___maxRayDistance_3; }
	inline float* get_address_of_maxRayDistance_3() { return &___maxRayDistance_3; }
	inline void set_maxRayDistance_3(float value)
	{
		___maxRayDistance_3 = value;
	}

	inline static int32_t get_offset_of_collisionLayerMask_4() { return static_cast<int32_t>(offsetof(EditorHitTest_t1374729210, ___collisionLayerMask_4)); }
	inline LayerMask_t3213958634  get_collisionLayerMask_4() const { return ___collisionLayerMask_4; }
	inline LayerMask_t3213958634 * get_address_of_collisionLayerMask_4() { return &___collisionLayerMask_4; }
	inline void set_collisionLayerMask_4(LayerMask_t3213958634  value)
	{
		___collisionLayerMask_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORHITTEST_T1374729210_H
#ifndef CONNECTTOEDITOR_T2268165222_H
#define CONNECTTOEDITOR_T2268165222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ConnectToEditor
struct  ConnectToEditor_t2268165222  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.Networking.PlayerConnection.PlayerConnection UnityEngine.XR.iOS.ConnectToEditor::playerConnection
	PlayerConnection_t2057767320 * ___playerConnection_2;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.ConnectToEditor::m_session
	UnityARSessionNativeInterface_t3588887273 * ___m_session_3;
	// System.Int32 UnityEngine.XR.iOS.ConnectToEditor::editorID
	int32_t ___editorID_4;
	// UnityEngine.Texture2D UnityEngine.XR.iOS.ConnectToEditor::frameBufferTex
	Texture2D_t3616965985 * ___frameBufferTex_5;

public:
	inline static int32_t get_offset_of_playerConnection_2() { return static_cast<int32_t>(offsetof(ConnectToEditor_t2268165222, ___playerConnection_2)); }
	inline PlayerConnection_t2057767320 * get_playerConnection_2() const { return ___playerConnection_2; }
	inline PlayerConnection_t2057767320 ** get_address_of_playerConnection_2() { return &___playerConnection_2; }
	inline void set_playerConnection_2(PlayerConnection_t2057767320 * value)
	{
		___playerConnection_2 = value;
		Il2CppCodeGenWriteBarrier((&___playerConnection_2), value);
	}

	inline static int32_t get_offset_of_m_session_3() { return static_cast<int32_t>(offsetof(ConnectToEditor_t2268165222, ___m_session_3)); }
	inline UnityARSessionNativeInterface_t3588887273 * get_m_session_3() const { return ___m_session_3; }
	inline UnityARSessionNativeInterface_t3588887273 ** get_address_of_m_session_3() { return &___m_session_3; }
	inline void set_m_session_3(UnityARSessionNativeInterface_t3588887273 * value)
	{
		___m_session_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_session_3), value);
	}

	inline static int32_t get_offset_of_editorID_4() { return static_cast<int32_t>(offsetof(ConnectToEditor_t2268165222, ___editorID_4)); }
	inline int32_t get_editorID_4() const { return ___editorID_4; }
	inline int32_t* get_address_of_editorID_4() { return &___editorID_4; }
	inline void set_editorID_4(int32_t value)
	{
		___editorID_4 = value;
	}

	inline static int32_t get_offset_of_frameBufferTex_5() { return static_cast<int32_t>(offsetof(ConnectToEditor_t2268165222, ___frameBufferTex_5)); }
	inline Texture2D_t3616965985 * get_frameBufferTex_5() const { return ___frameBufferTex_5; }
	inline Texture2D_t3616965985 ** get_address_of_frameBufferTex_5() { return &___frameBufferTex_5; }
	inline void set_frameBufferTex_5(Texture2D_t3616965985 * value)
	{
		___frameBufferTex_5 = value;
		Il2CppCodeGenWriteBarrier((&___frameBufferTex_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTTOEDITOR_T2268165222_H
#ifndef IGNORECOLLISION_T3624962691_H
#define IGNORECOLLISION_T3624962691_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ignoreCollision
struct  ignoreCollision_t3624962691  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.Transform ignoreCollision::goodTrash
	Transform_t3297798951 * ___goodTrash_2;
	// UnityEngine.Transform ignoreCollision::goodTrash2
	Transform_t3297798951 * ___goodTrash2_3;
	// UnityEngine.Transform ignoreCollision::goodTrash3
	Transform_t3297798951 * ___goodTrash3_4;
	// UnityEngine.GameObject ignoreCollision::trashDialogue
	GameObject_t2790157070 * ___trashDialogue_5;
	// UnityEngine.GameObject ignoreCollision::foamDialogue
	GameObject_t2790157070 * ___foamDialogue_6;

public:
	inline static int32_t get_offset_of_goodTrash_2() { return static_cast<int32_t>(offsetof(ignoreCollision_t3624962691, ___goodTrash_2)); }
	inline Transform_t3297798951 * get_goodTrash_2() const { return ___goodTrash_2; }
	inline Transform_t3297798951 ** get_address_of_goodTrash_2() { return &___goodTrash_2; }
	inline void set_goodTrash_2(Transform_t3297798951 * value)
	{
		___goodTrash_2 = value;
		Il2CppCodeGenWriteBarrier((&___goodTrash_2), value);
	}

	inline static int32_t get_offset_of_goodTrash2_3() { return static_cast<int32_t>(offsetof(ignoreCollision_t3624962691, ___goodTrash2_3)); }
	inline Transform_t3297798951 * get_goodTrash2_3() const { return ___goodTrash2_3; }
	inline Transform_t3297798951 ** get_address_of_goodTrash2_3() { return &___goodTrash2_3; }
	inline void set_goodTrash2_3(Transform_t3297798951 * value)
	{
		___goodTrash2_3 = value;
		Il2CppCodeGenWriteBarrier((&___goodTrash2_3), value);
	}

	inline static int32_t get_offset_of_goodTrash3_4() { return static_cast<int32_t>(offsetof(ignoreCollision_t3624962691, ___goodTrash3_4)); }
	inline Transform_t3297798951 * get_goodTrash3_4() const { return ___goodTrash3_4; }
	inline Transform_t3297798951 ** get_address_of_goodTrash3_4() { return &___goodTrash3_4; }
	inline void set_goodTrash3_4(Transform_t3297798951 * value)
	{
		___goodTrash3_4 = value;
		Il2CppCodeGenWriteBarrier((&___goodTrash3_4), value);
	}

	inline static int32_t get_offset_of_trashDialogue_5() { return static_cast<int32_t>(offsetof(ignoreCollision_t3624962691, ___trashDialogue_5)); }
	inline GameObject_t2790157070 * get_trashDialogue_5() const { return ___trashDialogue_5; }
	inline GameObject_t2790157070 ** get_address_of_trashDialogue_5() { return &___trashDialogue_5; }
	inline void set_trashDialogue_5(GameObject_t2790157070 * value)
	{
		___trashDialogue_5 = value;
		Il2CppCodeGenWriteBarrier((&___trashDialogue_5), value);
	}

	inline static int32_t get_offset_of_foamDialogue_6() { return static_cast<int32_t>(offsetof(ignoreCollision_t3624962691, ___foamDialogue_6)); }
	inline GameObject_t2790157070 * get_foamDialogue_6() const { return ___foamDialogue_6; }
	inline GameObject_t2790157070 ** get_address_of_foamDialogue_6() { return &___foamDialogue_6; }
	inline void set_foamDialogue_6(GameObject_t2790157070 * value)
	{
		___foamDialogue_6 = value;
		Il2CppCodeGenWriteBarrier((&___foamDialogue_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IGNORECOLLISION_T3624962691_H
#ifndef FLICKER_T55228864_H
#define FLICKER_T55228864_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// flicker
struct  flicker_t55228864  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.GameObject flicker::badLight
	GameObject_t2790157070 * ___badLight_2;
	// System.Single flicker::timeOn
	float ___timeOn_3;
	// System.Single flicker::timeOff
	float ___timeOff_4;
	// System.Single flicker::changeTime
	float ___changeTime_5;
	// UnityEngine.Light flicker::lit
	Light_t1504321984 * ___lit_6;

public:
	inline static int32_t get_offset_of_badLight_2() { return static_cast<int32_t>(offsetof(flicker_t55228864, ___badLight_2)); }
	inline GameObject_t2790157070 * get_badLight_2() const { return ___badLight_2; }
	inline GameObject_t2790157070 ** get_address_of_badLight_2() { return &___badLight_2; }
	inline void set_badLight_2(GameObject_t2790157070 * value)
	{
		___badLight_2 = value;
		Il2CppCodeGenWriteBarrier((&___badLight_2), value);
	}

	inline static int32_t get_offset_of_timeOn_3() { return static_cast<int32_t>(offsetof(flicker_t55228864, ___timeOn_3)); }
	inline float get_timeOn_3() const { return ___timeOn_3; }
	inline float* get_address_of_timeOn_3() { return &___timeOn_3; }
	inline void set_timeOn_3(float value)
	{
		___timeOn_3 = value;
	}

	inline static int32_t get_offset_of_timeOff_4() { return static_cast<int32_t>(offsetof(flicker_t55228864, ___timeOff_4)); }
	inline float get_timeOff_4() const { return ___timeOff_4; }
	inline float* get_address_of_timeOff_4() { return &___timeOff_4; }
	inline void set_timeOff_4(float value)
	{
		___timeOff_4 = value;
	}

	inline static int32_t get_offset_of_changeTime_5() { return static_cast<int32_t>(offsetof(flicker_t55228864, ___changeTime_5)); }
	inline float get_changeTime_5() const { return ___changeTime_5; }
	inline float* get_address_of_changeTime_5() { return &___changeTime_5; }
	inline void set_changeTime_5(float value)
	{
		___changeTime_5 = value;
	}

	inline static int32_t get_offset_of_lit_6() { return static_cast<int32_t>(offsetof(flicker_t55228864, ___lit_6)); }
	inline Light_t1504321984 * get_lit_6() const { return ___lit_6; }
	inline Light_t1504321984 ** get_address_of_lit_6() { return &___lit_6; }
	inline void set_lit_6(Light_t1504321984 * value)
	{
		___lit_6 = value;
		Il2CppCodeGenWriteBarrier((&___lit_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLICKER_T55228864_H
#ifndef INSTANTIATESPHERE_T4212472727_H
#define INSTANTIATESPHERE_T4212472727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// instantiateSphere
struct  instantiateSphere_t4212472727  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.GameObject instantiateSphere::holder
	GameObject_t2790157070 * ___holder_2;
	// UnityEngine.GameObject instantiateSphere::sphere
	GameObject_t2790157070 * ___sphere_3;
	// System.Int32 instantiateSphere::ballCount
	int32_t ___ballCount_4;

public:
	inline static int32_t get_offset_of_holder_2() { return static_cast<int32_t>(offsetof(instantiateSphere_t4212472727, ___holder_2)); }
	inline GameObject_t2790157070 * get_holder_2() const { return ___holder_2; }
	inline GameObject_t2790157070 ** get_address_of_holder_2() { return &___holder_2; }
	inline void set_holder_2(GameObject_t2790157070 * value)
	{
		___holder_2 = value;
		Il2CppCodeGenWriteBarrier((&___holder_2), value);
	}

	inline static int32_t get_offset_of_sphere_3() { return static_cast<int32_t>(offsetof(instantiateSphere_t4212472727, ___sphere_3)); }
	inline GameObject_t2790157070 * get_sphere_3() const { return ___sphere_3; }
	inline GameObject_t2790157070 ** get_address_of_sphere_3() { return &___sphere_3; }
	inline void set_sphere_3(GameObject_t2790157070 * value)
	{
		___sphere_3 = value;
		Il2CppCodeGenWriteBarrier((&___sphere_3), value);
	}

	inline static int32_t get_offset_of_ballCount_4() { return static_cast<int32_t>(offsetof(instantiateSphere_t4212472727, ___ballCount_4)); }
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
#endif // INSTANTIATESPHERE_T4212472727_H
#ifndef LOADDELAYINTRO2_T1955910028_H
#define LOADDELAYINTRO2_T1955910028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// loadDelayIntro2
struct  loadDelayIntro2_t1955910028  : public MonoBehaviour_t4005906508
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADDELAYINTRO2_T1955910028_H
#ifndef FADER_T2683853559_H
#define FADER_T2683853559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fader
struct  Fader_t2683853559  : public MonoBehaviour_t4005906508
{
public:
	// System.Boolean Fader::start
	bool ___start_2;
	// System.Single Fader::fadeDamp
	float ___fadeDamp_3;
	// System.String Fader::fadeScene
	String_t* ___fadeScene_4;
	// System.Single Fader::alpha
	float ___alpha_5;
	// UnityEngine.Color Fader::fadeColor
	Color_t1559040956  ___fadeColor_6;
	// System.Boolean Fader::isFadeIn
	bool ___isFadeIn_7;

public:
	inline static int32_t get_offset_of_start_2() { return static_cast<int32_t>(offsetof(Fader_t2683853559, ___start_2)); }
	inline bool get_start_2() const { return ___start_2; }
	inline bool* get_address_of_start_2() { return &___start_2; }
	inline void set_start_2(bool value)
	{
		___start_2 = value;
	}

	inline static int32_t get_offset_of_fadeDamp_3() { return static_cast<int32_t>(offsetof(Fader_t2683853559, ___fadeDamp_3)); }
	inline float get_fadeDamp_3() const { return ___fadeDamp_3; }
	inline float* get_address_of_fadeDamp_3() { return &___fadeDamp_3; }
	inline void set_fadeDamp_3(float value)
	{
		___fadeDamp_3 = value;
	}

	inline static int32_t get_offset_of_fadeScene_4() { return static_cast<int32_t>(offsetof(Fader_t2683853559, ___fadeScene_4)); }
	inline String_t* get_fadeScene_4() const { return ___fadeScene_4; }
	inline String_t** get_address_of_fadeScene_4() { return &___fadeScene_4; }
	inline void set_fadeScene_4(String_t* value)
	{
		___fadeScene_4 = value;
		Il2CppCodeGenWriteBarrier((&___fadeScene_4), value);
	}

	inline static int32_t get_offset_of_alpha_5() { return static_cast<int32_t>(offsetof(Fader_t2683853559, ___alpha_5)); }
	inline float get_alpha_5() const { return ___alpha_5; }
	inline float* get_address_of_alpha_5() { return &___alpha_5; }
	inline void set_alpha_5(float value)
	{
		___alpha_5 = value;
	}

	inline static int32_t get_offset_of_fadeColor_6() { return static_cast<int32_t>(offsetof(Fader_t2683853559, ___fadeColor_6)); }
	inline Color_t1559040956  get_fadeColor_6() const { return ___fadeColor_6; }
	inline Color_t1559040956 * get_address_of_fadeColor_6() { return &___fadeColor_6; }
	inline void set_fadeColor_6(Color_t1559040956  value)
	{
		___fadeColor_6 = value;
	}

	inline static int32_t get_offset_of_isFadeIn_7() { return static_cast<int32_t>(offsetof(Fader_t2683853559, ___isFadeIn_7)); }
	inline bool get_isFadeIn_7() const { return ___isFadeIn_7; }
	inline bool* get_address_of_isFadeIn_7() { return &___isFadeIn_7; }
	inline void set_isFadeIn_7(bool value)
	{
		___isFadeIn_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FADER_T2683853559_H
#ifndef SECONDMODULE_T3625317484_H
#define SECONDMODULE_T3625317484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// secondModule
struct  secondModule_t3625317484  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.GameObject secondModule::firstModuleGroup
	GameObject_t2790157070 * ___firstModuleGroup_2;
	// UnityEngine.GameObject secondModule::lampModel
	GameObject_t2790157070 * ___lampModel_3;
	// UnityEngine.GameObject secondModule::lampStand
	GameObject_t2790157070 * ___lampStand_4;
	// UnityEngine.GameObject secondModule::lampCFL
	GameObject_t2790157070 * ___lampCFL_5;
	// UnityEngine.GameObject secondModule::lampShade
	GameObject_t2790157070 * ___lampShade_6;
	// UnityEngine.GameObject secondModule::secondInstructions
	GameObject_t2790157070 * ___secondInstructions_7;
	// UnityEngine.GameObject secondModule::toSecondMod
	GameObject_t2790157070 * ___toSecondMod_8;
	// UnityEngine.GameObject secondModule::secondModuleGroup
	GameObject_t2790157070 * ___secondModuleGroup_9;
	// UnityEngine.GameObject secondModule::toThirdMod
	GameObject_t2790157070 * ___toThirdMod_10;

public:
	inline static int32_t get_offset_of_firstModuleGroup_2() { return static_cast<int32_t>(offsetof(secondModule_t3625317484, ___firstModuleGroup_2)); }
	inline GameObject_t2790157070 * get_firstModuleGroup_2() const { return ___firstModuleGroup_2; }
	inline GameObject_t2790157070 ** get_address_of_firstModuleGroup_2() { return &___firstModuleGroup_2; }
	inline void set_firstModuleGroup_2(GameObject_t2790157070 * value)
	{
		___firstModuleGroup_2 = value;
		Il2CppCodeGenWriteBarrier((&___firstModuleGroup_2), value);
	}

	inline static int32_t get_offset_of_lampModel_3() { return static_cast<int32_t>(offsetof(secondModule_t3625317484, ___lampModel_3)); }
	inline GameObject_t2790157070 * get_lampModel_3() const { return ___lampModel_3; }
	inline GameObject_t2790157070 ** get_address_of_lampModel_3() { return &___lampModel_3; }
	inline void set_lampModel_3(GameObject_t2790157070 * value)
	{
		___lampModel_3 = value;
		Il2CppCodeGenWriteBarrier((&___lampModel_3), value);
	}

	inline static int32_t get_offset_of_lampStand_4() { return static_cast<int32_t>(offsetof(secondModule_t3625317484, ___lampStand_4)); }
	inline GameObject_t2790157070 * get_lampStand_4() const { return ___lampStand_4; }
	inline GameObject_t2790157070 ** get_address_of_lampStand_4() { return &___lampStand_4; }
	inline void set_lampStand_4(GameObject_t2790157070 * value)
	{
		___lampStand_4 = value;
		Il2CppCodeGenWriteBarrier((&___lampStand_4), value);
	}

	inline static int32_t get_offset_of_lampCFL_5() { return static_cast<int32_t>(offsetof(secondModule_t3625317484, ___lampCFL_5)); }
	inline GameObject_t2790157070 * get_lampCFL_5() const { return ___lampCFL_5; }
	inline GameObject_t2790157070 ** get_address_of_lampCFL_5() { return &___lampCFL_5; }
	inline void set_lampCFL_5(GameObject_t2790157070 * value)
	{
		___lampCFL_5 = value;
		Il2CppCodeGenWriteBarrier((&___lampCFL_5), value);
	}

	inline static int32_t get_offset_of_lampShade_6() { return static_cast<int32_t>(offsetof(secondModule_t3625317484, ___lampShade_6)); }
	inline GameObject_t2790157070 * get_lampShade_6() const { return ___lampShade_6; }
	inline GameObject_t2790157070 ** get_address_of_lampShade_6() { return &___lampShade_6; }
	inline void set_lampShade_6(GameObject_t2790157070 * value)
	{
		___lampShade_6 = value;
		Il2CppCodeGenWriteBarrier((&___lampShade_6), value);
	}

	inline static int32_t get_offset_of_secondInstructions_7() { return static_cast<int32_t>(offsetof(secondModule_t3625317484, ___secondInstructions_7)); }
	inline GameObject_t2790157070 * get_secondInstructions_7() const { return ___secondInstructions_7; }
	inline GameObject_t2790157070 ** get_address_of_secondInstructions_7() { return &___secondInstructions_7; }
	inline void set_secondInstructions_7(GameObject_t2790157070 * value)
	{
		___secondInstructions_7 = value;
		Il2CppCodeGenWriteBarrier((&___secondInstructions_7), value);
	}

	inline static int32_t get_offset_of_toSecondMod_8() { return static_cast<int32_t>(offsetof(secondModule_t3625317484, ___toSecondMod_8)); }
	inline GameObject_t2790157070 * get_toSecondMod_8() const { return ___toSecondMod_8; }
	inline GameObject_t2790157070 ** get_address_of_toSecondMod_8() { return &___toSecondMod_8; }
	inline void set_toSecondMod_8(GameObject_t2790157070 * value)
	{
		___toSecondMod_8 = value;
		Il2CppCodeGenWriteBarrier((&___toSecondMod_8), value);
	}

	inline static int32_t get_offset_of_secondModuleGroup_9() { return static_cast<int32_t>(offsetof(secondModule_t3625317484, ___secondModuleGroup_9)); }
	inline GameObject_t2790157070 * get_secondModuleGroup_9() const { return ___secondModuleGroup_9; }
	inline GameObject_t2790157070 ** get_address_of_secondModuleGroup_9() { return &___secondModuleGroup_9; }
	inline void set_secondModuleGroup_9(GameObject_t2790157070 * value)
	{
		___secondModuleGroup_9 = value;
		Il2CppCodeGenWriteBarrier((&___secondModuleGroup_9), value);
	}

	inline static int32_t get_offset_of_toThirdMod_10() { return static_cast<int32_t>(offsetof(secondModule_t3625317484, ___toThirdMod_10)); }
	inline GameObject_t2790157070 * get_toThirdMod_10() const { return ___toThirdMod_10; }
	inline GameObject_t2790157070 ** get_address_of_toThirdMod_10() { return &___toThirdMod_10; }
	inline void set_toThirdMod_10(GameObject_t2790157070 * value)
	{
		___toThirdMod_10 = value;
		Il2CppCodeGenWriteBarrier((&___toThirdMod_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECONDMODULE_T3625317484_H
#ifndef SECONDBUILDING_DONTFORGET_T2453178047_H
#define SECONDBUILDING_DONTFORGET_T2453178047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// secondBuilding_dontForget
struct  secondBuilding_dontForget_t2453178047  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.GameObject secondBuilding_dontForget::BuildingFactBot_Trans
	GameObject_t2790157070 * ___BuildingFactBot_Trans_2;
	// UnityEngine.GameObject secondBuilding_dontForget::BuildingFactBot
	GameObject_t2790157070 * ___BuildingFactBot_3;
	// UnityEngine.GameObject secondBuilding_dontForget::dontForget
	GameObject_t2790157070 * ___dontForget_4;
	// UnityEngine.GameObject secondBuilding_dontForget::dontForgetTrans
	GameObject_t2790157070 * ___dontForgetTrans_5;

public:
	inline static int32_t get_offset_of_BuildingFactBot_Trans_2() { return static_cast<int32_t>(offsetof(secondBuilding_dontForget_t2453178047, ___BuildingFactBot_Trans_2)); }
	inline GameObject_t2790157070 * get_BuildingFactBot_Trans_2() const { return ___BuildingFactBot_Trans_2; }
	inline GameObject_t2790157070 ** get_address_of_BuildingFactBot_Trans_2() { return &___BuildingFactBot_Trans_2; }
	inline void set_BuildingFactBot_Trans_2(GameObject_t2790157070 * value)
	{
		___BuildingFactBot_Trans_2 = value;
		Il2CppCodeGenWriteBarrier((&___BuildingFactBot_Trans_2), value);
	}

	inline static int32_t get_offset_of_BuildingFactBot_3() { return static_cast<int32_t>(offsetof(secondBuilding_dontForget_t2453178047, ___BuildingFactBot_3)); }
	inline GameObject_t2790157070 * get_BuildingFactBot_3() const { return ___BuildingFactBot_3; }
	inline GameObject_t2790157070 ** get_address_of_BuildingFactBot_3() { return &___BuildingFactBot_3; }
	inline void set_BuildingFactBot_3(GameObject_t2790157070 * value)
	{
		___BuildingFactBot_3 = value;
		Il2CppCodeGenWriteBarrier((&___BuildingFactBot_3), value);
	}

	inline static int32_t get_offset_of_dontForget_4() { return static_cast<int32_t>(offsetof(secondBuilding_dontForget_t2453178047, ___dontForget_4)); }
	inline GameObject_t2790157070 * get_dontForget_4() const { return ___dontForget_4; }
	inline GameObject_t2790157070 ** get_address_of_dontForget_4() { return &___dontForget_4; }
	inline void set_dontForget_4(GameObject_t2790157070 * value)
	{
		___dontForget_4 = value;
		Il2CppCodeGenWriteBarrier((&___dontForget_4), value);
	}

	inline static int32_t get_offset_of_dontForgetTrans_5() { return static_cast<int32_t>(offsetof(secondBuilding_dontForget_t2453178047, ___dontForgetTrans_5)); }
	inline GameObject_t2790157070 * get_dontForgetTrans_5() const { return ___dontForgetTrans_5; }
	inline GameObject_t2790157070 ** get_address_of_dontForgetTrans_5() { return &___dontForgetTrans_5; }
	inline void set_dontForgetTrans_5(GameObject_t2790157070 * value)
	{
		___dontForgetTrans_5 = value;
		Il2CppCodeGenWriteBarrier((&___dontForgetTrans_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECONDBUILDING_DONTFORGET_T2453178047_H
#ifndef TRASHARHITTEST_T3775773455_H
#define TRASHARHITTEST_T3775773455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.TrashARHitTest
struct  TrashARHitTest_t3775773455  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.Transform UnityEngine.XR.iOS.TrashARHitTest::m_HitTransform
	Transform_t3297798951 * ___m_HitTransform_2;
	// System.Single UnityEngine.XR.iOS.TrashARHitTest::maxRayDistance
	float ___maxRayDistance_3;
	// UnityEngine.LayerMask UnityEngine.XR.iOS.TrashARHitTest::collisionLayer
	LayerMask_t3213958634  ___collisionLayer_4;
	// UnityEngine.GameObject UnityEngine.XR.iOS.TrashARHitTest::bigDickHit
	GameObject_t2790157070 * ___bigDickHit_5;

public:
	inline static int32_t get_offset_of_m_HitTransform_2() { return static_cast<int32_t>(offsetof(TrashARHitTest_t3775773455, ___m_HitTransform_2)); }
	inline Transform_t3297798951 * get_m_HitTransform_2() const { return ___m_HitTransform_2; }
	inline Transform_t3297798951 ** get_address_of_m_HitTransform_2() { return &___m_HitTransform_2; }
	inline void set_m_HitTransform_2(Transform_t3297798951 * value)
	{
		___m_HitTransform_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_HitTransform_2), value);
	}

	inline static int32_t get_offset_of_maxRayDistance_3() { return static_cast<int32_t>(offsetof(TrashARHitTest_t3775773455, ___maxRayDistance_3)); }
	inline float get_maxRayDistance_3() const { return ___maxRayDistance_3; }
	inline float* get_address_of_maxRayDistance_3() { return &___maxRayDistance_3; }
	inline void set_maxRayDistance_3(float value)
	{
		___maxRayDistance_3 = value;
	}

	inline static int32_t get_offset_of_collisionLayer_4() { return static_cast<int32_t>(offsetof(TrashARHitTest_t3775773455, ___collisionLayer_4)); }
	inline LayerMask_t3213958634  get_collisionLayer_4() const { return ___collisionLayer_4; }
	inline LayerMask_t3213958634 * get_address_of_collisionLayer_4() { return &___collisionLayer_4; }
	inline void set_collisionLayer_4(LayerMask_t3213958634  value)
	{
		___collisionLayer_4 = value;
	}

	inline static int32_t get_offset_of_bigDickHit_5() { return static_cast<int32_t>(offsetof(TrashARHitTest_t3775773455, ___bigDickHit_5)); }
	inline GameObject_t2790157070 * get_bigDickHit_5() const { return ___bigDickHit_5; }
	inline GameObject_t2790157070 ** get_address_of_bigDickHit_5() { return &___bigDickHit_5; }
	inline void set_bigDickHit_5(GameObject_t2790157070 * value)
	{
		___bigDickHit_5 = value;
		Il2CppCodeGenWriteBarrier((&___bigDickHit_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRASHARHITTEST_T3775773455_H
#ifndef TOGGLETRASH_T2719737398_H
#define TOGGLETRASH_T2719737398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// toggleTrash
struct  toggleTrash_t2719737398  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.GameObject toggleTrash::lamp
	GameObject_t2790157070 * ___lamp_2;
	// UnityEngine.GameObject toggleTrash::trash
	GameObject_t2790157070 * ___trash_3;

public:
	inline static int32_t get_offset_of_lamp_2() { return static_cast<int32_t>(offsetof(toggleTrash_t2719737398, ___lamp_2)); }
	inline GameObject_t2790157070 * get_lamp_2() const { return ___lamp_2; }
	inline GameObject_t2790157070 ** get_address_of_lamp_2() { return &___lamp_2; }
	inline void set_lamp_2(GameObject_t2790157070 * value)
	{
		___lamp_2 = value;
		Il2CppCodeGenWriteBarrier((&___lamp_2), value);
	}

	inline static int32_t get_offset_of_trash_3() { return static_cast<int32_t>(offsetof(toggleTrash_t2719737398, ___trash_3)); }
	inline GameObject_t2790157070 * get_trash_3() const { return ___trash_3; }
	inline GameObject_t2790157070 ** get_address_of_trash_3() { return &___trash_3; }
	inline void set_trash_3(GameObject_t2790157070 * value)
	{
		___trash_3 = value;
		Il2CppCodeGenWriteBarrier((&___trash_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOGGLETRASH_T2719737398_H
#ifndef THIRDMODULE_T2518638199_H
#define THIRDMODULE_T2518638199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// thirdModule
struct  thirdModule_t2518638199  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.GameObject thirdModule::secondModuleGroup
	GameObject_t2790157070 * ___secondModuleGroup_2;
	// UnityEngine.GameObject thirdModule::toThirdMod
	GameObject_t2790157070 * ___toThirdMod_3;
	// UnityEngine.GameObject thirdModule::thirdModuleGroup
	GameObject_t2790157070 * ___thirdModuleGroup_4;
	// UnityEngine.GameObject thirdModule::lampModel
	GameObject_t2790157070 * ___lampModel_5;
	// UnityEngine.GameObject thirdModule::lampStand
	GameObject_t2790157070 * ___lampStand_6;
	// UnityEngine.GameObject thirdModule::lampCFL
	GameObject_t2790157070 * ___lampCFL_7;

public:
	inline static int32_t get_offset_of_secondModuleGroup_2() { return static_cast<int32_t>(offsetof(thirdModule_t2518638199, ___secondModuleGroup_2)); }
	inline GameObject_t2790157070 * get_secondModuleGroup_2() const { return ___secondModuleGroup_2; }
	inline GameObject_t2790157070 ** get_address_of_secondModuleGroup_2() { return &___secondModuleGroup_2; }
	inline void set_secondModuleGroup_2(GameObject_t2790157070 * value)
	{
		___secondModuleGroup_2 = value;
		Il2CppCodeGenWriteBarrier((&___secondModuleGroup_2), value);
	}

	inline static int32_t get_offset_of_toThirdMod_3() { return static_cast<int32_t>(offsetof(thirdModule_t2518638199, ___toThirdMod_3)); }
	inline GameObject_t2790157070 * get_toThirdMod_3() const { return ___toThirdMod_3; }
	inline GameObject_t2790157070 ** get_address_of_toThirdMod_3() { return &___toThirdMod_3; }
	inline void set_toThirdMod_3(GameObject_t2790157070 * value)
	{
		___toThirdMod_3 = value;
		Il2CppCodeGenWriteBarrier((&___toThirdMod_3), value);
	}

	inline static int32_t get_offset_of_thirdModuleGroup_4() { return static_cast<int32_t>(offsetof(thirdModule_t2518638199, ___thirdModuleGroup_4)); }
	inline GameObject_t2790157070 * get_thirdModuleGroup_4() const { return ___thirdModuleGroup_4; }
	inline GameObject_t2790157070 ** get_address_of_thirdModuleGroup_4() { return &___thirdModuleGroup_4; }
	inline void set_thirdModuleGroup_4(GameObject_t2790157070 * value)
	{
		___thirdModuleGroup_4 = value;
		Il2CppCodeGenWriteBarrier((&___thirdModuleGroup_4), value);
	}

	inline static int32_t get_offset_of_lampModel_5() { return static_cast<int32_t>(offsetof(thirdModule_t2518638199, ___lampModel_5)); }
	inline GameObject_t2790157070 * get_lampModel_5() const { return ___lampModel_5; }
	inline GameObject_t2790157070 ** get_address_of_lampModel_5() { return &___lampModel_5; }
	inline void set_lampModel_5(GameObject_t2790157070 * value)
	{
		___lampModel_5 = value;
		Il2CppCodeGenWriteBarrier((&___lampModel_5), value);
	}

	inline static int32_t get_offset_of_lampStand_6() { return static_cast<int32_t>(offsetof(thirdModule_t2518638199, ___lampStand_6)); }
	inline GameObject_t2790157070 * get_lampStand_6() const { return ___lampStand_6; }
	inline GameObject_t2790157070 ** get_address_of_lampStand_6() { return &___lampStand_6; }
	inline void set_lampStand_6(GameObject_t2790157070 * value)
	{
		___lampStand_6 = value;
		Il2CppCodeGenWriteBarrier((&___lampStand_6), value);
	}

	inline static int32_t get_offset_of_lampCFL_7() { return static_cast<int32_t>(offsetof(thirdModule_t2518638199, ___lampCFL_7)); }
	inline GameObject_t2790157070 * get_lampCFL_7() const { return ___lampCFL_7; }
	inline GameObject_t2790157070 ** get_address_of_lampCFL_7() { return &___lampCFL_7; }
	inline void set_lampCFL_7(GameObject_t2790157070 * value)
	{
		___lampCFL_7 = value;
		Il2CppCodeGenWriteBarrier((&___lampCFL_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THIRDMODULE_T2518638199_H
#ifndef TAPAWAY_T1851080342_H
#define TAPAWAY_T1851080342_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// tapAway
struct  tapAway_t1851080342  : public MonoBehaviour_t4005906508
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAPAWAY_T1851080342_H
#ifndef SCREEN2BTNS_T3337603163_H
#define SCREEN2BTNS_T3337603163_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// screen2btns
struct  screen2btns_t3337603163  : public MonoBehaviour_t4005906508
{
public:
	// UnityEngine.GameObject screen2btns::desc1
	GameObject_t2790157070 * ___desc1_2;
	// UnityEngine.GameObject screen2btns::desc2
	GameObject_t2790157070 * ___desc2_3;
	// UnityEngine.GameObject screen2btns::pointer
	GameObject_t2790157070 * ___pointer_4;
	// UnityEngine.GameObject screen2btns::visualize
	GameObject_t2790157070 * ___visualize_5;

public:
	inline static int32_t get_offset_of_desc1_2() { return static_cast<int32_t>(offsetof(screen2btns_t3337603163, ___desc1_2)); }
	inline GameObject_t2790157070 * get_desc1_2() const { return ___desc1_2; }
	inline GameObject_t2790157070 ** get_address_of_desc1_2() { return &___desc1_2; }
	inline void set_desc1_2(GameObject_t2790157070 * value)
	{
		___desc1_2 = value;
		Il2CppCodeGenWriteBarrier((&___desc1_2), value);
	}

	inline static int32_t get_offset_of_desc2_3() { return static_cast<int32_t>(offsetof(screen2btns_t3337603163, ___desc2_3)); }
	inline GameObject_t2790157070 * get_desc2_3() const { return ___desc2_3; }
	inline GameObject_t2790157070 ** get_address_of_desc2_3() { return &___desc2_3; }
	inline void set_desc2_3(GameObject_t2790157070 * value)
	{
		___desc2_3 = value;
		Il2CppCodeGenWriteBarrier((&___desc2_3), value);
	}

	inline static int32_t get_offset_of_pointer_4() { return static_cast<int32_t>(offsetof(screen2btns_t3337603163, ___pointer_4)); }
	inline GameObject_t2790157070 * get_pointer_4() const { return ___pointer_4; }
	inline GameObject_t2790157070 ** get_address_of_pointer_4() { return &___pointer_4; }
	inline void set_pointer_4(GameObject_t2790157070 * value)
	{
		___pointer_4 = value;
		Il2CppCodeGenWriteBarrier((&___pointer_4), value);
	}

	inline static int32_t get_offset_of_visualize_5() { return static_cast<int32_t>(offsetof(screen2btns_t3337603163, ___visualize_5)); }
	inline GameObject_t2790157070 * get_visualize_5() const { return ___visualize_5; }
	inline GameObject_t2790157070 ** get_address_of_visualize_5() { return &___visualize_5; }
	inline void set_visualize_5(GameObject_t2790157070 * value)
	{
		___visualize_5 = value;
		Il2CppCodeGenWriteBarrier((&___visualize_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREEN2BTNS_T3337603163_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3400 = { sizeof (HTTPRequest_t462231443), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3400[5] = 
{
	HTTPRequest_t462231443::get_offset_of__request_0(),
	HTTPRequest_t462231443::get_offset_of__timeout_1(),
	HTTPRequest_t462231443::get_offset_of__callback_2(),
	HTTPRequest_t462231443::get_offset_of__wasCancelled_3(),
	HTTPRequest_t462231443::get_offset_of_U3CIsCompletedU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3401 = { sizeof (U3CDoRequestU3Ec__Iterator0_t3605170012), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3401[7] = 
{
	U3CDoRequestU3Ec__Iterator0_t3605170012::get_offset_of_U3CtimeoutU3E__0_0(),
	U3CDoRequestU3Ec__Iterator0_t3605170012::get_offset_of_U3CdidTimeoutU3E__0_1(),
	U3CDoRequestU3Ec__Iterator0_t3605170012::get_offset_of_U3CresponseU3E__1_2(),
	U3CDoRequestU3Ec__Iterator0_t3605170012::get_offset_of_U24this_3(),
	U3CDoRequestU3Ec__Iterator0_t3605170012::get_offset_of_U24current_4(),
	U3CDoRequestU3Ec__Iterator0_t3605170012::get_offset_of_U24disposing_5(),
	U3CDoRequestU3Ec__Iterator0_t3605170012::get_offset_of_U24PC_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3402 = { sizeof (NodeEditorElementAttribute_t1631509551), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3402[1] = 
{
	NodeEditorElementAttribute_t1631509551::get_offset_of_Name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3403 = { sizeof (OpenUrlOnButtonClick_t3988605793), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3403[1] = 
{
	OpenUrlOnButtonClick_t3988605793::get_offset_of__url_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3404 = { sizeof (Runnable_t1303446502), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3404[2] = 
{
	Runnable_t1303446502::get_offset_of_m_Routines_2(),
	Runnable_t1303446502::get_offset_of_m_NextRoutineId_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3405 = { sizeof (Routine_t3189200842), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3405[4] = 
{
	Routine_t3189200842::get_offset_of_U3CIDU3Ek__BackingField_0(),
	Routine_t3189200842::get_offset_of_U3CStopU3Ek__BackingField_1(),
	Routine_t3189200842::get_offset_of_m_bMoveNext_2(),
	Routine_t3189200842::get_offset_of_m_Enumerator_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3406 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3406[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3407 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3407[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3408 = { sizeof (StyleSearchAttribute_t686296578), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3409 = { sizeof (TelemetryConfigurationButton_t3565569840), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3409[1] = 
{
	TelemetryConfigurationButton_t3565569840::get_offset_of__booleanValue_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3410 = { sizeof (VectorExtensions_t2107134398), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3411 = { sizeof (OnClickExample_t2149891408), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3411[1] = 
{
	OnClickExample_t2149891408::get_offset_of_yourButton_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3412 = { sizeof (Co2ARHitTest_t2479271917), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3412[10] = 
{
	Co2ARHitTest_t2479271917::get_offset_of_m_HitTransform_2(),
	Co2ARHitTest_t2479271917::get_offset_of_maxRayDistance_3(),
	Co2ARHitTest_t2479271917::get_offset_of_collisionLayer_4(),
	Co2ARHitTest_t2479271917::get_offset_of_BlueFocusSquare_5(),
	Co2ARHitTest_t2479271917::get_offset_of_FocusedSquare_6(),
	Co2ARHitTest_t2479271917::get_offset_of_WholeLamp_7(),
	Co2ARHitTest_t2479271917::get_offset_of_TapToText_8(),
	Co2ARHitTest_t2479271917::get_offset_of_lampNewCollider_9(),
	Co2ARHitTest_t2479271917::get_offset_of_lampShade_10(),
	Co2ARHitTest_t2479271917::get_offset_of_m_Collider_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3413 = { sizeof (badCollision_t1007815740), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3413[1] = 
{
	badCollision_t1007815740::get_offset_of_hasCollide_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3414 = { sizeof (U3CMyCoroutineU3Ec__Iterator0_t946539094), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3414[4] = 
{
	U3CMyCoroutineU3Ec__Iterator0_t946539094::get_offset_of_U24this_0(),
	U3CMyCoroutineU3Ec__Iterator0_t946539094::get_offset_of_U24current_1(),
	U3CMyCoroutineU3Ec__Iterator0_t946539094::get_offset_of_U24disposing_2(),
	U3CMyCoroutineU3Ec__Iterator0_t946539094::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3415 = { sizeof (ballDrop_t731330100), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3415[1] = 
{
	ballDrop_t731330100::get_offset_of_sphereContainer_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3416 = { sizeof (CameraScript_t929757159), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3416[8] = 
{
	CameraScript_t929757159::get_offset_of_lookAt_2(),
	CameraScript_t929757159::get_offset_of_camTransform_3(),
	CameraScript_t929757159::get_offset_of_cam_4(),
	CameraScript_t929757159::get_offset_of_distance_5(),
	CameraScript_t929757159::get_offset_of_currentX_6(),
	CameraScript_t929757159::get_offset_of_currentY_7(),
	CameraScript_t929757159::get_offset_of_sensivityX_8(),
	CameraScript_t929757159::get_offset_of_sensivityY_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3417 = { sizeof (changeTrashColor_t2877154574), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3418 = { sizeof (collideFreeze_t287383390), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3418[1] = 
{
	collideFreeze_t287383390::get_offset_of_rb_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3419 = { sizeof (collideScript_t2225690301), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3419[1] = 
{
	collideScript_t2225690301::get_offset_of_showCube_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3420 = { sizeof (createBalls_t1412997901), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3420[1] = 
{
	createBalls_t1412997901::get_offset_of_prefab_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3421 = { sizeof (detectCollision_t1611557039), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3421[3] = 
{
	detectCollision_t1611557039::get_offset_of_boxDialogue_2(),
	detectCollision_t1611557039::get_offset_of_sodaDialogue_3(),
	detectCollision_t1611557039::get_offset_of_bottleDialogue_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3422 = { sizeof (EnergyHit_t2262725360), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3422[8] = 
{
	EnergyHit_t2262725360::get_offset_of_coal_2(),
	EnergyHit_t2262725360::get_offset_of_solar_3(),
	EnergyHit_t2262725360::get_offset_of_chooseEnergy_4(),
	EnergyHit_t2262725360::get_offset_of_energyFact_5(),
	EnergyHit_t2262725360::get_offset_of_pointer_6(),
	EnergyHit_t2262725360::get_offset_of_energyFact2_7(),
	EnergyHit_t2262725360::get_offset_of_seeImpact_8(),
	EnergyHit_t2262725360::get_offset_of_smokeHigh_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3423 = { sizeof (fact1_script_t1202835441), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3423[1] = 
{
	fact1_script_t1202835441::get_offset_of_fact1_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3424 = { sizeof (FactHit1_t579436276), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3424[2] = 
{
	FactHit1_t579436276::get_offset_of_fact1OrigPos_2(),
	FactHit1_t579436276::get_offset_of_fact1NewPos_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3425 = { sizeof (FactHit2_t1251325783), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3425[8] = 
{
	FactHit2_t1251325783::get_offset_of_fact2OrigPos_2(),
	FactHit2_t1251325783::get_offset_of_fact2NewPos_3(),
	FactHit2_t1251325783::get_offset_of_spotlightObject_4(),
	FactHit2_t1251325783::get_offset_of_spotlightObject1_5(),
	FactHit2_t1251325783::get_offset_of_TapToText_6(),
	FactHit2_t1251325783::get_offset_of_SmokeParent_7(),
	FactHit2_t1251325783::get_offset_of_SmokeParentLite_8(),
	FactHit2_t1251325783::get_offset_of_buildingsText_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3426 = { sizeof (FactHit3_t3642583700), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3426[2] = 
{
	FactHit3_t3642583700::get_offset_of_fact3OrigPos_2(),
	FactHit3_t3642583700::get_offset_of_fact3NewPos_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3427 = { sizeof (FactHit4_t240439677), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3427[2] = 
{
	FactHit4_t240439677::get_offset_of_fact4OrigPos_2(),
	FactHit4_t240439677::get_offset_of_fact4NewPos_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3428 = { sizeof (factTrigger_t111081606), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3428[1] = 
{
	factTrigger_t111081606::get_offset_of_fact2_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3429 = { sizeof (FadeAwayScript_t3107141636), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3429[2] = 
{
	FadeAwayScript_t3107141636::get_offset_of_duration_2(),
	FadeAwayScript_t3107141636::get_offset_of_TapToText_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3430 = { sizeof (fallController_t62648720), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3430[1] = 
{
	fallController_t62648720::get_offset_of_ballGroup_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3431 = { sizeof (firstModule_t3741243721), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3431[14] = 
{
	firstModule_t3741243721::get_offset_of_replaceBulb_2(),
	firstModule_t3741243721::get_offset_of_badBulb_3(),
	firstModule_t3741243721::get_offset_of_cflTrans_4(),
	firstModule_t3741243721::get_offset_of_cflBulb_5(),
	firstModule_t3741243721::get_offset_of_lampShade_6(),
	firstModule_t3741243721::get_offset_of_lampShadeMat_7(),
	firstModule_t3741243721::get_offset_of_buildingFactTop_8(),
	firstModule_t3741243721::get_offset_of_pointer_9(),
	firstModule_t3741243721::get_offset_of_buildingFactBot_10(),
	firstModule_t3741243721::get_offset_of_dontForget_11(),
	firstModule_t3741243721::get_offset_of_turnOff_12(),
	firstModule_t3741243721::get_offset_of_lampSpotlight_13(),
	firstModule_t3741243721::get_offset_of_smokeHigh_14(),
	firstModule_t3741243721::get_offset_of_toSecondMod_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3432 = { sizeof (fixedpos_t3698351978), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3432[2] = 
{
	fixedpos_t3698351978::get_offset_of_cfl_2(),
	fixedpos_t3698351978::get_offset_of_offset_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3433 = { sizeof (flicker_t55228864), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3433[5] = 
{
	flicker_t55228864::get_offset_of_badLight_2(),
	flicker_t55228864::get_offset_of_timeOn_3(),
	flicker_t55228864::get_offset_of_timeOff_4(),
	flicker_t55228864::get_offset_of_changeTime_5(),
	flicker_t55228864::get_offset_of_lit_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3434 = { sizeof (flickeringLight_t1093893472), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3435 = { sizeof (HitByRay_t2158920764), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3436 = { sizeof (HitByRaycast_t3033053920), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3437 = { sizeof (IfAnchorAddedScript_t1665314291), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3437[6] = 
{
	IfAnchorAddedScript_t1665314291::get_offset_of_unityARAnchorManager_2(),
	IfAnchorAddedScript_t1665314291::get_offset_of_FindFlatSurfaceIcon_3(),
	IfAnchorAddedScript_t1665314291::get_offset_of_FindFlatSurfaceText_4(),
	IfAnchorAddedScript_t1665314291::get_offset_of_TapToPlaceText_5(),
	IfAnchorAddedScript_t1665314291::get_offset_of_ObjectFocusSquare_6(),
	IfAnchorAddedScript_t1665314291::get_offset_of_lampShade_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3438 = { sizeof (ignoreCollision_t3624962691), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3438[5] = 
{
	ignoreCollision_t3624962691::get_offset_of_goodTrash_2(),
	ignoreCollision_t3624962691::get_offset_of_goodTrash2_3(),
	ignoreCollision_t3624962691::get_offset_of_goodTrash3_4(),
	ignoreCollision_t3624962691::get_offset_of_trashDialogue_5(),
	ignoreCollision_t3624962691::get_offset_of_foamDialogue_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3439 = { sizeof (instantiateSphere_t4212472727), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3439[3] = 
{
	instantiateSphere_t4212472727::get_offset_of_holder_2(),
	instantiateSphere_t4212472727::get_offset_of_sphere_3(),
	instantiateSphere_t4212472727::get_offset_of_ballCount_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3440 = { sizeof (loadDelayIntro2_t1955910028), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3441 = { sizeof (U3CWaitU3Ec__Iterator0_t1999146689), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3441[3] = 
{
	U3CWaitU3Ec__Iterator0_t1999146689::get_offset_of_U24current_0(),
	U3CWaitU3Ec__Iterator0_t1999146689::get_offset_of_U24disposing_1(),
	U3CWaitU3Ec__Iterator0_t1999146689::get_offset_of_U24PC_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3442 = { sizeof (lampBtns_t1971243704), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3442[9] = 
{
	lampBtns_t1971243704::get_offset_of_BuildingFactTop_2(),
	lampBtns_t1971243704::get_offset_of_BuildingFactTop_Trans_3(),
	lampBtns_t1971243704::get_offset_of_BuildingFactBot_Trans_4(),
	lampBtns_t1971243704::get_offset_of_BuildingFactBot_5(),
	lampBtns_t1971243704::get_offset_of_dontForget_6(),
	lampBtns_t1971243704::get_offset_of_dontForgetTrans_7(),
	lampBtns_t1971243704::get_offset_of_turnOff_8(),
	lampBtns_t1971243704::get_offset_of_turnOffTrans_9(),
	lampBtns_t1971243704::get_offset_of_pointer_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3443 = { sizeof (LampHit_t325052164), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3443[16] = 
{
	LampHit_t325052164::get_offset_of_lampSpotlight_2(),
	LampHit_t325052164::get_offset_of_lampSpotlight2_3(),
	LampHit_t325052164::get_offset_of_lampShade_4(),
	LampHit_t325052164::get_offset_of_BuildingFactTop_5(),
	LampHit_t325052164::get_offset_of_BuildingFactBot_6(),
	LampHit_t325052164::get_offset_of_smokeHigh_7(),
	LampHit_t325052164::get_offset_of_nextButton_8(),
	LampHit_t325052164::get_offset_of_cflBulb_9(),
	LampHit_t325052164::get_offset_of_badBulb_10(),
	LampHit_t325052164::get_offset_of_replaceBulb_11(),
	LampHit_t325052164::get_offset_of_cflTrans_12(),
	LampHit_t325052164::get_offset_of_pointer_13(),
	LampHit_t325052164::get_offset_of_dontForget_14(),
	LampHit_t325052164::get_offset_of_turnOff_15(),
	LampHit_t325052164::get_offset_of_exampleCube_16(),
	LampHit_t325052164::get_offset_of_newPlacedLamp_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3444 = { sizeof (LampHit2_t1787859456), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3444[22] = 
{
	LampHit2_t1787859456::get_offset_of_replaceBulb_2(),
	LampHit2_t1787859456::get_offset_of_badBulb_3(),
	LampHit2_t1787859456::get_offset_of_cflTrans_4(),
	LampHit2_t1787859456::get_offset_of_cflBulb_5(),
	LampHit2_t1787859456::get_offset_of_BuildingFactTop_6(),
	LampHit2_t1787859456::get_offset_of_pointer_7(),
	LampHit2_t1787859456::get_offset_of_BuildingFactBot_8(),
	LampHit2_t1787859456::get_offset_of_dontForget_9(),
	LampHit2_t1787859456::get_offset_of_turnOff_10(),
	LampHit2_t1787859456::get_offset_of_lampSpotlight_11(),
	LampHit2_t1787859456::get_offset_of_focusSquareFocus_12(),
	LampHit2_t1787859456::get_offset_of_focusSquareFind_13(),
	LampHit2_t1787859456::get_offset_of_scanDots_14(),
	LampHit2_t1787859456::get_offset_of_smokeHigh_15(),
	LampHit2_t1787859456::get_offset_of_trashCanScene_16(),
	LampHit2_t1787859456::get_offset_of_newPlacedLamp_17(),
	LampHit2_t1787859456::get_offset_of_nextButton_18(),
	LampHit2_t1787859456::get_offset_of_newLightBulb_19(),
	LampHit2_t1787859456::get_offset_of_thirdModuleObj_20(),
	LampHit2_t1787859456::get_offset_of_thirdButton_21(),
	LampHit2_t1787859456::get_offset_of_outroBtn_22(),
	LampHit2_t1787859456::get_offset_of_seeImpact_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3445 = { sizeof (loadDelay_t4076740582), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3446 = { sizeof (U3CWaitU3Ec__Iterator0_t3598046156), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3446[3] = 
{
	U3CWaitU3Ec__Iterator0_t3598046156::get_offset_of_U24current_0(),
	U3CWaitU3Ec__Iterator0_t3598046156::get_offset_of_U24disposing_1(),
	U3CWaitU3Ec__Iterator0_t3598046156::get_offset_of_U24PC_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3447 = { sizeof (loadDelayIntro_t1090822152), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3448 = { sizeof (U3CWaitU3Ec__Iterator0_t750400810), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3448[3] = 
{
	U3CWaitU3Ec__Iterator0_t750400810::get_offset_of_U24current_0(),
	U3CWaitU3Ec__Iterator0_t750400810::get_offset_of_U24disposing_1(),
	U3CWaitU3Ec__Iterator0_t750400810::get_offset_of_U24PC_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3449 = { sizeof (loadDelayOutro_t1767213290), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3450 = { sizeof (U3CWaitU3Ec__Iterator0_t525031111), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3450[3] = 
{
	U3CWaitU3Ec__Iterator0_t525031111::get_offset_of_U24current_0(),
	U3CWaitU3Ec__Iterator0_t525031111::get_offset_of_U24disposing_1(),
	U3CWaitU3Ec__Iterator0_t525031111::get_offset_of_U24PC_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3451 = { sizeof (mapBuildScript_t2416870533), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3451[2] = 
{
	mapBuildScript_t2416870533::get_offset_of_smoke_2(),
	mapBuildScript_t2416870533::get_offset_of_spheres_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3452 = { sizeof (Move_t1767113688), -1, sizeof(Move_t1767113688_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3452[1] = 
{
	Move_t1767113688_StaticFields::get_offset_of_objectSelect_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3453 = { sizeof (Move2_t1555238509), -1, sizeof(Move2_t1555238509_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3453[3] = 
{
	Move2_t1555238509::get_offset_of_instructions_2(),
	Move2_t1555238509_StaticFields::get_offset_of_objectSelect_3(),
	Move2_t1555238509::get_offset_of_rb_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3454 = { sizeof (MoveScene_t976741009), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3455 = { sizeof (newScreen_t3195335929), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3455[4] = 
{
	newScreen_t3195335929::get_offset_of_Screen1_2(),
	newScreen_t3195335929::get_offset_of_Screen3_3(),
	newScreen_t3195335929::get_offset_of_Screen2_4(),
	newScreen_t3195335929::get_offset_of_smoke_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3456 = { sizeof (outroBtn_t432002624), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3457 = { sizeof (U3CWaitU3Ec__Iterator0_t2142947824), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3457[3] = 
{
	U3CWaitU3Ec__Iterator0_t2142947824::get_offset_of_U24current_0(),
	U3CWaitU3Ec__Iterator0_t2142947824::get_offset_of_U24disposing_1(),
	U3CWaitU3Ec__Iterator0_t2142947824::get_offset_of_U24PC_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3458 = { sizeof (RayHit_t4125576956), -1, sizeof(RayHit_t4125576956_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3458[3] = 
{
	RayHit_t4125576956_StaticFields::get_offset_of_lampObject_2(),
	RayHit_t4125576956::get_offset_of_fixedPos_3(),
	RayHit_t4125576956::get_offset_of_moleculePosition_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3459 = { sizeof (RayHitLamp_t1532247678), -1, sizeof(RayHitLamp_t1532247678_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3459[1] = 
{
	RayHitLamp_t1532247678_StaticFields::get_offset_of_lampObject_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3460 = { sizeof (rejectionBadTrash_t1244103250), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3460[2] = 
{
	rejectionBadTrash_t1244103250::get_offset_of_thrust_2(),
	rejectionBadTrash_t1244103250::get_offset_of_rb_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3461 = { sizeof (replay_t4245199109), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3462 = { sizeof (U3CWaitU3Ec__Iterator0_t301842953), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3462[3] = 
{
	U3CWaitU3Ec__Iterator0_t301842953::get_offset_of_U24current_0(),
	U3CWaitU3Ec__Iterator0_t301842953::get_offset_of_U24disposing_1(),
	U3CWaitU3Ec__Iterator0_t301842953::get_offset_of_U24PC_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3463 = { sizeof (sceneChange_t2300739734), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3464 = { sizeof (screen2btns_t3337603163), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3464[4] = 
{
	screen2btns_t3337603163::get_offset_of_desc1_2(),
	screen2btns_t3337603163::get_offset_of_desc2_3(),
	screen2btns_t3337603163::get_offset_of_pointer_4(),
	screen2btns_t3337603163::get_offset_of_visualize_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3465 = { sizeof (Screen3_t3028932180), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3465[1] = 
{
	Screen3_t3028932180::get_offset_of_thirdScreen_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3466 = { sizeof (start_t1641636982), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3467 = { sizeof (TeamARHitTest_t981517283), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3467[12] = 
{
	TeamARHitTest_t981517283::get_offset_of_m_HitTransform_2(),
	TeamARHitTest_t981517283::get_offset_of_maxRayDistance_3(),
	TeamARHitTest_t981517283::get_offset_of_collisionLayer_4(),
	TeamARHitTest_t981517283::get_offset_of_findingSquareDist_5(),
	TeamARHitTest_t981517283::get_offset_of_BlueFocusSquare_6(),
	TeamARHitTest_t981517283::get_offset_of_FocusedSquare_7(),
	TeamARHitTest_t981517283::get_offset_of_WholeLamp_8(),
	TeamARHitTest_t981517283::get_offset_of_TapToText_9(),
	TeamARHitTest_t981517283::get_offset_of_replaceBulb_10(),
	TeamARHitTest_t981517283::get_offset_of_lampNewCollider_11(),
	TeamARHitTest_t981517283::get_offset_of_lampShade_12(),
	TeamARHitTest_t981517283::get_offset_of_m_Collider_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3468 = { sizeof (thirdmod_t1444623421), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3468[7] = 
{
	thirdmod_t1444623421::get_offset_of_fire_2(),
	thirdmod_t1444623421::get_offset_of_coal_3(),
	thirdmod_t1444623421::get_offset_of_gas_4(),
	thirdmod_t1444623421::get_offset_of_clean_5(),
	thirdmod_t1444623421::get_offset_of_woodEnergy_6(),
	thirdmod_t1444623421::get_offset_of_coalEnergy_7(),
	thirdmod_t1444623421::get_offset_of_gasEnergy_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3469 = { sizeof (thirdModule_t2518638199), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3469[6] = 
{
	thirdModule_t2518638199::get_offset_of_secondModuleGroup_2(),
	thirdModule_t2518638199::get_offset_of_toThirdMod_3(),
	thirdModule_t2518638199::get_offset_of_thirdModuleGroup_4(),
	thirdModule_t2518638199::get_offset_of_lampModel_5(),
	thirdModule_t2518638199::get_offset_of_lampStand_6(),
	thirdModule_t2518638199::get_offset_of_lampCFL_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3470 = { sizeof (toggleTrash_t2719737398), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3470[2] = 
{
	toggleTrash_t2719737398::get_offset_of_lamp_2(),
	toggleTrash_t2719737398::get_offset_of_trash_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3471 = { sizeof (TrashARHitTest_t3775773455), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3471[4] = 
{
	TrashARHitTest_t3775773455::get_offset_of_m_HitTransform_2(),
	TrashARHitTest_t3775773455::get_offset_of_maxRayDistance_3(),
	TrashARHitTest_t3775773455::get_offset_of_collisionLayer_4(),
	TrashARHitTest_t3775773455::get_offset_of_bigDickHit_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3472 = { sizeof (secondBuilding_dontForget_t2453178047), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3472[4] = 
{
	secondBuilding_dontForget_t2453178047::get_offset_of_BuildingFactBot_Trans_2(),
	secondBuilding_dontForget_t2453178047::get_offset_of_BuildingFactBot_3(),
	secondBuilding_dontForget_t2453178047::get_offset_of_dontForget_4(),
	secondBuilding_dontForget_t2453178047::get_offset_of_dontForgetTrans_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3473 = { sizeof (secondModule_t3625317484), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3473[9] = 
{
	secondModule_t3625317484::get_offset_of_firstModuleGroup_2(),
	secondModule_t3625317484::get_offset_of_lampModel_3(),
	secondModule_t3625317484::get_offset_of_lampStand_4(),
	secondModule_t3625317484::get_offset_of_lampCFL_5(),
	secondModule_t3625317484::get_offset_of_lampShade_6(),
	secondModule_t3625317484::get_offset_of_secondInstructions_7(),
	secondModule_t3625317484::get_offset_of_toSecondMod_8(),
	secondModule_t3625317484::get_offset_of_secondModuleGroup_9(),
	secondModule_t3625317484::get_offset_of_toThirdMod_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3474 = { sizeof (Fader_t2683853559), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3474[6] = 
{
	Fader_t2683853559::get_offset_of_start_2(),
	Fader_t2683853559::get_offset_of_fadeDamp_3(),
	Fader_t2683853559::get_offset_of_fadeScene_4(),
	Fader_t2683853559::get_offset_of_alpha_5(),
	Fader_t2683853559::get_offset_of_fadeColor_6(),
	Fader_t2683853559::get_offset_of_isFadeIn_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3475 = { sizeof (Initiate_t1256188312), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3476 = { sizeof (tapAway_t1851080342), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3477 = { sizeof (ConnectionMessageIds_t2201604772), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3478 = { sizeof (SubMessageIds_t1787092473), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3479 = { sizeof (ConnectToEditor_t2268165222), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3479[4] = 
{
	ConnectToEditor_t2268165222::get_offset_of_playerConnection_2(),
	ConnectToEditor_t2268165222::get_offset_of_m_session_3(),
	ConnectToEditor_t2268165222::get_offset_of_editorID_4(),
	ConnectToEditor_t2268165222::get_offset_of_frameBufferTex_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3480 = { sizeof (EditorHitTest_t1374729210), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3480[3] = 
{
	EditorHitTest_t1374729210::get_offset_of_m_HitTransform_2(),
	EditorHitTest_t1374729210::get_offset_of_maxRayDistance_3(),
	EditorHitTest_t1374729210::get_offset_of_collisionLayerMask_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3481 = { sizeof (ObjectSerializationExtension_t4143292742), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3482 = { sizeof (SerializableVector4_t3942108960), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3482[4] = 
{
	SerializableVector4_t3942108960::get_offset_of_x_0(),
	SerializableVector4_t3942108960::get_offset_of_y_1(),
	SerializableVector4_t3942108960::get_offset_of_z_2(),
	SerializableVector4_t3942108960::get_offset_of_w_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3483 = { sizeof (serializableUnityARMatrix4x4_t2471070835), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3483[4] = 
{
	serializableUnityARMatrix4x4_t2471070835::get_offset_of_column0_0(),
	serializableUnityARMatrix4x4_t2471070835::get_offset_of_column1_1(),
	serializableUnityARMatrix4x4_t2471070835::get_offset_of_column2_2(),
	serializableUnityARMatrix4x4_t2471070835::get_offset_of_column3_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3484 = { sizeof (serializableUnityARCamera_t3436699307), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3484[8] = 
{
	serializableUnityARCamera_t3436699307::get_offset_of_worldTransform_0(),
	serializableUnityARCamera_t3436699307::get_offset_of_projectionMatrix_1(),
	serializableUnityARCamera_t3436699307::get_offset_of_trackingState_2(),
	serializableUnityARCamera_t3436699307::get_offset_of_trackingReason_3(),
	serializableUnityARCamera_t3436699307::get_offset_of_videoParams_4(),
	serializableUnityARCamera_t3436699307::get_offset_of_lightEstimation_5(),
	serializableUnityARCamera_t3436699307::get_offset_of_pointCloud_6(),
	serializableUnityARCamera_t3436699307::get_offset_of_displayTransform_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3485 = { sizeof (serializableUnityARPlaneAnchor_t808622527), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3485[5] = 
{
	serializableUnityARPlaneAnchor_t808622527::get_offset_of_worldTransform_0(),
	serializableUnityARPlaneAnchor_t808622527::get_offset_of_center_1(),
	serializableUnityARPlaneAnchor_t808622527::get_offset_of_extent_2(),
	serializableUnityARPlaneAnchor_t808622527::get_offset_of_planeAlignment_3(),
	serializableUnityARPlaneAnchor_t808622527::get_offset_of_identifierStr_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3486 = { sizeof (serializablePointCloud_t1312981559), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3486[1] = 
{
	serializablePointCloud_t1312981559::get_offset_of_pointCloudData_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3487 = { sizeof (serializableARSessionConfiguration_t2134036775), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3487[4] = 
{
	serializableARSessionConfiguration_t2134036775::get_offset_of_alignment_0(),
	serializableARSessionConfiguration_t2134036775::get_offset_of_planeDetection_1(),
	serializableARSessionConfiguration_t2134036775::get_offset_of_getPointCloudData_2(),
	serializableARSessionConfiguration_t2134036775::get_offset_of_enableLightEstimation_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3488 = { sizeof (serializableARKitInit_t2496204220), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3488[2] = 
{
	serializableARKitInit_t2496204220::get_offset_of_config_0(),
	serializableARKitInit_t2496204220::get_offset_of_runOption_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3489 = { sizeof (serializableFromEditorMessage_t690643568), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3489[2] = 
{
	serializableFromEditorMessage_t690643568::get_offset_of_subMessageId_0(),
	serializableFromEditorMessage_t690643568::get_offset_of_arkitConfigMsg_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3490 = { sizeof (UnityRemoteVideo_t990286538), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3490[10] = 
{
	UnityRemoteVideo_t990286538::get_offset_of_connectToEditor_2(),
	UnityRemoteVideo_t990286538::get_offset_of_m_Session_3(),
	UnityRemoteVideo_t990286538::get_offset_of_bTexturesInitialized_4(),
	UnityRemoteVideo_t990286538::get_offset_of_currentFrameIndex_5(),
	UnityRemoteVideo_t990286538::get_offset_of_m_textureYBytes_6(),
	UnityRemoteVideo_t990286538::get_offset_of_m_textureUVBytes_7(),
	UnityRemoteVideo_t990286538::get_offset_of_m_textureYBytes2_8(),
	UnityRemoteVideo_t990286538::get_offset_of_m_textureUVBytes2_9(),
	UnityRemoteVideo_t990286538::get_offset_of_m_pinnedYArray_10(),
	UnityRemoteVideo_t990286538::get_offset_of_m_pinnedUVArray_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3491 = { sizeof (UnityARUserAnchorExample_t1094171739), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3491[4] = 
{
	UnityARUserAnchorExample_t1094171739::get_offset_of_prefabObject_2(),
	UnityARUserAnchorExample_t1094171739::get_offset_of_distanceFromCamera_3(),
	UnityARUserAnchorExample_t1094171739::get_offset_of_m_Clones_4(),
	UnityARUserAnchorExample_t1094171739::get_offset_of_m_TimeUntilRemove_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3492 = { sizeof (FocusSquare_t1236987896), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3492[10] = 
{
	FocusSquare_t1236987896::get_offset_of_findingSquare_2(),
	FocusSquare_t1236987896::get_offset_of_foundSquare_3(),
	FocusSquare_t1236987896::get_offset_of_maxRayDistance_4(),
	FocusSquare_t1236987896::get_offset_of_collisionLayerMask_5(),
	FocusSquare_t1236987896::get_offset_of_findingSquareDist_6(),
	FocusSquare_t1236987896::get_offset_of_lampComponent_7(),
	FocusSquare_t1236987896::get_offset_of_tapToPlaceText_8(),
	FocusSquare_t1236987896::get_offset_of_findFlatSurface_9(),
	FocusSquare_t1236987896::get_offset_of_squareState_10(),
	FocusSquare_t1236987896::get_offset_of_trackingInitialized_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3493 = { sizeof (FocusState_t275834306)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3493[4] = 
{
	FocusState_t275834306::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3494 = { sizeof (BallMaker_t3504366277), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3494[3] = 
{
	BallMaker_t3504366277::get_offset_of_ballPrefab_2(),
	BallMaker_t3504366277::get_offset_of_createHeight_3(),
	BallMaker_t3504366277::get_offset_of_props_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3495 = { sizeof (BallMover_t259337474), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3495[2] = 
{
	BallMover_t259337474::get_offset_of_collBallPrefab_2(),
	BallMover_t259337474::get_offset_of_collBallGO_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3496 = { sizeof (Ballz_t4211643134), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3496[2] = 
{
	Ballz_t4211643134::get_offset_of_yDistanceThreshold_2(),
	Ballz_t4211643134::get_offset_of_startingY_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3497 = { sizeof (ModeSwitcher_t1880064702), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3497[3] = 
{
	ModeSwitcher_t1880064702::get_offset_of_ballMake_2(),
	ModeSwitcher_t1880064702::get_offset_of_ballMove_3(),
	ModeSwitcher_t1880064702::get_offset_of_appMode_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3498 = { sizeof (ColorValues_t298336711)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3498[8] = 
{
	ColorValues_t298336711::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3499 = { sizeof (ColorChangedEvent_t4134586285), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif

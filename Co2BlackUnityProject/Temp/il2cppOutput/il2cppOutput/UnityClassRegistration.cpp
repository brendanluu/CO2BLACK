template <typename T> void RegisterClass();
template <typename T> void RegisterStrippedTypeInfo(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

	void RegisterModule_Wind();
	RegisterModule_Wind();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>();
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>();
class Behaviour; template <> void RegisterClass<Behaviour>();
class Animation; template <> void RegisterClass<Animation>();
class Animator; template <> void RegisterClass<Animator>();
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>();
class AudioListener; template <> void RegisterClass<AudioListener>();
class AudioSource; template <> void RegisterClass<AudioSource>();
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>();
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>();
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>();
namespace Unity { class Cloth; } 
class Collider2D; 
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterClass<FlareLayer>();
class GUIElement; template <> void RegisterClass<GUIElement>();
namespace TextRenderingPrivate { class GUIText; } template <> void RegisterClass<TextRenderingPrivate::GUIText>();
class GUITexture; 
class GUILayer; template <> void RegisterClass<GUILayer>();
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class HaloLayer; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterClass<Light>();
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>();
class NavMeshAgent; template <> void RegisterClass<NavMeshAgent>();
class NavMeshObstacle; 
class NetworkView; 
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; 
class Skybox; 
class SortingGroup; 
class Terrain; 
class VideoPlayer; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>();
class Collider; template <> void RegisterClass<Collider>();
class BoxCollider; template <> void RegisterClass<BoxCollider>();
class CapsuleCollider; template <> void RegisterClass<CapsuleCollider>();
class CharacterController; template <> void RegisterClass<CharacterController>();
class MeshCollider; template <> void RegisterClass<MeshCollider>();
class SphereCollider; template <> void RegisterClass<SphereCollider>();
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } template <> void RegisterClass<Unity::Joint>();
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } template <> void RegisterClass<Unity::SpringJoint>();
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>();
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; template <> void RegisterClass<ParticleSystem>();
class Renderer; template <> void RegisterClass<Renderer>();
class BillboardRenderer; 
class LineRenderer; 
class MeshRenderer; template <> void RegisterClass<MeshRenderer>();
class ParticleRenderer; 
class ParticleSystemRenderer; 
class SkinnedMeshRenderer; 
class SpriteMask; 
class SpriteRenderer; 
class TilemapRenderer; 
class TrailRenderer; 
class Rigidbody; template <> void RegisterClass<Rigidbody>();
class Rigidbody2D; 
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterClass<Transform>();
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>();
class Tree; 
class WorldAnchor; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>();
class NamedObject; template <> void RegisterClass<NamedObject>();
class AssetBundle; 
class AssetBundleManifest; 
class ScriptedImporter; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; 
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>();
class GameObjectRecorder; 
class LightProbes; template <> void RegisterClass<LightProbes>();
class Material; template <> void RegisterClass<Material>();
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>();
class Motion; 
class AnimationClip; 
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterClass<PreloadData>();
class RuntimeAnimatorController; 
class AnimatorController; 
class AnimatorOverrideController; 
class SampleClip; template <> void RegisterClass<SampleClip>();
class AudioClip; template <> void RegisterClass<AudioClip>();
class Shader; template <> void RegisterClass<Shader>();
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>();
class SpriteAtlas; 
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterClass<TextAsset>();
class CGProgram; template <> void RegisterClass<CGProgram>();
class MonoScript; template <> void RegisterClass<MonoScript>();
class Texture; template <> void RegisterClass<Texture>();
class BaseVideoTexture; 
class MovieTexture; 
class WebCamTexture; 
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterClass<LowerResBlitTexture>();
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>();
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>();
class Cubemap; template <> void RegisterClass<Cubemap>();
class Texture2DArray; template <> void RegisterClass<Texture2DArray>();
class Texture3D; template <> void RegisterClass<Texture3D>();
class VideoClip; 
class GameManager; template <> void RegisterClass<GameManager>();
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>();
class AudioManager; template <> void RegisterClass<AudioManager>();
class BuildSettings; template <> void RegisterClass<BuildSettings>();
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>();
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>();
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>();
class InputManager; template <> void RegisterClass<InputManager>();
class MasterServerInterface; template <> void RegisterClass<MasterServerInterface>();
class MonoManager; template <> void RegisterClass<MonoManager>();
class NavMeshProjectSettings; template <> void RegisterClass<NavMeshProjectSettings>();
class NetworkManager; template <> void RegisterClass<NetworkManager>();
class PerformanceReportingManager; 
class Physics2DSettings; 
class PhysicsManager; template <> void RegisterClass<PhysicsManager>();
class PlayerSettings; template <> void RegisterClass<PlayerSettings>();
class QualitySettings; template <> void RegisterClass<QualitySettings>();
class ResourceManager; template <> void RegisterClass<ResourceManager>();
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>();
class ScriptMapper; template <> void RegisterClass<ScriptMapper>();
class TagManager; template <> void RegisterClass<TagManager>();
class TimeManager; template <> void RegisterClass<TimeManager>();
class UnityAnalyticsManager; 
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>();
class LevelGameManager; template <> void RegisterClass<LevelGameManager>();
class LightmapSettings; template <> void RegisterClass<LightmapSettings>();
class NavMeshSettings; template <> void RegisterClass<NavMeshSettings>();
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>();
class NScreenBridge; 
class RenderPassAttachment; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 80 non stripped classes
	//0. AudioClip
	RegisterClass<AudioClip>();
	//1. SampleClip
	RegisterClass<SampleClip>();
	//2. NamedObject
	RegisterClass<NamedObject>();
	//3. EditorExtension
	RegisterClass<EditorExtension>();
	//4. AudioListener
	RegisterClass<AudioListener>();
	//5. AudioBehaviour
	RegisterClass<AudioBehaviour>();
	//6. Behaviour
	RegisterClass<Behaviour>();
	//7. Unity::Component
	RegisterClass<Unity::Component>();
	//8. AudioSource
	RegisterClass<AudioSource>();
	//9. Camera
	RegisterClass<Camera>();
	//10. GameObject
	RegisterClass<GameObject>();
	//11. QualitySettings
	RegisterClass<QualitySettings>();
	//12. GlobalGameManager
	RegisterClass<GlobalGameManager>();
	//13. GameManager
	RegisterClass<GameManager>();
	//14. MeshFilter
	RegisterClass<MeshFilter>();
	//15. Renderer
	RegisterClass<Renderer>();
	//16. GUIElement
	RegisterClass<GUIElement>();
	//17. GUILayer
	RegisterClass<GUILayer>();
	//18. Light
	RegisterClass<Light>();
	//19. Mesh
	RegisterClass<Mesh>();
	//20. MonoBehaviour
	RegisterClass<MonoBehaviour>();
	//21. Shader
	RegisterClass<Shader>();
	//22. Material
	RegisterClass<Material>();
	//23. Sprite
	RegisterClass<Sprite>();
	//24. TextAsset
	RegisterClass<TextAsset>();
	//25. Texture
	RegisterClass<Texture>();
	//26. Texture2D
	RegisterClass<Texture2D>();
	//27. RenderTexture
	RegisterClass<RenderTexture>();
	//28. Transform
	RegisterClass<Transform>();
	//29. UI::RectTransform
	RegisterClass<UI::RectTransform>();
	//30. Rigidbody
	RegisterClass<Rigidbody>();
	//31. Unity::Joint
	RegisterClass<Unity::Joint>();
	//32. Unity::SpringJoint
	RegisterClass<Unity::SpringJoint>();
	//33. Collider
	RegisterClass<Collider>();
	//34. BoxCollider
	RegisterClass<BoxCollider>();
	//35. MeshCollider
	RegisterClass<MeshCollider>();
	//36. CapsuleCollider
	RegisterClass<CapsuleCollider>();
	//37. CharacterController
	RegisterClass<CharacterController>();
	//38. NavMeshAgent
	RegisterClass<NavMeshAgent>();
	//39. Animation
	RegisterClass<Animation>();
	//40. Animator
	RegisterClass<Animator>();
	//41. ParticleSystem
	RegisterClass<ParticleSystem>();
	//42. TextRenderingPrivate::GUIText
	RegisterClass<TextRenderingPrivate::GUIText>();
	//43. TextRendering::Font
	RegisterClass<TextRendering::Font>();
	//44. UI::Canvas
	RegisterClass<UI::Canvas>();
	//45. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>();
	//46. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>();
	//47. MeshRenderer
	RegisterClass<MeshRenderer>();
	//48. SphereCollider
	RegisterClass<SphereCollider>();
	//49. PreloadData
	RegisterClass<PreloadData>();
	//50. Cubemap
	RegisterClass<Cubemap>();
	//51. Texture3D
	RegisterClass<Texture3D>();
	//52. Texture2DArray
	RegisterClass<Texture2DArray>();
	//53. LowerResBlitTexture
	RegisterClass<LowerResBlitTexture>();
	//54. GraphicsSettings
	RegisterClass<GraphicsSettings>();
	//55. InputManager
	RegisterClass<InputManager>();
	//56. PlayerSettings
	RegisterClass<PlayerSettings>();
	//57. ResourceManager
	RegisterClass<ResourceManager>();
	//58. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>();
	//59. TimeManager
	RegisterClass<TimeManager>();
	//60. TagManager
	RegisterClass<TagManager>();
	//61. DelayedCallManager
	RegisterClass<DelayedCallManager>();
	//62. BuildSettings
	RegisterClass<BuildSettings>();
	//63. MasterServerInterface
	RegisterClass<MasterServerInterface>();
	//64. NetworkManager
	RegisterClass<NetworkManager>();
	//65. ScriptMapper
	RegisterClass<ScriptMapper>();
	//66. PhysicsManager
	RegisterClass<PhysicsManager>();
	//67. MonoScript
	RegisterClass<MonoScript>();
	//68. MonoManager
	RegisterClass<MonoManager>();
	//69. NavMeshProjectSettings
	RegisterClass<NavMeshProjectSettings>();
	//70. UnityConnectSettings
	RegisterClass<UnityConnectSettings>();
	//71. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>();
	//72. AudioManager
	RegisterClass<AudioManager>();
	//73. LevelGameManager
	RegisterClass<LevelGameManager>();
	//74. FlareLayer
	RegisterClass<FlareLayer>();
	//75. RenderSettings
	RegisterClass<RenderSettings>();
	//76. LightmapSettings
	RegisterClass<LightmapSettings>();
	//77. CGProgram
	RegisterClass<CGProgram>();
	//78. LightProbes
	RegisterClass<LightProbes>();
	//79. NavMeshSettings
	RegisterClass<NavMeshSettings>();

}

// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRComposition
#include "GlobalNamespace/OVRComposition.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: AudioListener
  class AudioListener;
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRMRAudioFilter
  class OVRMRAudioFilter;
  // Forward declaring type: OVRMixedRealityCaptureConfiguration
  class OVRMixedRealityCaptureConfiguration;
  // Forward declaring type: CompositionMethod
  struct OVRManager_CompositionMethod;
  // Forward declaring type: TrackingOrigin
  struct OVRManager_TrackingOrigin;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xBC
  #pragma pack(push, 1)
  // Autogenerated type: OVRExternalComposition
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRExternalComposition : public GlobalNamespace::OVRComposition {
    public:
    // private UnityEngine.GameObject previousMainCameraObject
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::GameObject* previousMainCameraObject;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject foregroundCameraGameObject
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::GameObject* foregroundCameraGameObject;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.Camera foregroundCamera
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::Camera* foregroundCamera;
    // Field size check
    static_assert(sizeof(UnityEngine::Camera*) == 0x8);
    // public UnityEngine.GameObject backgroundCameraGameObject
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::GameObject* backgroundCameraGameObject;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.Camera backgroundCamera
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::Camera* backgroundCamera;
    // Field size check
    static_assert(sizeof(UnityEngine::Camera*) == 0x8);
    // public System.Boolean renderCombinedFrame
    // Size: 0x1
    // Offset: 0x68
    bool renderCombinedFrame;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: renderCombinedFrame and: audioListener
    char __padding5[0x7] = {};
    // public UnityEngine.AudioListener audioListener
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::AudioListener* audioListener;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioListener*) == 0x8);
    // public OVRMRAudioFilter audioFilter
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::OVRMRAudioFilter* audioFilter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRMRAudioFilter*) == 0x8);
    // public UnityEngine.RenderTexture[] mrcRenderTextureArray
    // Size: 0x8
    // Offset: 0x80
    ::Array<UnityEngine::RenderTexture*>* mrcRenderTextureArray;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::RenderTexture*>*) == 0x8);
    // public System.Int32 frameIndex
    // Size: 0x4
    // Offset: 0x88
    int frameIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 lastMrcEncodeFrameSyncId
    // Size: 0x4
    // Offset: 0x8C
    int lastMrcEncodeFrameSyncId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.RenderTexture[] mrcForegroundRenderTextureArray
    // Size: 0x8
    // Offset: 0x90
    ::Array<UnityEngine::RenderTexture*>* mrcForegroundRenderTextureArray;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::RenderTexture*>*) == 0x8);
    // public System.Double[] cameraPoseTimeArray
    // Size: 0x8
    // Offset: 0x98
    ::Array<double>* cameraPoseTimeArray;
    // Field size check
    static_assert(sizeof(::Array<double>*) == 0x8);
    // private System.Single[] cachedAudioDataArray
    // Size: 0x8
    // Offset: 0xA0
    ::Array<float>* cachedAudioDataArray;
    // Field size check
    static_assert(sizeof(::Array<float>*) == 0x8);
    // private readonly System.Object audioDataLock
    // Size: 0x8
    // Offset: 0xA8
    ::Il2CppObject* audioDataLock;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Collections.Generic.List`1<System.Single> cachedAudioData
    // Size: 0x8
    // Offset: 0xB0
    System::Collections::Generic::List_1<float>* cachedAudioData;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<float>*) == 0x8);
    // private System.Int32 cachedChannels
    // Size: 0x4
    // Offset: 0xB8
    int cachedChannels;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: OVRExternalComposition
    OVRExternalComposition(UnityEngine::GameObject* previousMainCameraObject_ = {}, UnityEngine::GameObject* foregroundCameraGameObject_ = {}, UnityEngine::Camera* foregroundCamera_ = {}, UnityEngine::GameObject* backgroundCameraGameObject_ = {}, UnityEngine::Camera* backgroundCamera_ = {}, bool renderCombinedFrame_ = {}, UnityEngine::AudioListener* audioListener_ = {}, GlobalNamespace::OVRMRAudioFilter* audioFilter_ = {}, ::Array<UnityEngine::RenderTexture*>* mrcRenderTextureArray_ = {}, int frameIndex_ = {}, int lastMrcEncodeFrameSyncId_ = {}, ::Array<UnityEngine::RenderTexture*>* mrcForegroundRenderTextureArray_ = {}, ::Array<double>* cameraPoseTimeArray_ = {}, ::Array<float>* cachedAudioDataArray_ = {}, ::Il2CppObject* audioDataLock_ = {}, System::Collections::Generic::List_1<float>* cachedAudioData_ = {}, int cachedChannels_ = {}) noexcept : previousMainCameraObject{previousMainCameraObject_}, foregroundCameraGameObject{foregroundCameraGameObject_}, foregroundCamera{foregroundCamera_}, backgroundCameraGameObject{backgroundCameraGameObject_}, backgroundCamera{backgroundCamera_}, renderCombinedFrame{renderCombinedFrame_}, audioListener{audioListener_}, audioFilter{audioFilter_}, mrcRenderTextureArray{mrcRenderTextureArray_}, frameIndex{frameIndex_}, lastMrcEncodeFrameSyncId{lastMrcEncodeFrameSyncId_}, mrcForegroundRenderTextureArray{mrcForegroundRenderTextureArray_}, cameraPoseTimeArray{cameraPoseTimeArray_}, cachedAudioDataArray{cachedAudioDataArray_}, audioDataLock{audioDataLock_}, cachedAudioData{cachedAudioData_}, cachedChannels{cachedChannels_} {}
    // Get instance field reference: private UnityEngine.GameObject previousMainCameraObject
    UnityEngine::GameObject*& dyn_previousMainCameraObject();
    // Get instance field reference: public UnityEngine.GameObject foregroundCameraGameObject
    UnityEngine::GameObject*& dyn_foregroundCameraGameObject();
    // Get instance field reference: public UnityEngine.Camera foregroundCamera
    UnityEngine::Camera*& dyn_foregroundCamera();
    // Get instance field reference: public UnityEngine.GameObject backgroundCameraGameObject
    UnityEngine::GameObject*& dyn_backgroundCameraGameObject();
    // Get instance field reference: public UnityEngine.Camera backgroundCamera
    UnityEngine::Camera*& dyn_backgroundCamera();
    // Get instance field reference: public System.Boolean renderCombinedFrame
    bool& dyn_renderCombinedFrame();
    // Get instance field reference: public UnityEngine.AudioListener audioListener
    UnityEngine::AudioListener*& dyn_audioListener();
    // Get instance field reference: public OVRMRAudioFilter audioFilter
    GlobalNamespace::OVRMRAudioFilter*& dyn_audioFilter();
    // Get instance field reference: public UnityEngine.RenderTexture[] mrcRenderTextureArray
    ::Array<UnityEngine::RenderTexture*>*& dyn_mrcRenderTextureArray();
    // Get instance field reference: public System.Int32 frameIndex
    int& dyn_frameIndex();
    // Get instance field reference: public System.Int32 lastMrcEncodeFrameSyncId
    int& dyn_lastMrcEncodeFrameSyncId();
    // Get instance field reference: public UnityEngine.RenderTexture[] mrcForegroundRenderTextureArray
    ::Array<UnityEngine::RenderTexture*>*& dyn_mrcForegroundRenderTextureArray();
    // Get instance field reference: public System.Double[] cameraPoseTimeArray
    ::Array<double>*& dyn_cameraPoseTimeArray();
    // Get instance field reference: private System.Single[] cachedAudioDataArray
    ::Array<float>*& dyn_cachedAudioDataArray();
    // Get instance field reference: private readonly System.Object audioDataLock
    ::Il2CppObject*& dyn_audioDataLock();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Single> cachedAudioData
    System::Collections::Generic::List_1<float>*& dyn_cachedAudioData();
    // Get instance field reference: private System.Int32 cachedChannels
    int& dyn_cachedChannels();
    // private System.Void RefreshCameraObjects(UnityEngine.GameObject parentObject, UnityEngine.Camera mainCamera, OVRMixedRealityCaptureConfiguration configuration)
    // Offset: 0x12B8A90
    void RefreshCameraObjects(UnityEngine::GameObject* parentObject, UnityEngine::Camera* mainCamera, GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration);
    // private System.Void RefreshAudioFilter()
    // Offset: 0x12B96C0
    void RefreshAudioFilter();
    // private System.Int32 CastMrcFrame(System.Int32 castTextureIndex)
    // Offset: 0x12B9E28
    int CastMrcFrame(int castTextureIndex);
    // private System.Void SetCameraTargetTexture(System.Int32 drawTextureIndex)
    // Offset: 0x12BA21C
    void SetCameraTargetTexture(int drawTextureIndex);
    // private System.Void CleanupAudioFilter()
    // Offset: 0x12B9CAC
    void CleanupAudioFilter();
    // public System.Void CacheAudioData(System.Single[] data, System.Int32 channels)
    // Offset: 0x12BB450
    void CacheAudioData(::Array<float>* data, int channels);
    // public System.Void GetAndResetAudioData(ref System.Single[] audioData, out System.Int32 audioFrames, out System.Int32 channels)
    // Offset: 0x12BA08C
    void GetAndResetAudioData(ByRef<::Array<float>*> audioData, ByRef<int> audioFrames, ByRef<int> channels);
    // public System.Void .ctor(UnityEngine.GameObject parentObject, UnityEngine.Camera mainCamera, OVRMixedRealityCaptureConfiguration configuration)
    // Offset: 0x12B85D4
    // Implemented from: OVRComposition
    // Base method: System.Void OVRComposition::.ctor(UnityEngine.GameObject parentObject, UnityEngine.Camera mainCamera, OVRMixedRealityCaptureConfiguration configuration)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRExternalComposition* New_ctor(UnityEngine::GameObject* parentObject, UnityEngine::Camera* mainCamera, GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRExternalComposition::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRExternalComposition*, creationType>(parentObject, mainCamera, configuration)));
    }
    // public override OVRManager/CompositionMethod CompositionMethod()
    // Offset: 0x12B85CC
    // Implemented from: OVRComposition
    // Base method: OVRManager/CompositionMethod OVRComposition::CompositionMethod()
    GlobalNamespace::OVRManager_CompositionMethod CompositionMethod();
    // public override System.Void Update(UnityEngine.GameObject gameObject, UnityEngine.Camera mainCamera, OVRMixedRealityCaptureConfiguration configuration, OVRManager/TrackingOrigin trackingOrigin)
    // Offset: 0x12BA440
    // Implemented from: OVRComposition
    // Base method: System.Void OVRComposition::Update(UnityEngine.GameObject gameObject, UnityEngine.Camera mainCamera, OVRMixedRealityCaptureConfiguration configuration, OVRManager/TrackingOrigin trackingOrigin)
    void Update(UnityEngine::GameObject* gameObject, UnityEngine::Camera* mainCamera, GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration, GlobalNamespace::OVRManager_TrackingOrigin trackingOrigin);
    // public override System.Void Cleanup()
    // Offset: 0x12BB2BC
    // Implemented from: OVRComposition
    // Base method: System.Void OVRComposition::Cleanup()
    void Cleanup();
  }; // OVRExternalComposition
  #pragma pack(pop)
  static check_size<sizeof(OVRExternalComposition), 184 + sizeof(int)> __GlobalNamespace_OVRExternalCompositionSizeCheck;
  static_assert(sizeof(OVRExternalComposition) == 0xBC);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRExternalComposition*, "", "OVRExternalComposition");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRExternalComposition::RefreshCameraObjects
// Il2CppName: RefreshCameraObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRExternalComposition::*)(UnityEngine::GameObject*, UnityEngine::Camera*, GlobalNamespace::OVRMixedRealityCaptureConfiguration*)>(&GlobalNamespace::OVRExternalComposition::RefreshCameraObjects)> {
  static const MethodInfo* get() {
    static auto* parentObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* mainCamera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* configuration = &::il2cpp_utils::GetClassFromName("", "OVRMixedRealityCaptureConfiguration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExternalComposition*), "RefreshCameraObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentObject, mainCamera, configuration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExternalComposition::RefreshAudioFilter
// Il2CppName: RefreshAudioFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRExternalComposition::*)()>(&GlobalNamespace::OVRExternalComposition::RefreshAudioFilter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExternalComposition*), "RefreshAudioFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExternalComposition::CastMrcFrame
// Il2CppName: CastMrcFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::OVRExternalComposition::*)(int)>(&GlobalNamespace::OVRExternalComposition::CastMrcFrame)> {
  static const MethodInfo* get() {
    static auto* castTextureIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExternalComposition*), "CastMrcFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{castTextureIndex});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExternalComposition::SetCameraTargetTexture
// Il2CppName: SetCameraTargetTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRExternalComposition::*)(int)>(&GlobalNamespace::OVRExternalComposition::SetCameraTargetTexture)> {
  static const MethodInfo* get() {
    static auto* drawTextureIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExternalComposition*), "SetCameraTargetTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{drawTextureIndex});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExternalComposition::CleanupAudioFilter
// Il2CppName: CleanupAudioFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRExternalComposition::*)()>(&GlobalNamespace::OVRExternalComposition::CleanupAudioFilter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExternalComposition*), "CleanupAudioFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExternalComposition::CacheAudioData
// Il2CppName: CacheAudioData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRExternalComposition::*)(::Array<float>*, int)>(&GlobalNamespace::OVRExternalComposition::CacheAudioData)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExternalComposition*), "CacheAudioData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, channels});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExternalComposition::GetAndResetAudioData
// Il2CppName: GetAndResetAudioData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRExternalComposition::*)(ByRef<::Array<float>*>, ByRef<int>, ByRef<int>)>(&GlobalNamespace::OVRExternalComposition::GetAndResetAudioData)> {
  static const MethodInfo* get() {
    static auto* audioData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->this_arg;
    static auto* audioFrames = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExternalComposition*), "GetAndResetAudioData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{audioData, audioFrames, channels});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExternalComposition::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRExternalComposition::CompositionMethod
// Il2CppName: CompositionMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRManager_CompositionMethod (GlobalNamespace::OVRExternalComposition::*)()>(&GlobalNamespace::OVRExternalComposition::CompositionMethod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExternalComposition*), "CompositionMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExternalComposition::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRExternalComposition::*)(UnityEngine::GameObject*, UnityEngine::Camera*, GlobalNamespace::OVRMixedRealityCaptureConfiguration*, GlobalNamespace::OVRManager_TrackingOrigin)>(&GlobalNamespace::OVRExternalComposition::Update)> {
  static const MethodInfo* get() {
    static auto* gameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* mainCamera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* configuration = &::il2cpp_utils::GetClassFromName("", "OVRMixedRealityCaptureConfiguration")->byval_arg;
    static auto* trackingOrigin = &::il2cpp_utils::GetClassFromName("", "OVRManager/TrackingOrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExternalComposition*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameObject, mainCamera, configuration, trackingOrigin});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExternalComposition::Cleanup
// Il2CppName: Cleanup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRExternalComposition::*)()>(&GlobalNamespace::OVRExternalComposition::Cleanup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExternalComposition*), "Cleanup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
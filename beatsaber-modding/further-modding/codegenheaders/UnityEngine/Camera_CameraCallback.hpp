// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Camera
#include "UnityEngine/Camera.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Camera/UnityEngine.CameraCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class Camera::CameraCallback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: CameraCallback
    CameraCallback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C4CAB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Camera::CameraCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Camera::CameraCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Camera::CameraCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(UnityEngine.Camera cam)
    // Offset: 0x1C4C64C
    void Invoke(UnityEngine::Camera* cam);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Camera cam, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C4CAC4
    System::IAsyncResult* BeginInvoke(UnityEngine::Camera* cam, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1C4CAE8
    void EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.Camera/UnityEngine.CameraCallback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Camera::CameraCallback*, "UnityEngine", "Camera/CameraCallback");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Camera::CameraCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Camera::CameraCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Camera::CameraCallback::*)(UnityEngine::Camera*)>(&UnityEngine::Camera::CameraCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* cam = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Camera::CameraCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cam});
  }
};
// Writing MetadataGetter for method: UnityEngine::Camera::CameraCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (UnityEngine::Camera::CameraCallback::*)(UnityEngine::Camera*, System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngine::Camera::CameraCallback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* cam = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Camera::CameraCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cam, callback, object});
  }
};
// Writing MetadataGetter for method: UnityEngine::Camera::CameraCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Camera::CameraCallback::*)(System::IAsyncResult*)>(&UnityEngine::Camera::CameraCallback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Camera::CameraCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
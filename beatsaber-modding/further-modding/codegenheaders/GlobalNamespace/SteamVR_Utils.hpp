// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Quaternion
  struct Quaternion;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_Utils
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class SteamVR_Utils : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::SteamVR_Utils::RigidTransform
    struct RigidTransform;
    // Nested type: GlobalNamespace::SteamVR_Utils::SystemFn
    class SystemFn;
    // Creating value type constructor for type: SteamVR_Utils
    SteamVR_Utils() noexcept {}
    // static public UnityEngine.Quaternion Slerp(UnityEngine.Quaternion A, UnityEngine.Quaternion B, System.Single t)
    // Offset: 0x1704EDC
    static UnityEngine::Quaternion Slerp(UnityEngine::Quaternion A, UnityEngine::Quaternion B, float t);
    // static public UnityEngine.Vector3 Lerp(UnityEngine.Vector3 A, UnityEngine.Vector3 B, System.Single t)
    // Offset: 0x17050A4
    static UnityEngine::Vector3 Lerp(UnityEngine::Vector3 A, UnityEngine::Vector3 B, float t);
    // static public System.Single Lerp(System.Single A, System.Single B, System.Single t)
    // Offset: 0x17050FC
    static float Lerp(float A, float B, float t);
    // static public System.Double Lerp(System.Double A, System.Double B, System.Double t)
    // Offset: 0x170510C
    static double Lerp(double A, double B, double t);
    // static public System.Single InverseLerp(UnityEngine.Vector3 A, UnityEngine.Vector3 B, UnityEngine.Vector3 result)
    // Offset: 0x170511C
    static float InverseLerp(UnityEngine::Vector3 A, UnityEngine::Vector3 B, UnityEngine::Vector3 result);
    // static public System.Single InverseLerp(System.Single A, System.Single B, System.Single result)
    // Offset: 0x1705220
    static float InverseLerp(float A, float B, float result);
    // static public System.Double InverseLerp(System.Double A, System.Double B, System.Double result)
    // Offset: 0x1705230
    static double InverseLerp(double A, double B, double result);
    // static public System.Single Saturate(System.Single A)
    // Offset: 0x1705240
    static float Saturate(float A);
    // static public UnityEngine.Vector2 Saturate(UnityEngine.Vector2 A)
    // Offset: 0x170525C
    static UnityEngine::Vector2 Saturate(UnityEngine::Vector2 A);
    // static public System.Single Abs(System.Single A)
    // Offset: 0x17052A8
    static float Abs(float A);
    // static public UnityEngine.Vector2 Abs(UnityEngine.Vector2 A)
    // Offset: 0x17052B8
    static UnityEngine::Vector2 Abs(UnityEngine::Vector2 A);
    // static private System.Single _copysign(System.Single sizeval, System.Single signval)
    // Offset: 0x17052FC
    static float _copysign(float sizeval, float signval);
    // static public UnityEngine.Quaternion GetRotation(UnityEngine.Matrix4x4 matrix)
    // Offset: 0x17053B8
    static UnityEngine::Quaternion GetRotation(UnityEngine::Matrix4x4 matrix);
    // static public UnityEngine.Vector3 GetPosition(UnityEngine.Matrix4x4 matrix)
    // Offset: 0x1705584
    static UnityEngine::Vector3 GetPosition(UnityEngine::Matrix4x4 matrix);
    // static public UnityEngine.Vector3 GetScale(UnityEngine.Matrix4x4 m)
    // Offset: 0x17055C0
    static UnityEngine::Vector3 GetScale(UnityEngine::Matrix4x4 m);
    // static public System.Object CallSystemFn(SteamVR_Utils/SystemFn fn, params System.Object[] args)
    // Offset: 0x17056F8
    static ::Il2CppObject* CallSystemFn(GlobalNamespace::SteamVR_Utils::SystemFn* fn, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Object CallSystemFn(SteamVR_Utils/SystemFn fn, params System.Object[] args)
    static ::Il2CppObject* CallSystemFn(GlobalNamespace::SteamVR_Utils::SystemFn* fn, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Object CallSystemFn(SteamVR_Utils/SystemFn fn, params System.Object[] args)
    template<class ...TParams>
    static ::Il2CppObject* CallSystemFn(GlobalNamespace::SteamVR_Utils::SystemFn* fn, TParams&&... args) {
      return CallSystemFn(fn, {args...});
    }
    // static public System.Void TakeStereoScreenshot(System.UInt32 screenshotHandle, UnityEngine.GameObject target, System.Int32 cellSize, System.Single ipd, ref System.String previewFilename, ref System.String VRFilename)
    // Offset: 0x1705C4C
    static void TakeStereoScreenshot(uint screenshotHandle, UnityEngine::GameObject* target, int cellSize, float ipd, ByRef<::Il2CppString*> previewFilename, ByRef<::Il2CppString*> VRFilename);
  }; // SteamVR_Utils
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_Utils*, "", "SteamVR_Utils");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::Slerp
// Il2CppName: Slerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(UnityEngine::Quaternion, UnityEngine::Quaternion, float)>(&GlobalNamespace::SteamVR_Utils::Slerp)> {
  static const MethodInfo* get() {
    static auto* A = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* B = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Utils*), "Slerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{A, B, t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::Lerp
// Il2CppName: Lerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Vector3, UnityEngine::Vector3, float)>(&GlobalNamespace::SteamVR_Utils::Lerp)> {
  static const MethodInfo* get() {
    static auto* A = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* B = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Utils*), "Lerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{A, B, t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::Lerp
// Il2CppName: Lerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&GlobalNamespace::SteamVR_Utils::Lerp)> {
  static const MethodInfo* get() {
    static auto* A = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* B = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Utils*), "Lerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{A, B, t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::Lerp
// Il2CppName: Lerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double, double, double)>(&GlobalNamespace::SteamVR_Utils::Lerp)> {
  static const MethodInfo* get() {
    static auto* A = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* B = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Utils*), "Lerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{A, B, t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::InverseLerp
// Il2CppName: InverseLerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3)>(&GlobalNamespace::SteamVR_Utils::InverseLerp)> {
  static const MethodInfo* get() {
    static auto* A = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* B = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Utils*), "InverseLerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{A, B, result});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::InverseLerp
// Il2CppName: InverseLerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&GlobalNamespace::SteamVR_Utils::InverseLerp)> {
  static const MethodInfo* get() {
    static auto* A = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* B = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Utils*), "InverseLerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{A, B, result});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::InverseLerp
// Il2CppName: InverseLerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double, double, double)>(&GlobalNamespace::SteamVR_Utils::InverseLerp)> {
  static const MethodInfo* get() {
    static auto* A = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* B = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Utils*), "InverseLerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{A, B, result});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::Saturate
// Il2CppName: Saturate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::SteamVR_Utils::Saturate)> {
  static const MethodInfo* get() {
    static auto* A = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Utils*), "Saturate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{A});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::Saturate
// Il2CppName: Saturate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (*)(UnityEngine::Vector2)>(&GlobalNamespace::SteamVR_Utils::Saturate)> {
  static const MethodInfo* get() {
    static auto* A = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Utils*), "Saturate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{A});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::Abs
// Il2CppName: Abs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::SteamVR_Utils::Abs)> {
  static const MethodInfo* get() {
    static auto* A = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Utils*), "Abs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{A});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::Abs
// Il2CppName: Abs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (*)(UnityEngine::Vector2)>(&GlobalNamespace::SteamVR_Utils::Abs)> {
  static const MethodInfo* get() {
    static auto* A = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Utils*), "Abs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{A});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::_copysign
// Il2CppName: _copysign
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float)>(&GlobalNamespace::SteamVR_Utils::_copysign)> {
  static const MethodInfo* get() {
    static auto* sizeval = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* signval = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Utils*), "_copysign", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sizeval, signval});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::GetRotation
// Il2CppName: GetRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(UnityEngine::Matrix4x4)>(&GlobalNamespace::SteamVR_Utils::GetRotation)> {
  static const MethodInfo* get() {
    static auto* matrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Utils*), "GetRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{matrix});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::GetPosition
// Il2CppName: GetPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Matrix4x4)>(&GlobalNamespace::SteamVR_Utils::GetPosition)> {
  static const MethodInfo* get() {
    static auto* matrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Utils*), "GetPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{matrix});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::GetScale
// Il2CppName: GetScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Matrix4x4)>(&GlobalNamespace::SteamVR_Utils::GetScale)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Utils*), "GetScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::CallSystemFn
// Il2CppName: CallSystemFn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(GlobalNamespace::SteamVR_Utils::SystemFn*, ::Array<::Il2CppObject*>*)>(&GlobalNamespace::SteamVR_Utils::CallSystemFn)> {
  static const MethodInfo* get() {
    static auto* fn = &::il2cpp_utils::GetClassFromName("", "SteamVR_Utils/SystemFn")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Utils*), "CallSystemFn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fn, args});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::TakeStereoScreenshot
// Il2CppName: TakeStereoScreenshot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint, UnityEngine::GameObject*, int, float, ByRef<::Il2CppString*>, ByRef<::Il2CppString*>)>(&GlobalNamespace::SteamVR_Utils::TakeStereoScreenshot)> {
  static const MethodInfo* get() {
    static auto* screenshotHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* cellSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ipd = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* previewFilename = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* VRFilename = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Utils*), "TakeStereoScreenshot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{screenshotHandle, target, cellSize, ipd, previewFilename, VRFilename});
  }
};
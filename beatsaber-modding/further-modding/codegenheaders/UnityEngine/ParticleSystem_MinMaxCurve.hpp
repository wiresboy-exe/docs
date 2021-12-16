// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ParticleSystem
#include "UnityEngine/ParticleSystem.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.ParticleSystemCurveMode
#include "UnityEngine/ParticleSystemCurveMode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ParticleSystem/UnityEngine.MinMaxCurve
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeTypeAttribute] Offset: DE6334
  struct ParticleSystem::MinMaxCurve/*, public System::ValueType*/ {
    public:
    // private UnityEngine.ParticleSystemCurveMode m_Mode
    // Size: 0x4
    // Offset: 0x0
    UnityEngine::ParticleSystemCurveMode m_Mode;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystemCurveMode) == 0x4);
    // private System.Single m_CurveMultiplier
    // Size: 0x4
    // Offset: 0x4
    float m_CurveMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.AnimationCurve m_CurveMin
    // Size: 0x8
    // Offset: 0x8
    UnityEngine::AnimationCurve* m_CurveMin;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.AnimationCurve m_CurveMax
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::AnimationCurve* m_CurveMax;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private System.Single m_ConstantMin
    // Size: 0x4
    // Offset: 0x18
    float m_ConstantMin;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_ConstantMax
    // Size: 0x4
    // Offset: 0x1C
    float m_ConstantMax;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: MinMaxCurve
    constexpr MinMaxCurve(UnityEngine::ParticleSystemCurveMode m_Mode_ = {}, float m_CurveMultiplier_ = {}, UnityEngine::AnimationCurve* m_CurveMin_ = {}, UnityEngine::AnimationCurve* m_CurveMax_ = {}, float m_ConstantMin_ = {}, float m_ConstantMax_ = {}) noexcept : m_Mode{m_Mode_}, m_CurveMultiplier{m_CurveMultiplier_}, m_CurveMin{m_CurveMin_}, m_CurveMax{m_CurveMax_}, m_ConstantMin{m_ConstantMin_}, m_ConstantMax{m_ConstantMax_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: private UnityEngine.ParticleSystemCurveMode m_Mode
    UnityEngine::ParticleSystemCurveMode& dyn_m_Mode();
    // Get instance field reference: private System.Single m_CurveMultiplier
    float& dyn_m_CurveMultiplier();
    // Get instance field reference: private UnityEngine.AnimationCurve m_CurveMin
    UnityEngine::AnimationCurve*& dyn_m_CurveMin();
    // Get instance field reference: private UnityEngine.AnimationCurve m_CurveMax
    UnityEngine::AnimationCurve*& dyn_m_CurveMax();
    // Get instance field reference: private System.Single m_ConstantMin
    float& dyn_m_ConstantMin();
    // Get instance field reference: private System.Single m_ConstantMax
    float& dyn_m_ConstantMax();
    // public System.Void set_constantMax(System.Single value)
    // Offset: 0x2412D10
    void set_constantMax(float value);
    // public System.Void set_constantMin(System.Single value)
    // Offset: 0x2412D18
    void set_constantMin(float value);
    // public System.Single get_constant()
    // Offset: 0x2412D20
    float get_constant();
    // public System.Void .ctor(System.Single constant)
    // Offset: 0x2412CE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    MinMaxCurve(float constant) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ParticleSystem::MinMaxCurve::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(constant)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, constant);
    }
    // public System.Void .ctor(System.Single min, System.Single max)
    // Offset: 0x2412CF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    MinMaxCurve(float min, float max) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ParticleSystem::MinMaxCurve::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(min), ::il2cpp_utils::ExtractType(max)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, min, max);
    }
  }; // UnityEngine.ParticleSystem/UnityEngine.MinMaxCurve
  #pragma pack(pop)
  static check_size<sizeof(ParticleSystem::MinMaxCurve), 28 + sizeof(float)> __UnityEngine_ParticleSystem_MinMaxCurveSizeCheck;
  static_assert(sizeof(ParticleSystem::MinMaxCurve) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ParticleSystem::MinMaxCurve, "UnityEngine", "ParticleSystem/MinMaxCurve");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MinMaxCurve::set_constantMax
// Il2CppName: set_constantMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::MinMaxCurve::*)(float)>(&UnityEngine::ParticleSystem::MinMaxCurve::set_constantMax)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MinMaxCurve), "set_constantMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MinMaxCurve::set_constantMin
// Il2CppName: set_constantMin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::MinMaxCurve::*)(float)>(&UnityEngine::ParticleSystem::MinMaxCurve::set_constantMin)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MinMaxCurve), "set_constantMin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MinMaxCurve::get_constant
// Il2CppName: get_constant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ParticleSystem::MinMaxCurve::*)()>(&UnityEngine::ParticleSystem::MinMaxCurve::get_constant)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MinMaxCurve), "get_constant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MinMaxCurve::MinMaxCurve
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MinMaxCurve::MinMaxCurve
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
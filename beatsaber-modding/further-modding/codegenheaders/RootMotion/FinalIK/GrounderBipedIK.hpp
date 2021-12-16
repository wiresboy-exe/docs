// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.Grounder
#include "RootMotion/FinalIK/Grounder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: BipedIK
  class BipedIK;
  // Forward declaring type: IKSolverLimb
  class IKSolverLimb;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.GrounderBipedIK
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: E2A1C4
  // [AddComponentMenu] Offset: E2A1C4
  class GrounderBipedIK : public RootMotion::FinalIK::Grounder {
    public:
    // Writing base type padding for base size: 0x39 to desired offset: 0x40
    char ___base_padding[0x7] = {};
    // [TooltipAttribute] Offset: 0xE2B524
    // public RootMotion.FinalIK.BipedIK ik
    // Size: 0x8
    // Offset: 0x40
    RootMotion::FinalIK::BipedIK* ik;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::BipedIK*) == 0x8);
    // [TooltipAttribute] Offset: 0xE2B55C
    // public System.Single spineBend
    // Size: 0x4
    // Offset: 0x48
    float spineBend;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE2B594
    // public System.Single spineSpeed
    // Size: 0x4
    // Offset: 0x4C
    float spineSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Transform[] feet
    // Size: 0x8
    // Offset: 0x50
    ::Array<UnityEngine::Transform*>* feet;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Transform*>*) == 0x8);
    // private UnityEngine.Quaternion[] footRotations
    // Size: 0x8
    // Offset: 0x58
    ::Array<UnityEngine::Quaternion>* footRotations;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Quaternion>*) == 0x8);
    // private UnityEngine.Vector3 animatedPelvisLocalPosition
    // Size: 0xC
    // Offset: 0x60
    UnityEngine::Vector3 animatedPelvisLocalPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 solvedPelvisLocalPosition
    // Size: 0xC
    // Offset: 0x6C
    UnityEngine::Vector3 solvedPelvisLocalPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 spineOffset
    // Size: 0xC
    // Offset: 0x78
    UnityEngine::Vector3 spineOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single lastWeight
    // Size: 0x4
    // Offset: 0x84
    float lastWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: GrounderBipedIK
    GrounderBipedIK(RootMotion::FinalIK::BipedIK* ik_ = {}, float spineBend_ = {}, float spineSpeed_ = {}, ::Array<UnityEngine::Transform*>* feet_ = {}, ::Array<UnityEngine::Quaternion>* footRotations_ = {}, UnityEngine::Vector3 animatedPelvisLocalPosition_ = {}, UnityEngine::Vector3 solvedPelvisLocalPosition_ = {}, UnityEngine::Vector3 spineOffset_ = {}, float lastWeight_ = {}) noexcept : ik{ik_}, spineBend{spineBend_}, spineSpeed{spineSpeed_}, feet{feet_}, footRotations{footRotations_}, animatedPelvisLocalPosition{animatedPelvisLocalPosition_}, solvedPelvisLocalPosition{solvedPelvisLocalPosition_}, spineOffset{spineOffset_}, lastWeight{lastWeight_} {}
    // Get instance field reference: public RootMotion.FinalIK.BipedIK ik
    RootMotion::FinalIK::BipedIK*& dyn_ik();
    // Get instance field reference: public System.Single spineBend
    float& dyn_spineBend();
    // Get instance field reference: public System.Single spineSpeed
    float& dyn_spineSpeed();
    // Get instance field reference: private UnityEngine.Transform[] feet
    ::Array<UnityEngine::Transform*>*& dyn_feet();
    // Get instance field reference: private UnityEngine.Quaternion[] footRotations
    ::Array<UnityEngine::Quaternion>*& dyn_footRotations();
    // Get instance field reference: private UnityEngine.Vector3 animatedPelvisLocalPosition
    UnityEngine::Vector3& dyn_animatedPelvisLocalPosition();
    // Get instance field reference: private UnityEngine.Vector3 solvedPelvisLocalPosition
    UnityEngine::Vector3& dyn_solvedPelvisLocalPosition();
    // Get instance field reference: private UnityEngine.Vector3 spineOffset
    UnityEngine::Vector3& dyn_spineOffset();
    // Get instance field reference: private System.Single lastWeight
    float& dyn_lastWeight();
    // private System.Boolean IsReadyToInitiate()
    // Offset: 0x1CC4CAC
    bool IsReadyToInitiate();
    // private System.Void Update()
    // Offset: 0x1CC4D5C
    void Update();
    // private System.Void Initiate()
    // Offset: 0x1CC4E10
    void Initiate();
    // private System.Void OnDisable()
    // Offset: 0x1CC5324
    void OnDisable();
    // private System.Void OnSolverUpdate()
    // Offset: 0x1CC5378
    void OnSolverUpdate();
    // private System.Void SetLegIK(RootMotion.FinalIK.IKSolverLimb limb, System.Int32 index)
    // Offset: 0x1CC5B2C
    void SetLegIK(RootMotion::FinalIK::IKSolverLimb* limb, int index);
    // private System.Void OnPostSolverUpdate()
    // Offset: 0x1CC5C8C
    void OnPostSolverUpdate();
    // private System.Void OnDestroy()
    // Offset: 0x1CC5E1C
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x1CC5F8C
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GrounderBipedIK* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::GrounderBipedIK::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GrounderBipedIK*, creationType>()));
    }
    // protected override System.Void OpenUserManual()
    // Offset: 0x1CC4B10
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::OpenUserManual()
    void OpenUserManual();
    // protected override System.Void OpenScriptReference()
    // Offset: 0x1CC4B5C
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::OpenScriptReference()
    void OpenScriptReference();
    // public override System.Void ResetPosition()
    // Offset: 0x1CC4BA8
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::ResetPosition()
    void ResetPosition();
  }; // RootMotion.FinalIK.GrounderBipedIK
  #pragma pack(pop)
  static check_size<sizeof(GrounderBipedIK), 132 + sizeof(float)> __RootMotion_FinalIK_GrounderBipedIKSizeCheck;
  static_assert(sizeof(GrounderBipedIK) == 0x88);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::GrounderBipedIK*, "RootMotion.FinalIK", "GrounderBipedIK");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderBipedIK::IsReadyToInitiate
// Il2CppName: IsReadyToInitiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::GrounderBipedIK::*)()>(&RootMotion::FinalIK::GrounderBipedIK::IsReadyToInitiate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderBipedIK*), "IsReadyToInitiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderBipedIK::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderBipedIK::*)()>(&RootMotion::FinalIK::GrounderBipedIK::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderBipedIK*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderBipedIK::Initiate
// Il2CppName: Initiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderBipedIK::*)()>(&RootMotion::FinalIK::GrounderBipedIK::Initiate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderBipedIK*), "Initiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderBipedIK::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderBipedIK::*)()>(&RootMotion::FinalIK::GrounderBipedIK::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderBipedIK*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderBipedIK::OnSolverUpdate
// Il2CppName: OnSolverUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderBipedIK::*)()>(&RootMotion::FinalIK::GrounderBipedIK::OnSolverUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderBipedIK*), "OnSolverUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderBipedIK::SetLegIK
// Il2CppName: SetLegIK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderBipedIK::*)(RootMotion::FinalIK::IKSolverLimb*, int)>(&RootMotion::FinalIK::GrounderBipedIK::SetLegIK)> {
  static const MethodInfo* get() {
    static auto* limb = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverLimb")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderBipedIK*), "SetLegIK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{limb, index});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderBipedIK::OnPostSolverUpdate
// Il2CppName: OnPostSolverUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderBipedIK::*)()>(&RootMotion::FinalIK::GrounderBipedIK::OnPostSolverUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderBipedIK*), "OnPostSolverUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderBipedIK::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderBipedIK::*)()>(&RootMotion::FinalIK::GrounderBipedIK::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderBipedIK*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderBipedIK::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderBipedIK::OpenUserManual
// Il2CppName: OpenUserManual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderBipedIK::*)()>(&RootMotion::FinalIK::GrounderBipedIK::OpenUserManual)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderBipedIK*), "OpenUserManual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderBipedIK::OpenScriptReference
// Il2CppName: OpenScriptReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderBipedIK::*)()>(&RootMotion::FinalIK::GrounderBipedIK::OpenScriptReference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderBipedIK*), "OpenScriptReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderBipedIK::ResetPosition
// Il2CppName: ResetPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderBipedIK::*)()>(&RootMotion::FinalIK::GrounderBipedIK::ResetPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderBipedIK*), "ResetPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
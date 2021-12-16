// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.HitReactionVRIK
#include "RootMotion/FinalIK/HitReactionVRIK.hpp"
// Including type: RootMotion.FinalIK.HitReactionVRIK/RootMotion.FinalIK.Offset
#include "RootMotion/FinalIK/HitReactionVRIK_Offset.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: VRIK
  class VRIK;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.HitReactionVRIK/RootMotion.FinalIK.PositionOffset
  // [TokenAttribute] Offset: FFFFFFFF
  class HitReactionVRIK::PositionOffset : public RootMotion::FinalIK::HitReactionVRIK::Offset {
    public:
    // Nested type: RootMotion::FinalIK::HitReactionVRIK::PositionOffset::PositionOffsetLink
    class PositionOffsetLink;
    // [TooltipAttribute] Offset: 0xE30B04
    // public System.Int32 forceDirCurveIndex
    // Size: 0x4
    // Offset: 0x50
    int forceDirCurveIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [TooltipAttribute] Offset: 0xE30B3C
    // public System.Int32 upDirCurveIndex
    // Size: 0x4
    // Offset: 0x54
    int upDirCurveIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [TooltipAttribute] Offset: 0xE30B74
    // public RootMotion.FinalIK.HitReactionVRIK/RootMotion.FinalIK.PositionOffset/RootMotion.FinalIK.PositionOffsetLink[] offsetLinks
    // Size: 0x8
    // Offset: 0x58
    ::Array<RootMotion::FinalIK::HitReactionVRIK::PositionOffset::PositionOffsetLink*>* offsetLinks;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::HitReactionVRIK::PositionOffset::PositionOffsetLink*>*) == 0x8);
    // Creating value type constructor for type: PositionOffset
    PositionOffset(int forceDirCurveIndex_ = {}, int upDirCurveIndex_ = {}, ::Array<RootMotion::FinalIK::HitReactionVRIK::PositionOffset::PositionOffsetLink*>* offsetLinks_ = {}) noexcept : forceDirCurveIndex{forceDirCurveIndex_}, upDirCurveIndex{upDirCurveIndex_}, offsetLinks{offsetLinks_} {}
    // Get instance field reference: public System.Int32 forceDirCurveIndex
    int& dyn_forceDirCurveIndex();
    // Get instance field reference: public System.Int32 upDirCurveIndex
    int& dyn_upDirCurveIndex();
    // Get instance field reference: public RootMotion.FinalIK.HitReactionVRIK/RootMotion.FinalIK.PositionOffset/RootMotion.FinalIK.PositionOffsetLink[] offsetLinks
    ::Array<RootMotion::FinalIK::HitReactionVRIK::PositionOffset::PositionOffsetLink*>*& dyn_offsetLinks();
    // public System.Void .ctor()
    // Offset: 0x1CD0710
    // Implemented from: RootMotion.FinalIK.HitReactionVRIK/RootMotion.FinalIK.Offset
    // Base method: System.Void Offset::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HitReactionVRIK::PositionOffset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::HitReactionVRIK::PositionOffset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HitReactionVRIK::PositionOffset*, creationType>()));
    }
    // protected override System.Single GetLength(UnityEngine.AnimationCurve[] curves)
    // Offset: 0x1CD0168
    // Implemented from: RootMotion.FinalIK.HitReactionVRIK/RootMotion.FinalIK.Offset
    // Base method: System.Single Offset::GetLength(UnityEngine.AnimationCurve[] curves)
    float GetLength(::Array<UnityEngine::AnimationCurve*>* curves);
    // protected override System.Void CrossFadeStart()
    // Offset: 0x1CD0360
    // Implemented from: RootMotion.FinalIK.HitReactionVRIK/RootMotion.FinalIK.Offset
    // Base method: System.Void Offset::CrossFadeStart()
    void CrossFadeStart();
    // protected override System.Void OnApply(RootMotion.FinalIK.VRIK ik, UnityEngine.AnimationCurve[] curves, System.Single weight)
    // Offset: 0x1CD03E0
    // Implemented from: RootMotion.FinalIK.HitReactionVRIK/RootMotion.FinalIK.Offset
    // Base method: System.Void Offset::OnApply(RootMotion.FinalIK.VRIK ik, UnityEngine.AnimationCurve[] curves, System.Single weight)
    void OnApply(RootMotion::FinalIK::VRIK* ik, ::Array<UnityEngine::AnimationCurve*>* curves, float weight);
  }; // RootMotion.FinalIK.HitReactionVRIK/RootMotion.FinalIK.PositionOffset
  #pragma pack(pop)
  static check_size<sizeof(HitReactionVRIK::PositionOffset), 88 + sizeof(::Array<RootMotion::FinalIK::HitReactionVRIK::PositionOffset::PositionOffsetLink*>*)> __RootMotion_FinalIK_HitReactionVRIK_PositionOffsetSizeCheck;
  static_assert(sizeof(HitReactionVRIK::PositionOffset) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::HitReactionVRIK::PositionOffset*, "RootMotion.FinalIK", "HitReactionVRIK/PositionOffset");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReactionVRIK::PositionOffset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReactionVRIK::PositionOffset::GetLength
// Il2CppName: GetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::HitReactionVRIK::PositionOffset::*)(::Array<UnityEngine::AnimationCurve*>*)>(&RootMotion::FinalIK::HitReactionVRIK::PositionOffset::GetLength)> {
  static const MethodInfo* get() {
    static auto* curves = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReactionVRIK::PositionOffset*), "GetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{curves});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReactionVRIK::PositionOffset::CrossFadeStart
// Il2CppName: CrossFadeStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HitReactionVRIK::PositionOffset::*)()>(&RootMotion::FinalIK::HitReactionVRIK::PositionOffset::CrossFadeStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReactionVRIK::PositionOffset*), "CrossFadeStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReactionVRIK::PositionOffset::OnApply
// Il2CppName: OnApply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HitReactionVRIK::PositionOffset::*)(RootMotion::FinalIK::VRIK*, ::Array<UnityEngine::AnimationCurve*>*, float)>(&RootMotion::FinalIK::HitReactionVRIK::PositionOffset::OnApply)> {
  static const MethodInfo* get() {
    static auto* ik = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "VRIK")->byval_arg;
    static auto* curves = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve"), 1)->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReactionVRIK::PositionOffset*), "OnApply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ik, curves, weight});
  }
};
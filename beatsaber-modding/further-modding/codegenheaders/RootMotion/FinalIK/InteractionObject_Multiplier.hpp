// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.InteractionObject
#include "RootMotion/FinalIK/InteractionObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.InteractionObject/RootMotion.FinalIK.Multiplier
  // [TokenAttribute] Offset: FFFFFFFF
  class InteractionObject::Multiplier : public ::Il2CppObject {
    public:
    // [TooltipAttribute] Offset: 0xE30170
    // public RootMotion.FinalIK.InteractionObject/RootMotion.FinalIK.WeightCurve/RootMotion.FinalIK.Type curve
    // Size: 0x4
    // Offset: 0x10
    RootMotion::FinalIK::InteractionObject::WeightCurve::Type curve;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::InteractionObject::WeightCurve::Type) == 0x4);
    // [TooltipAttribute] Offset: 0xE301A8
    // public System.Single multiplier
    // Size: 0x4
    // Offset: 0x14
    float multiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE301E0
    // public RootMotion.FinalIK.InteractionObject/RootMotion.FinalIK.WeightCurve/RootMotion.FinalIK.Type result
    // Size: 0x4
    // Offset: 0x18
    RootMotion::FinalIK::InteractionObject::WeightCurve::Type result;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::InteractionObject::WeightCurve::Type) == 0x4);
    // Creating value type constructor for type: Multiplier
    Multiplier(RootMotion::FinalIK::InteractionObject::WeightCurve::Type curve_ = {}, float multiplier_ = {}, RootMotion::FinalIK::InteractionObject::WeightCurve::Type result_ = {}) noexcept : curve{curve_}, multiplier{multiplier_}, result{result_} {}
    // Get instance field reference: public RootMotion.FinalIK.InteractionObject/RootMotion.FinalIK.WeightCurve/RootMotion.FinalIK.Type curve
    RootMotion::FinalIK::InteractionObject::WeightCurve::Type& dyn_curve();
    // Get instance field reference: public System.Single multiplier
    float& dyn_multiplier();
    // Get instance field reference: public RootMotion.FinalIK.InteractionObject/RootMotion.FinalIK.WeightCurve/RootMotion.FinalIK.Type result
    RootMotion::FinalIK::InteractionObject::WeightCurve::Type& dyn_result();
    // public System.Single GetValue(RootMotion.FinalIK.InteractionObject/RootMotion.FinalIK.WeightCurve weightCurve, System.Single timer)
    // Offset: 0x1E90A00
    float GetValue(RootMotion::FinalIK::InteractionObject::WeightCurve* weightCurve, float timer);
    // public System.Void .ctor()
    // Offset: 0x1E90EA8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteractionObject::Multiplier* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::InteractionObject::Multiplier::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteractionObject::Multiplier*, creationType>()));
    }
  }; // RootMotion.FinalIK.InteractionObject/RootMotion.FinalIK.Multiplier
  #pragma pack(pop)
  static check_size<sizeof(InteractionObject::Multiplier), 24 + sizeof(RootMotion::FinalIK::InteractionObject::WeightCurve::Type)> __RootMotion_FinalIK_InteractionObject_MultiplierSizeCheck;
  static_assert(sizeof(InteractionObject::Multiplier) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::InteractionObject::Multiplier*, "RootMotion.FinalIK", "InteractionObject/Multiplier");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionObject::Multiplier::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::InteractionObject::Multiplier::*)(RootMotion::FinalIK::InteractionObject::WeightCurve*, float)>(&RootMotion::FinalIK::InteractionObject::Multiplier::GetValue)> {
  static const MethodInfo* get() {
    static auto* weightCurve = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "InteractionObject/WeightCurve")->byval_arg;
    static auto* timer = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionObject::Multiplier*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{weightCurve, timer});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionObject::Multiplier::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
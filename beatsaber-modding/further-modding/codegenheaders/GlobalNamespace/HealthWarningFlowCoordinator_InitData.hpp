// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HealthWarningFlowCoordinator
#include "GlobalNamespace/HealthWarningFlowCoordinator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ScenesTransitionSetupDataSO
  class ScenesTransitionSetupDataSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: HealthWarningFlowCoordinator/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class HealthWarningFlowCoordinator::InitData : public ::Il2CppObject {
    public:
    // public readonly ScenesTransitionSetupDataSO nextScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ScenesTransitionSetupDataSO*) == 0x8);
    // Creating value type constructor for type: InitData
    InitData(GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData_ = {}) noexcept : nextScenesTransitionSetupData{nextScenesTransitionSetupData_} {}
    // Creating conversion operator: operator GlobalNamespace::ScenesTransitionSetupDataSO*
    constexpr operator GlobalNamespace::ScenesTransitionSetupDataSO*() const noexcept {
      return nextScenesTransitionSetupData;
    }
    // Get instance field reference: public readonly ScenesTransitionSetupDataSO nextScenesTransitionSetupData
    GlobalNamespace::ScenesTransitionSetupDataSO*& dyn_nextScenesTransitionSetupData();
    // public System.Void .ctor(ScenesTransitionSetupDataSO nextScenesTransitionSetupData)
    // Offset: 0x1186A54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HealthWarningFlowCoordinator::InitData* New_ctor(GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HealthWarningFlowCoordinator::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HealthWarningFlowCoordinator::InitData*, creationType>(nextScenesTransitionSetupData)));
    }
  }; // HealthWarningFlowCoordinator/InitData
  #pragma pack(pop)
  static check_size<sizeof(HealthWarningFlowCoordinator::InitData), 16 + sizeof(GlobalNamespace::ScenesTransitionSetupDataSO*)> __GlobalNamespace_HealthWarningFlowCoordinator_InitDataSizeCheck;
  static_assert(sizeof(HealthWarningFlowCoordinator::InitData) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HealthWarningFlowCoordinator::InitData*, "", "HealthWarningFlowCoordinator/InitData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningFlowCoordinator::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
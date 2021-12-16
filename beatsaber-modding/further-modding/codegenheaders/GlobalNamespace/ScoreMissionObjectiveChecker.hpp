// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: SimpleValueMissionObjectiveChecker
#include "GlobalNamespace/SimpleValueMissionObjectiveChecker.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IScoreController
  class IScoreController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: ScoreMissionObjectiveChecker
  // [TokenAttribute] Offset: FFFFFFFF
  class ScoreMissionObjectiveChecker : public GlobalNamespace::SimpleValueMissionObjectiveChecker {
    public:
    // Writing base type padding for base size: 0x41 to desired offset: 0x48
    char ___base_padding[0x7] = {};
    // [InjectAttribute] Offset: 0xE3F824
    // private IScoreController _scoreController
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::IScoreController* scoreController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IScoreController*) == 0x8);
    // Creating value type constructor for type: ScoreMissionObjectiveChecker
    ScoreMissionObjectiveChecker(GlobalNamespace::IScoreController* scoreController_ = {}) noexcept : scoreController{scoreController_} {}
    // Get instance field reference: private IScoreController _scoreController
    GlobalNamespace::IScoreController*& dyn__scoreController();
    // protected System.Void OnDestroy()
    // Offset: 0x1137DCC
    void OnDestroy();
    // private System.Void HandleScoreDidChange(System.Int32 rawScore, System.Int32 modifiedScore)
    // Offset: 0x1137ECC
    void HandleScoreDidChange(int rawScore, int modifiedScore);
    // public System.Void .ctor()
    // Offset: 0x11380B8
    // Implemented from: SimpleValueMissionObjectiveChecker
    // Base method: System.Void SimpleValueMissionObjectiveChecker::.ctor()
    // Base method: System.Void MissionObjectiveChecker::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScoreMissionObjectiveChecker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ScoreMissionObjectiveChecker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScoreMissionObjectiveChecker*, creationType>()));
    }
    // protected override System.Void Init()
    // Offset: 0x1137EF8
    // Implemented from: MissionObjectiveChecker
    // Base method: System.Void MissionObjectiveChecker::Init()
    void Init();
  }; // ScoreMissionObjectiveChecker
  #pragma pack(pop)
  static check_size<sizeof(ScoreMissionObjectiveChecker), 72 + sizeof(GlobalNamespace::IScoreController*)> __GlobalNamespace_ScoreMissionObjectiveCheckerSizeCheck;
  static_assert(sizeof(ScoreMissionObjectiveChecker) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScoreMissionObjectiveChecker*, "", "ScoreMissionObjectiveChecker");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ScoreMissionObjectiveChecker::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreMissionObjectiveChecker::*)()>(&GlobalNamespace::ScoreMissionObjectiveChecker::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreMissionObjectiveChecker*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreMissionObjectiveChecker::HandleScoreDidChange
// Il2CppName: HandleScoreDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreMissionObjectiveChecker::*)(int, int)>(&GlobalNamespace::ScoreMissionObjectiveChecker::HandleScoreDidChange)> {
  static const MethodInfo* get() {
    static auto* rawScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* modifiedScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreMissionObjectiveChecker*), "HandleScoreDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rawScore, modifiedScore});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreMissionObjectiveChecker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ScoreMissionObjectiveChecker::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreMissionObjectiveChecker::*)()>(&GlobalNamespace::ScoreMissionObjectiveChecker::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreMissionObjectiveChecker*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
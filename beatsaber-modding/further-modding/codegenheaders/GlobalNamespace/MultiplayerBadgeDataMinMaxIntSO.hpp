// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MultiplayerBadgeDataSO
#include "GlobalNamespace/MultiplayerBadgeDataSO.hpp"
// Including type: MultiplayerBadgeMinMax
#include "GlobalNamespace/MultiplayerBadgeMinMax.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerPlayerResultsData
  class MultiplayerPlayerResultsData;
  // Forward declaring type: MultiplayerBadgeAwardData
  class MultiplayerBadgeAwardData;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerBadgeDataMinMaxIntSO
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerBadgeDataMinMaxIntSO : public GlobalNamespace::MultiplayerBadgeDataSO {
    public:
    // [SpaceAttribute] Offset: 0xE3F88C
    // private MultiplayerBadgeMinMax _minMax
    // Size: 0x4
    // Offset: 0x30
    GlobalNamespace::MultiplayerBadgeMinMax minMax;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerBadgeMinMax) == 0x4);
    // private System.Single _weightMultiplier
    // Size: 0x4
    // Offset: 0x34
    float weightMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: MultiplayerBadgeDataMinMaxIntSO
    MultiplayerBadgeDataMinMaxIntSO(GlobalNamespace::MultiplayerBadgeMinMax minMax_ = {}, float weightMultiplier_ = {}) noexcept : minMax{minMax_}, weightMultiplier{weightMultiplier_} {}
    // Get instance field reference: private MultiplayerBadgeMinMax _minMax
    GlobalNamespace::MultiplayerBadgeMinMax& dyn__minMax();
    // Get instance field reference: private System.Single _weightMultiplier
    float& dyn__weightMultiplier();
    // protected System.Int32 GetValue(MultiplayerPlayerResultsData result)
    // Offset: 0xFFFFFFFF
    int GetValue(GlobalNamespace::MultiplayerPlayerResultsData* result);
    // private MultiplayerBadgeAwardData CalculateMax(System.Collections.Generic.IReadOnlyList`1<MultiplayerPlayerResultsData> resultsData, System.Single randomMultiplier)
    // Offset: 0x11C46E8
    GlobalNamespace::MultiplayerBadgeAwardData* CalculateMax(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData*>* resultsData, float randomMultiplier);
    // private MultiplayerBadgeAwardData CalculateMin(System.Collections.Generic.IReadOnlyList`1<MultiplayerPlayerResultsData> resultsData, System.Single randomMultiplier)
    // Offset: 0x11C4B78
    GlobalNamespace::MultiplayerBadgeAwardData* CalculateMin(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData*>* resultsData, float randomMultiplier);
    // protected System.Void .ctor()
    // Offset: 0x11C390C
    // Implemented from: MultiplayerBadgeDataSO
    // Base method: System.Void MultiplayerBadgeDataSO::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerBadgeDataMinMaxIntSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerBadgeDataMinMaxIntSO*, creationType>()));
    }
    // public override MultiplayerBadgeAwardData CalculateBadgeData(System.Collections.Generic.IReadOnlyList`1<MultiplayerPlayerResultsData> resultsData, PlayerDataModel playerDataModel, IDifficultyBeatmap difficultyBeatmap, System.Single randomMultiplier)
    // Offset: 0x11C46D4
    // Implemented from: MultiplayerBadgeDataSO
    // Base method: MultiplayerBadgeAwardData MultiplayerBadgeDataSO::CalculateBadgeData(System.Collections.Generic.IReadOnlyList`1<MultiplayerPlayerResultsData> resultsData, PlayerDataModel playerDataModel, IDifficultyBeatmap difficultyBeatmap, System.Single randomMultiplier)
    GlobalNamespace::MultiplayerBadgeAwardData* CalculateBadgeData(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData*>* resultsData, GlobalNamespace::PlayerDataModel* playerDataModel, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, float randomMultiplier);
  }; // MultiplayerBadgeDataMinMaxIntSO
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerBadgeDataMinMaxIntSO), 52 + sizeof(float)> __GlobalNamespace_MultiplayerBadgeDataMinMaxIntSOSizeCheck;
  static_assert(sizeof(MultiplayerBadgeDataMinMaxIntSO) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO*, "", "MultiplayerBadgeDataMinMaxIntSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::*)(GlobalNamespace::MultiplayerPlayerResultsData*)>(&GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::GetValue)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("", "MultiplayerPlayerResultsData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::CalculateMax
// Il2CppName: CalculateMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerBadgeAwardData* (GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::*)(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData*>*, float)>(&GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::CalculateMax)> {
  static const MethodInfo* get() {
    static auto* resultsData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerPlayerResultsData")})->byval_arg;
    static auto* randomMultiplier = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO*), "CalculateMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resultsData, randomMultiplier});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::CalculateMin
// Il2CppName: CalculateMin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerBadgeAwardData* (GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::*)(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData*>*, float)>(&GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::CalculateMin)> {
  static const MethodInfo* get() {
    static auto* resultsData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerPlayerResultsData")})->byval_arg;
    static auto* randomMultiplier = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO*), "CalculateMin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resultsData, randomMultiplier});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::CalculateBadgeData
// Il2CppName: CalculateBadgeData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerBadgeAwardData* (GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::*)(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData*>*, GlobalNamespace::PlayerDataModel*, GlobalNamespace::IDifficultyBeatmap*, float)>(&GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::CalculateBadgeData)> {
  static const MethodInfo* get() {
    static auto* resultsData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerPlayerResultsData")})->byval_arg;
    static auto* playerDataModel = &::il2cpp_utils::GetClassFromName("", "PlayerDataModel")->byval_arg;
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    static auto* randomMultiplier = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO*), "CalculateBadgeData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resultsData, playerDataModel, difficultyBeatmap, randomMultiplier});
  }
};
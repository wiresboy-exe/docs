// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: LevelCompletionResults
#include "GlobalNamespace/LevelCompletionResults.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerData
  class PlayerData;
  // Forward declaring type: BeatmapObjectExecutionRating
  class BeatmapObjectExecutionRating;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: GameplayModifiersModelSO
  class GameplayModifiersModelSO;
  // Forward declaring type: PlayerLevelStatsData
  class PlayerLevelStatsData;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: PlatformLeaderboardsModel
  class PlatformLeaderboardsModel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: LevelCompletionResultsHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class LevelCompletionResultsHelper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: LevelCompletionResultsHelper
    LevelCompletionResultsHelper() noexcept {}
    // static public LevelCompletionResults Create(System.Int32 levelNotesCount, BeatmapObjectExecutionRating[] beatmapObjectExecutionRatings, GameplayModifiers gameplayModifiers, GameplayModifiersModelSO gameplayModifiersModel, System.Int32 rawScore, System.Int32 modifiedScore, System.Int32 maxCombo, System.Single[] saberActivityValues, System.Single leftSaberMovementDistance, System.Single rightSaberMovementDistance, System.Single[] handActivityValues, System.Single leftHandMovementDistance, System.Single rightHandMovementDistance, System.Single songDuration, LevelCompletionResults/LevelEndStateType levelEndStateType, LevelCompletionResults/LevelEndAction levelEndAction, System.Single energy, System.Single songTime)
    // Offset: 0x1192B50
    static GlobalNamespace::LevelCompletionResults* Create(int levelNotesCount, ::Array<GlobalNamespace::BeatmapObjectExecutionRating*>* beatmapObjectExecutionRatings, GlobalNamespace::GameplayModifiers* gameplayModifiers, GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel, int rawScore, int modifiedScore, int maxCombo, ::Array<float>* saberActivityValues, float leftSaberMovementDistance, float rightSaberMovementDistance, ::Array<float>* handActivityValues, float leftHandMovementDistance, float rightHandMovementDistance, float songDuration, GlobalNamespace::LevelCompletionResults::LevelEndStateType levelEndStateType, GlobalNamespace::LevelCompletionResults::LevelEndAction levelEndAction, float energy, float songTime);
    // static public System.Void ProcessScore(PlayerData playerData, PlayerLevelStatsData playerLevelStats, LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, PlatformLeaderboardsModel platformLeaderboardsModel)
    // Offset: 0x1193010
    static void ProcessScore(GlobalNamespace::PlayerData* playerData, GlobalNamespace::PlayerLevelStatsData* playerLevelStats, GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::PlatformLeaderboardsModel* platformLeaderboardsModel);
  }; // LevelCompletionResultsHelper
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelCompletionResultsHelper*, "", "LevelCompletionResultsHelper");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LevelCompletionResultsHelper::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::LevelCompletionResults* (*)(int, ::Array<GlobalNamespace::BeatmapObjectExecutionRating*>*, GlobalNamespace::GameplayModifiers*, GlobalNamespace::GameplayModifiersModelSO*, int, int, int, ::Array<float>*, float, float, ::Array<float>*, float, float, float, GlobalNamespace::LevelCompletionResults::LevelEndStateType, GlobalNamespace::LevelCompletionResults::LevelEndAction, float, float)>(&GlobalNamespace::LevelCompletionResultsHelper::Create)> {
  static const MethodInfo* get() {
    static auto* levelNotesCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* beatmapObjectExecutionRatings = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "BeatmapObjectExecutionRating"), 1)->byval_arg;
    static auto* gameplayModifiers = &::il2cpp_utils::GetClassFromName("", "GameplayModifiers")->byval_arg;
    static auto* gameplayModifiersModel = &::il2cpp_utils::GetClassFromName("", "GameplayModifiersModelSO")->byval_arg;
    static auto* rawScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* modifiedScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxCombo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* saberActivityValues = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* leftSaberMovementDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* rightSaberMovementDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* handActivityValues = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* leftHandMovementDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* rightHandMovementDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* songDuration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* levelEndStateType = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults/LevelEndStateType")->byval_arg;
    static auto* levelEndAction = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults/LevelEndAction")->byval_arg;
    static auto* energy = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* songTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCompletionResultsHelper*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelNotesCount, beatmapObjectExecutionRatings, gameplayModifiers, gameplayModifiersModel, rawScore, modifiedScore, maxCombo, saberActivityValues, leftSaberMovementDistance, rightSaberMovementDistance, handActivityValues, leftHandMovementDistance, rightHandMovementDistance, songDuration, levelEndStateType, levelEndAction, energy, songTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCompletionResultsHelper::ProcessScore
// Il2CppName: ProcessScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(GlobalNamespace::PlayerData*, GlobalNamespace::PlayerLevelStatsData*, GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*, GlobalNamespace::PlatformLeaderboardsModel*)>(&GlobalNamespace::LevelCompletionResultsHelper::ProcessScore)> {
  static const MethodInfo* get() {
    static auto* playerData = &::il2cpp_utils::GetClassFromName("", "PlayerData")->byval_arg;
    static auto* playerLevelStats = &::il2cpp_utils::GetClassFromName("", "PlayerLevelStatsData")->byval_arg;
    static auto* levelCompletionResults = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")->byval_arg;
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    static auto* platformLeaderboardsModel = &::il2cpp_utils::GetClassFromName("", "PlatformLeaderboardsModel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCompletionResultsHelper*), "ProcessScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerData, playerLevelStats, levelCompletionResults, difficultyBeatmap, platformLeaderboardsModel});
  }
};
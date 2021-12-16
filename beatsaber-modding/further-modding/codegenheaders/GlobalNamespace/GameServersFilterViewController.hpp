// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapDifficultyDropdown
  class BeatmapDifficultyDropdown;
  // Forward declaring type: GameplayModifiersDropdown
  class GameplayModifiersDropdown;
  // Forward declaring type: SongPacksDropdown
  class SongPacksDropdown;
  // Forward declaring type: GameServersFilter
  class GameServersFilter;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ToggleBinder
  class ToggleBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xD1
  #pragma pack(push, 1)
  // Autogenerated type: GameServersFilterViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class GameServersFilterViewController : public HMUI::ViewController {
    public:
    // [HeaderAttribute] Offset: 0xE4872C
    // private UnityEngine.UI.Toggle _filterByDifficultyToggle
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::UI::Toggle* filterByDifficultyToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.UI.Button _filterByDifficultyButton
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::UI::Button* filterByDifficultyButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private BeatmapDifficultyDropdown _beatmapDifficultyDropdown
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::BeatmapDifficultyDropdown* beatmapDifficultyDropdown;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficultyDropdown*) == 0x8);
    // [HeaderAttribute] Offset: 0xE48798
    // private UnityEngine.UI.Toggle _filterByModifiersToggle
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::UI::Toggle* filterByModifiersToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.UI.Button _filterByModifiersButton
    // Size: 0x8
    // Offset: 0x90
    UnityEngine::UI::Button* filterByModifiersButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private GameplayModifiersDropdown _gameplayModifiersDropdown
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::GameplayModifiersDropdown* gameplayModifiersDropdown;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiersDropdown*) == 0x8);
    // [HeaderAttribute] Offset: 0xE48804
    // private UnityEngine.UI.Toggle _filterBySongsToggle
    // Size: 0x8
    // Offset: 0xA0
    UnityEngine::UI::Toggle* filterBySongsToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.UI.Button _filterBySongsButton
    // Size: 0x8
    // Offset: 0xA8
    UnityEngine::UI::Button* filterBySongsButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private SongPacksDropdown _songPacksDropdown
    // Size: 0x8
    // Offset: 0xB0
    GlobalNamespace::SongPacksDropdown* songPacksDropdown;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPacksDropdown*) == 0x8);
    // [HeaderAttribute] Offset: 0xE48870
    // private UnityEngine.UI.Toggle _showFullToggle
    // Size: 0x8
    // Offset: 0xB8
    UnityEngine::UI::Toggle* showFullToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.UI.Toggle _showPasswordProtectedToggle
    // Size: 0x8
    // Offset: 0xC0
    UnityEngine::UI::Toggle* showPasswordProtectedToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // private readonly HMUI.ToggleBinder _toggleBinder
    // Size: 0x8
    // Offset: 0xC8
    HMUI::ToggleBinder* toggleBinder;
    // Field size check
    static_assert(sizeof(HMUI::ToggleBinder*) == 0x8);
    // private System.Boolean _showInternetGames
    // Size: 0x1
    // Offset: 0xD0
    bool showInternetGames;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: GameServersFilterViewController
    GameServersFilterViewController(UnityEngine::UI::Toggle* filterByDifficultyToggle_ = {}, UnityEngine::UI::Button* filterByDifficultyButton_ = {}, GlobalNamespace::BeatmapDifficultyDropdown* beatmapDifficultyDropdown_ = {}, UnityEngine::UI::Toggle* filterByModifiersToggle_ = {}, UnityEngine::UI::Button* filterByModifiersButton_ = {}, GlobalNamespace::GameplayModifiersDropdown* gameplayModifiersDropdown_ = {}, UnityEngine::UI::Toggle* filterBySongsToggle_ = {}, UnityEngine::UI::Button* filterBySongsButton_ = {}, GlobalNamespace::SongPacksDropdown* songPacksDropdown_ = {}, UnityEngine::UI::Toggle* showFullToggle_ = {}, UnityEngine::UI::Toggle* showPasswordProtectedToggle_ = {}, HMUI::ToggleBinder* toggleBinder_ = {}, bool showInternetGames_ = {}) noexcept : filterByDifficultyToggle{filterByDifficultyToggle_}, filterByDifficultyButton{filterByDifficultyButton_}, beatmapDifficultyDropdown{beatmapDifficultyDropdown_}, filterByModifiersToggle{filterByModifiersToggle_}, filterByModifiersButton{filterByModifiersButton_}, gameplayModifiersDropdown{gameplayModifiersDropdown_}, filterBySongsToggle{filterBySongsToggle_}, filterBySongsButton{filterBySongsButton_}, songPacksDropdown{songPacksDropdown_}, showFullToggle{showFullToggle_}, showPasswordProtectedToggle{showPasswordProtectedToggle_}, toggleBinder{toggleBinder_}, showInternetGames{showInternetGames_} {}
    // Get instance field reference: private UnityEngine.UI.Toggle _filterByDifficultyToggle
    UnityEngine::UI::Toggle*& dyn__filterByDifficultyToggle();
    // Get instance field reference: private UnityEngine.UI.Button _filterByDifficultyButton
    UnityEngine::UI::Button*& dyn__filterByDifficultyButton();
    // Get instance field reference: private BeatmapDifficultyDropdown _beatmapDifficultyDropdown
    GlobalNamespace::BeatmapDifficultyDropdown*& dyn__beatmapDifficultyDropdown();
    // Get instance field reference: private UnityEngine.UI.Toggle _filterByModifiersToggle
    UnityEngine::UI::Toggle*& dyn__filterByModifiersToggle();
    // Get instance field reference: private UnityEngine.UI.Button _filterByModifiersButton
    UnityEngine::UI::Button*& dyn__filterByModifiersButton();
    // Get instance field reference: private GameplayModifiersDropdown _gameplayModifiersDropdown
    GlobalNamespace::GameplayModifiersDropdown*& dyn__gameplayModifiersDropdown();
    // Get instance field reference: private UnityEngine.UI.Toggle _filterBySongsToggle
    UnityEngine::UI::Toggle*& dyn__filterBySongsToggle();
    // Get instance field reference: private UnityEngine.UI.Button _filterBySongsButton
    UnityEngine::UI::Button*& dyn__filterBySongsButton();
    // Get instance field reference: private SongPacksDropdown _songPacksDropdown
    GlobalNamespace::SongPacksDropdown*& dyn__songPacksDropdown();
    // Get instance field reference: private UnityEngine.UI.Toggle _showFullToggle
    UnityEngine::UI::Toggle*& dyn__showFullToggle();
    // Get instance field reference: private UnityEngine.UI.Toggle _showPasswordProtectedToggle
    UnityEngine::UI::Toggle*& dyn__showPasswordProtectedToggle();
    // Get instance field reference: private readonly HMUI.ToggleBinder _toggleBinder
    HMUI::ToggleBinder*& dyn__toggleBinder();
    // Get instance field reference: private System.Boolean _showInternetGames
    bool& dyn__showInternetGames();
    // public GameServersFilter get_gameServersFilter()
    // Offset: 0x10FD09C
    GlobalNamespace::GameServersFilter* get_gameServersFilter();
    // public System.Void SetupGameServersFilter(GameServersFilter gameServersFilter)
    // Offset: 0x10FD290
    void SetupGameServersFilter(GlobalNamespace::GameServersFilter* gameServersFilter);
    // private System.Void Refresh(GameServersFilter currentFilter)
    // Offset: 0x10FD294
    void Refresh(GlobalNamespace::GameServersFilter* currentFilter);
    // private System.Void <DidActivate>b__16_0(System.Boolean isOn)
    // Offset: 0x10FD5BC
    void $DidActivate$b__16_0(bool isOn);
    // private System.Void <DidActivate>b__16_1(System.Boolean isOn)
    // Offset: 0x10FD5DC
    void $DidActivate$b__16_1(bool isOn);
    // private System.Void <DidActivate>b__16_2(System.Boolean isOn)
    // Offset: 0x10FD5FC
    void $DidActivate$b__16_2(bool isOn);
    // public System.Void .ctor()
    // Offset: 0x10FD554
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameServersFilterViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameServersFilterViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameServersFilterViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x10FD39C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void OnDestroy()
    // Offset: 0x10FD4E4
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::OnDestroy()
    void OnDestroy();
  }; // GameServersFilterViewController
  #pragma pack(pop)
  static check_size<sizeof(GameServersFilterViewController), 208 + sizeof(bool)> __GlobalNamespace_GameServersFilterViewControllerSizeCheck;
  static_assert(sizeof(GameServersFilterViewController) == 0xD1);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameServersFilterViewController*, "", "GameServersFilterViewController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameServersFilterViewController::get_gameServersFilter
// Il2CppName: get_gameServersFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameServersFilter* (GlobalNamespace::GameServersFilterViewController::*)()>(&GlobalNamespace::GameServersFilterViewController::get_gameServersFilter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServersFilterViewController*), "get_gameServersFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServersFilterViewController::SetupGameServersFilter
// Il2CppName: SetupGameServersFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServersFilterViewController::*)(GlobalNamespace::GameServersFilter*)>(&GlobalNamespace::GameServersFilterViewController::SetupGameServersFilter)> {
  static const MethodInfo* get() {
    static auto* gameServersFilter = &::il2cpp_utils::GetClassFromName("", "GameServersFilter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServersFilterViewController*), "SetupGameServersFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameServersFilter});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServersFilterViewController::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServersFilterViewController::*)(GlobalNamespace::GameServersFilter*)>(&GlobalNamespace::GameServersFilterViewController::Refresh)> {
  static const MethodInfo* get() {
    static auto* currentFilter = &::il2cpp_utils::GetClassFromName("", "GameServersFilter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServersFilterViewController*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentFilter});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServersFilterViewController::$DidActivate$b__16_0
// Il2CppName: <DidActivate>b__16_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServersFilterViewController::*)(bool)>(&GlobalNamespace::GameServersFilterViewController::$DidActivate$b__16_0)> {
  static const MethodInfo* get() {
    static auto* isOn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServersFilterViewController*), "<DidActivate>b__16_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isOn});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServersFilterViewController::$DidActivate$b__16_1
// Il2CppName: <DidActivate>b__16_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServersFilterViewController::*)(bool)>(&GlobalNamespace::GameServersFilterViewController::$DidActivate$b__16_1)> {
  static const MethodInfo* get() {
    static auto* isOn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServersFilterViewController*), "<DidActivate>b__16_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isOn});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServersFilterViewController::$DidActivate$b__16_2
// Il2CppName: <DidActivate>b__16_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServersFilterViewController::*)(bool)>(&GlobalNamespace::GameServersFilterViewController::$DidActivate$b__16_2)> {
  static const MethodInfo* get() {
    static auto* isOn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServersFilterViewController*), "<DidActivate>b__16_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isOn});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServersFilterViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GameServersFilterViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServersFilterViewController::*)(bool, bool, bool)>(&GlobalNamespace::GameServersFilterViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServersFilterViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServersFilterViewController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServersFilterViewController::*)()>(&GlobalNamespace::GameServersFilterViewController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServersFilterViewController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
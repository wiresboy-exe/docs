// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MissionLevelModifiersViewController
#include "GlobalNamespace/MissionLevelModifiersViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifierParamsSO
  class GameplayModifierParamsSO;
  // Forward declaring type: GameplayModifierInfoListItem
  class GameplayModifierInfoListItem;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: MissionLevelModifiersViewController/<>c__DisplayClass7_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MissionLevelModifiersViewController::$$c__DisplayClass7_0 : public ::Il2CppObject {
    public:
    // public System.Collections.Generic.List`1<GameplayModifierParamsSO> modifierParamsList
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>* modifierParamsList;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass7_0
    $$c__DisplayClass7_0(System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>* modifierParamsList_ = {}) noexcept : modifierParamsList{modifierParamsList_} {}
    // Creating conversion operator: operator System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>*
    constexpr operator System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>*() const noexcept {
      return modifierParamsList;
    }
    // Get instance field reference: public System.Collections.Generic.List`1<GameplayModifierParamsSO> modifierParamsList
    System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>*& dyn_modifierParamsList();
    // System.Void <RefreshContent>b__0(System.Int32 idx, GameplayModifierInfoListItem gameplayModifierInfoListItem)
    // Offset: 0x1140818
    void $RefreshContent$b__0(int idx, GlobalNamespace::GameplayModifierInfoListItem* gameplayModifierInfoListItem);
    // public System.Void .ctor()
    // Offset: 0x1140808
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionLevelModifiersViewController::$$c__DisplayClass7_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionLevelModifiersViewController::$$c__DisplayClass7_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionLevelModifiersViewController::$$c__DisplayClass7_0*, creationType>()));
    }
  }; // MissionLevelModifiersViewController/<>c__DisplayClass7_0
  #pragma pack(pop)
  static check_size<sizeof(MissionLevelModifiersViewController::$$c__DisplayClass7_0), 16 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>*)> __GlobalNamespace_MissionLevelModifiersViewController_$$c__DisplayClass7_0SizeCheck;
  static_assert(sizeof(MissionLevelModifiersViewController::$$c__DisplayClass7_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionLevelModifiersViewController::$$c__DisplayClass7_0*, "", "MissionLevelModifiersViewController/<>c__DisplayClass7_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelModifiersViewController::$$c__DisplayClass7_0::$RefreshContent$b__0
// Il2CppName: <RefreshContent>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelModifiersViewController::$$c__DisplayClass7_0::*)(int, GlobalNamespace::GameplayModifierInfoListItem*)>(&GlobalNamespace::MissionLevelModifiersViewController::$$c__DisplayClass7_0::$RefreshContent$b__0)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* gameplayModifierInfoListItem = &::il2cpp_utils::GetClassFromName("", "GameplayModifierInfoListItem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelModifiersViewController::$$c__DisplayClass7_0*), "<RefreshContent>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx, gameplayModifierInfoListItem});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelModifiersViewController::$$c__DisplayClass7_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
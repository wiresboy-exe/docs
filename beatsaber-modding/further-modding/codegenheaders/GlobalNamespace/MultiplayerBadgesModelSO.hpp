// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
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
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerBadgeDataSO
  class MultiplayerBadgeDataSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerBadgesModelSO
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerBadgesModelSO : public UnityEngine::ScriptableObject {
    public:
    // private System.Collections.Generic.List`1<MultiplayerBadgeDataSO> _positiveBadges
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<GlobalNamespace::MultiplayerBadgeDataSO*>* positiveBadges;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::MultiplayerBadgeDataSO*>*) == 0x8);
    // private System.Collections.Generic.List`1<MultiplayerBadgeDataSO> _negativeBadges
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<GlobalNamespace::MultiplayerBadgeDataSO*>* negativeBadges;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::MultiplayerBadgeDataSO*>*) == 0x8);
    // Creating value type constructor for type: MultiplayerBadgesModelSO
    MultiplayerBadgesModelSO(System::Collections::Generic::List_1<GlobalNamespace::MultiplayerBadgeDataSO*>* positiveBadges_ = {}, System::Collections::Generic::List_1<GlobalNamespace::MultiplayerBadgeDataSO*>* negativeBadges_ = {}) noexcept : positiveBadges{positiveBadges_}, negativeBadges{negativeBadges_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Collections.Generic.List`1<MultiplayerBadgeDataSO> _positiveBadges
    System::Collections::Generic::List_1<GlobalNamespace::MultiplayerBadgeDataSO*>*& dyn__positiveBadges();
    // Get instance field reference: private System.Collections.Generic.List`1<MultiplayerBadgeDataSO> _negativeBadges
    System::Collections::Generic::List_1<GlobalNamespace::MultiplayerBadgeDataSO*>*& dyn__negativeBadges();
    // public System.Collections.Generic.IReadOnlyList`1<MultiplayerBadgeDataSO> get_positiveBadges()
    // Offset: 0x11C5590
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerBadgeDataSO*>* get_positiveBadges();
    // public System.Collections.Generic.IReadOnlyList`1<MultiplayerBadgeDataSO> get_negativeBadges()
    // Offset: 0x11C5598
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerBadgeDataSO*>* get_negativeBadges();
    // public System.Void .ctor()
    // Offset: 0x11C55A0
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerBadgesModelSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerBadgesModelSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerBadgesModelSO*, creationType>()));
    }
  }; // MultiplayerBadgesModelSO
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerBadgesModelSO), 32 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::MultiplayerBadgeDataSO*>*)> __GlobalNamespace_MultiplayerBadgesModelSOSizeCheck;
  static_assert(sizeof(MultiplayerBadgesModelSO) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerBadgesModelSO*, "", "MultiplayerBadgesModelSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBadgesModelSO::get_positiveBadges
// Il2CppName: get_positiveBadges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerBadgeDataSO*>* (GlobalNamespace::MultiplayerBadgesModelSO::*)()>(&GlobalNamespace::MultiplayerBadgesModelSO::get_positiveBadges)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerBadgesModelSO*), "get_positiveBadges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBadgesModelSO::get_negativeBadges
// Il2CppName: get_negativeBadges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerBadgeDataSO*>* (GlobalNamespace::MultiplayerBadgesModelSO::*)()>(&GlobalNamespace::MultiplayerBadgesModelSO::get_negativeBadges)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerBadgesModelSO*), "get_negativeBadges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBadgesModelSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
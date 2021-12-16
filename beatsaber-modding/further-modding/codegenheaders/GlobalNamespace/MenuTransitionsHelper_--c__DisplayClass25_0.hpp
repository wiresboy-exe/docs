// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MenuTransitionsHelper
#include "GlobalNamespace/MenuTransitionsHelper.hpp"
// Including type: DisconnectedReason
#include "GlobalNamespace/DisconnectedReason.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: MenuTransitionsHelper/<>c__DisplayClass25_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MenuTransitionsHelper::$$c__DisplayClass25_0 : public ::Il2CppObject {
    public:
    // public MenuTransitionsHelper <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::MenuTransitionsHelper* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuTransitionsHelper*) == 0x8);
    // public DisconnectedReason disconnectedReason
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::DisconnectedReason disconnectedReason;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DisconnectedReason) == 0x4);
    // Creating value type constructor for type: $$c__DisplayClass25_0
    $$c__DisplayClass25_0(GlobalNamespace::MenuTransitionsHelper* $$4__this_ = {}, GlobalNamespace::DisconnectedReason disconnectedReason_ = {}) noexcept : $$4__this{$$4__this_}, disconnectedReason{disconnectedReason_} {}
    // Get instance field reference: public MenuTransitionsHelper <>4__this
    GlobalNamespace::MenuTransitionsHelper*& dyn_$$4__this();
    // Get instance field reference: public DisconnectedReason disconnectedReason
    GlobalNamespace::DisconnectedReason& dyn_disconnectedReason();
    // System.Void <HandleMultiplayerLevelDidDisconnect>b__0(Zenject.DiContainer container)
    // Offset: 0x11A97C8
    void $HandleMultiplayerLevelDidDisconnect$b__0(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0x11A91F8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MenuTransitionsHelper::$$c__DisplayClass25_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MenuTransitionsHelper::$$c__DisplayClass25_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MenuTransitionsHelper::$$c__DisplayClass25_0*, creationType>()));
    }
  }; // MenuTransitionsHelper/<>c__DisplayClass25_0
  #pragma pack(pop)
  static check_size<sizeof(MenuTransitionsHelper::$$c__DisplayClass25_0), 24 + sizeof(GlobalNamespace::DisconnectedReason)> __GlobalNamespace_MenuTransitionsHelper_$$c__DisplayClass25_0SizeCheck;
  static_assert(sizeof(MenuTransitionsHelper::$$c__DisplayClass25_0) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuTransitionsHelper::$$c__DisplayClass25_0*, "", "MenuTransitionsHelper/<>c__DisplayClass25_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MenuTransitionsHelper::$$c__DisplayClass25_0::$HandleMultiplayerLevelDidDisconnect$b__0
// Il2CppName: <HandleMultiplayerLevelDidDisconnect>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuTransitionsHelper::$$c__DisplayClass25_0::*)(Zenject::DiContainer*)>(&GlobalNamespace::MenuTransitionsHelper::$$c__DisplayClass25_0::$HandleMultiplayerLevelDidDisconnect$b__0)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuTransitionsHelper::$$c__DisplayClass25_0*), "<HandleMultiplayerLevelDidDisconnect>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuTransitionsHelper::$$c__DisplayClass25_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
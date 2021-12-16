// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MainEffectSO
  class MainEffectSO;
  // Forward declaring type: BoolSO
  class BoolSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MainEffectContainerSO
  // [TokenAttribute] Offset: FFFFFFFF
  class MainEffectContainerSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private MainEffectSO _mainEffect
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MainEffectSO* mainEffect;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainEffectSO*) == 0x8);
    // private BoolSO _postProcessEnabled
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BoolSO* postProcessEnabled;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoolSO*) == 0x8);
    // Creating value type constructor for type: MainEffectContainerSO
    MainEffectContainerSO(GlobalNamespace::MainEffectSO* mainEffect_ = {}, GlobalNamespace::BoolSO* postProcessEnabled_ = {}) noexcept : mainEffect{mainEffect_}, postProcessEnabled{postProcessEnabled_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MainEffectSO _mainEffect
    GlobalNamespace::MainEffectSO*& dyn__mainEffect();
    // Get instance field reference: private BoolSO _postProcessEnabled
    GlobalNamespace::BoolSO*& dyn__postProcessEnabled();
    // public MainEffectSO get_mainEffect()
    // Offset: 0x238CF20
    GlobalNamespace::MainEffectSO* get_mainEffect();
    // public System.Void Init(MainEffectSO mainEffect)
    // Offset: 0x238CFA8
    void Init(GlobalNamespace::MainEffectSO* mainEffect);
    // public System.Void .ctor()
    // Offset: 0x238D02C
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MainEffectContainerSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MainEffectContainerSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MainEffectContainerSO*, creationType>()));
    }
    // protected override System.Void OnEnable()
    // Offset: 0x238CF28
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
  }; // MainEffectContainerSO
  #pragma pack(pop)
  static check_size<sizeof(MainEffectContainerSO), 32 + sizeof(GlobalNamespace::BoolSO*)> __GlobalNamespace_MainEffectContainerSOSizeCheck;
  static_assert(sizeof(MainEffectContainerSO) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainEffectContainerSO*, "", "MainEffectContainerSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MainEffectContainerSO::get_mainEffect
// Il2CppName: get_mainEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MainEffectSO* (GlobalNamespace::MainEffectContainerSO::*)()>(&GlobalNamespace::MainEffectContainerSO::get_mainEffect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainEffectContainerSO*), "get_mainEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainEffectContainerSO::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainEffectContainerSO::*)(GlobalNamespace::MainEffectSO*)>(&GlobalNamespace::MainEffectContainerSO::Init)> {
  static const MethodInfo* get() {
    static auto* mainEffect = &::il2cpp_utils::GetClassFromName("", "MainEffectSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainEffectContainerSO*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mainEffect});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainEffectContainerSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MainEffectContainerSO::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainEffectContainerSO::*)()>(&GlobalNamespace::MainEffectContainerSO::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainEffectContainerSO*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
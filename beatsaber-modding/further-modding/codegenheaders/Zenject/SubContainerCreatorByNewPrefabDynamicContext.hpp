// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.SubContainerCreatorDynamicContext
#include "Zenject/SubContainerCreatorDynamicContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPrefabProvider
  class IPrefabProvider;
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SubContainerCreatorByNewPrefabDynamicContext
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class SubContainerCreatorByNewPrefabDynamicContext : public Zenject::SubContainerCreatorDynamicContext {
    public:
    // private readonly Zenject.IPrefabProvider _prefabProvider
    // Size: 0x8
    // Offset: 0x18
    Zenject::IPrefabProvider* prefabProvider;
    // Field size check
    static_assert(sizeof(Zenject::IPrefabProvider*) == 0x8);
    // private readonly Zenject.GameObjectCreationParameters _gameObjectBindInfo
    // Size: 0x8
    // Offset: 0x20
    Zenject::GameObjectCreationParameters* gameObjectBindInfo;
    // Field size check
    static_assert(sizeof(Zenject::GameObjectCreationParameters*) == 0x8);
    // Creating value type constructor for type: SubContainerCreatorByNewPrefabDynamicContext
    SubContainerCreatorByNewPrefabDynamicContext(Zenject::IPrefabProvider* prefabProvider_ = {}, Zenject::GameObjectCreationParameters* gameObjectBindInfo_ = {}) noexcept : prefabProvider{prefabProvider_}, gameObjectBindInfo{gameObjectBindInfo_} {}
    // Deleting conversion operator: operator Zenject::DiContainer*
    constexpr operator Zenject::DiContainer*() const noexcept = delete;
    // Get instance field reference: private readonly Zenject.IPrefabProvider _prefabProvider
    Zenject::IPrefabProvider*& dyn__prefabProvider();
    // Get instance field reference: private readonly Zenject.GameObjectCreationParameters _gameObjectBindInfo
    Zenject::GameObjectCreationParameters*& dyn__gameObjectBindInfo();
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.IPrefabProvider prefabProvider, Zenject.GameObjectCreationParameters gameObjectBindInfo)
    // Offset: 0x172771C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerCreatorByNewPrefabDynamicContext* New_ctor(Zenject::DiContainer* container, Zenject::IPrefabProvider* prefabProvider, Zenject::GameObjectCreationParameters* gameObjectBindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerCreatorByNewPrefabDynamicContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerCreatorByNewPrefabDynamicContext*, creationType>(container, prefabProvider, gameObjectBindInfo)));
    }
    // protected override UnityEngine.GameObject CreateGameObject(out System.Boolean shouldMakeActive)
    // Offset: 0x172775C
    // Implemented from: Zenject.SubContainerCreatorDynamicContext
    // Base method: UnityEngine.GameObject SubContainerCreatorDynamicContext::CreateGameObject(out System.Boolean shouldMakeActive)
    UnityEngine::GameObject* CreateGameObject(ByRef<bool> shouldMakeActive);
  }; // Zenject.SubContainerCreatorByNewPrefabDynamicContext
  #pragma pack(pop)
  static check_size<sizeof(SubContainerCreatorByNewPrefabDynamicContext), 32 + sizeof(Zenject::GameObjectCreationParameters*)> __Zenject_SubContainerCreatorByNewPrefabDynamicContextSizeCheck;
  static_assert(sizeof(SubContainerCreatorByNewPrefabDynamicContext) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerCreatorByNewPrefabDynamicContext*, "Zenject", "SubContainerCreatorByNewPrefabDynamicContext");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SubContainerCreatorByNewPrefabDynamicContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::SubContainerCreatorByNewPrefabDynamicContext::CreateGameObject
// Il2CppName: CreateGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (Zenject::SubContainerCreatorByNewPrefabDynamicContext::*)(ByRef<bool>)>(&Zenject::SubContainerCreatorByNewPrefabDynamicContext::CreateGameObject)> {
  static const MethodInfo* get() {
    static auto* shouldMakeActive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerCreatorByNewPrefabDynamicContext*), "CreateGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shouldMakeActive});
  }
};
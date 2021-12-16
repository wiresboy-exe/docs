// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.IProvider
#include "Zenject/IProvider.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.GetFromGameObjectGetterComponentProvider
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class GetFromGameObjectGetterComponentProvider : public ::Il2CppObject/*, public Zenject::IProvider*/ {
    public:
    // private readonly System.Func`2<Zenject.InjectContext,UnityEngine.GameObject> _gameObjectGetter
    // Size: 0x8
    // Offset: 0x10
    System::Func_2<Zenject::InjectContext*, UnityEngine::GameObject*>* gameObjectGetter;
    // Field size check
    static_assert(sizeof(System::Func_2<Zenject::InjectContext*, UnityEngine::GameObject*>*) == 0x8);
    // private readonly System.Type _componentType
    // Size: 0x8
    // Offset: 0x18
    System::Type* componentType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // private readonly System.Boolean _matchSingle
    // Size: 0x1
    // Offset: 0x20
    bool matchSingle;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: GetFromGameObjectGetterComponentProvider
    GetFromGameObjectGetterComponentProvider(System::Func_2<Zenject::InjectContext*, UnityEngine::GameObject*>* gameObjectGetter_ = {}, System::Type* componentType_ = {}, bool matchSingle_ = {}) noexcept : gameObjectGetter{gameObjectGetter_}, componentType{componentType_}, matchSingle{matchSingle_} {}
    // Creating interface conversion operator: operator Zenject::IProvider
    operator Zenject::IProvider() noexcept {
      return *reinterpret_cast<Zenject::IProvider*>(this);
    }
    // Get instance field reference: private readonly System.Func`2<Zenject.InjectContext,UnityEngine.GameObject> _gameObjectGetter
    System::Func_2<Zenject::InjectContext*, UnityEngine::GameObject*>*& dyn__gameObjectGetter();
    // Get instance field reference: private readonly System.Type _componentType
    System::Type*& dyn__componentType();
    // Get instance field reference: private readonly System.Boolean _matchSingle
    bool& dyn__matchSingle();
    // public System.Boolean get_IsCached()
    // Offset: 0x16670B4
    bool get_IsCached();
    // public System.Boolean get_TypeVariesBasedOnMemberType()
    // Offset: 0x16670BC
    bool get_TypeVariesBasedOnMemberType();
    // public System.Void .ctor(System.Type componentType, System.Func`2<Zenject.InjectContext,UnityEngine.GameObject> gameObjectGetter, System.Boolean matchSingle)
    // Offset: 0x165F7AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetFromGameObjectGetterComponentProvider* New_ctor(System::Type* componentType, System::Func_2<Zenject::InjectContext*, UnityEngine::GameObject*>* gameObjectGetter, bool matchSingle) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::GetFromGameObjectGetterComponentProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetFromGameObjectGetterComponentProvider*, creationType>(componentType, gameObjectGetter, matchSingle)));
    }
    // public System.Type GetInstanceType(Zenject.InjectContext context)
    // Offset: 0x16670C4
    System::Type* GetInstanceType(Zenject::InjectContext* context);
    // public System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0x16670CC
    void GetAllInstancesWithInjectSplit(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, ByRef<System::Action*> injectAction, System::Collections::Generic::List_1<::Il2CppObject*>* buffer);
  }; // Zenject.GetFromGameObjectGetterComponentProvider
  #pragma pack(pop)
  static check_size<sizeof(GetFromGameObjectGetterComponentProvider), 32 + sizeof(bool)> __Zenject_GetFromGameObjectGetterComponentProviderSizeCheck;
  static_assert(sizeof(GetFromGameObjectGetterComponentProvider) == 0x21);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::GetFromGameObjectGetterComponentProvider*, "Zenject", "GetFromGameObjectGetterComponentProvider");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::GetFromGameObjectGetterComponentProvider::get_IsCached
// Il2CppName: get_IsCached
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::GetFromGameObjectGetterComponentProvider::*)()>(&Zenject::GetFromGameObjectGetterComponentProvider::get_IsCached)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::GetFromGameObjectGetterComponentProvider*), "get_IsCached", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::GetFromGameObjectGetterComponentProvider::get_TypeVariesBasedOnMemberType
// Il2CppName: get_TypeVariesBasedOnMemberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::GetFromGameObjectGetterComponentProvider::*)()>(&Zenject::GetFromGameObjectGetterComponentProvider::get_TypeVariesBasedOnMemberType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::GetFromGameObjectGetterComponentProvider*), "get_TypeVariesBasedOnMemberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::GetFromGameObjectGetterComponentProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::GetFromGameObjectGetterComponentProvider::GetInstanceType
// Il2CppName: GetInstanceType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (Zenject::GetFromGameObjectGetterComponentProvider::*)(Zenject::InjectContext*)>(&Zenject::GetFromGameObjectGetterComponentProvider::GetInstanceType)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::GetFromGameObjectGetterComponentProvider*), "GetInstanceType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: Zenject::GetFromGameObjectGetterComponentProvider::GetAllInstancesWithInjectSplit
// Il2CppName: GetAllInstancesWithInjectSplit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::GetFromGameObjectGetterComponentProvider::*)(Zenject::InjectContext*, System::Collections::Generic::List_1<Zenject::TypeValuePair>*, ByRef<System::Action*>, System::Collections::Generic::List_1<::Il2CppObject*>*)>(&Zenject::GetFromGameObjectGetterComponentProvider::GetAllInstancesWithInjectSplit)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    static auto* args = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "TypeValuePair")})->byval_arg;
    static auto* injectAction = &::il2cpp_utils::GetClassFromName("System", "Action")->this_arg;
    static auto* buffer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::GetFromGameObjectGetterComponentProvider*), "GetAllInstancesWithInjectSplit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, args, injectAction, buffer});
  }
};
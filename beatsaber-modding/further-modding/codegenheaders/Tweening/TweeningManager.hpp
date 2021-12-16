// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
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
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: Tween
  class Tween;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
}
// Completed forward declares
// Type namespace: Tweening
namespace Tweening {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Tweening.TweeningManager
  // [TokenAttribute] Offset: FFFFFFFF
  class TweeningManager : public UnityEngine::MonoBehaviour {
    public:
    // private readonly System.Collections.Generic.List`1<Tweening.Tween> _activeTweens
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<Tweening::Tween*>* activeTweens;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Tweening::Tween*>*) == 0x8);
    // private readonly System.Collections.Generic.HashSet`1<Tweening.Tween> _activeTweensSet
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::HashSet_1<Tweening::Tween*>* activeTweensSet;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<Tweening::Tween*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<UnityEngine.Object,System.Collections.Generic.HashSet`1<Tweening.Tween>> _tweensByOwner
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::Dictionary_2<UnityEngine::Object*, System::Collections::Generic::HashSet_1<Tweening::Tween*>*>* tweensByOwner;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<UnityEngine::Object*, System::Collections::Generic::HashSet_1<Tweening::Tween*>*>*) == 0x8);
    // private readonly System.Collections.Generic.Queue`1<System.Collections.Generic.HashSet`1<Tweening.Tween>> _reusableTweenHashSets
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::Queue_1<System::Collections::Generic::HashSet_1<Tweening::Tween*>*>* reusableTweenHashSets;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Queue_1<System::Collections::Generic::HashSet_1<Tweening::Tween*>*>*) == 0x8);
    // Creating value type constructor for type: TweeningManager
    TweeningManager(System::Collections::Generic::List_1<Tweening::Tween*>* activeTweens_ = {}, System::Collections::Generic::HashSet_1<Tweening::Tween*>* activeTweensSet_ = {}, System::Collections::Generic::Dictionary_2<UnityEngine::Object*, System::Collections::Generic::HashSet_1<Tweening::Tween*>*>* tweensByOwner_ = {}, System::Collections::Generic::Queue_1<System::Collections::Generic::HashSet_1<Tweening::Tween*>*>* reusableTweenHashSets_ = {}) noexcept : activeTweens{activeTweens_}, activeTweensSet{activeTweensSet_}, tweensByOwner{tweensByOwner_}, reusableTweenHashSets{reusableTweenHashSets_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly System.Collections.Generic.List`1<Tweening.Tween> _activeTweens
    System::Collections::Generic::List_1<Tweening::Tween*>*& dyn__activeTweens();
    // Get instance field reference: private readonly System.Collections.Generic.HashSet`1<Tweening.Tween> _activeTweensSet
    System::Collections::Generic::HashSet_1<Tweening::Tween*>*& dyn__activeTweensSet();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<UnityEngine.Object,System.Collections.Generic.HashSet`1<Tweening.Tween>> _tweensByOwner
    System::Collections::Generic::Dictionary_2<UnityEngine::Object*, System::Collections::Generic::HashSet_1<Tweening::Tween*>*>*& dyn__tweensByOwner();
    // Get instance field reference: private readonly System.Collections.Generic.Queue`1<System.Collections.Generic.HashSet`1<Tweening.Tween>> _reusableTweenHashSets
    System::Collections::Generic::Queue_1<System::Collections::Generic::HashSet_1<Tweening::Tween*>*>*& dyn__reusableTweenHashSets();
    // protected System.Void Start()
    // Offset: 0x1293E70
    void Start();
    // protected System.Void Update()
    // Offset: 0x1293EDC
    void Update();
    // public Tweening.Tween AddTween(Tweening.Tween tween, UnityEngine.Object owner)
    // Offset: 0x129408C
    Tweening::Tween* AddTween(Tweening::Tween* tween, UnityEngine::Object* owner);
    // public Tweening.Tween RestartTween(Tweening.Tween tween, UnityEngine.Object owner)
    // Offset: 0x1294290
    Tweening::Tween* RestartTween(Tweening::Tween* tween, UnityEngine::Object* owner);
    // public System.Void KillAllTweens(UnityEngine.Object owner)
    // Offset: 0x12942EC
    void KillAllTweens(UnityEngine::Object* owner);
    // private System.Void AddTweenToOwnerDictionary(Tweening.Tween tween, UnityEngine.Object owner)
    // Offset: 0x129415C
    void AddTweenToOwnerDictionary(Tweening::Tween* tween, UnityEngine::Object* owner);
    // public System.Void .ctor()
    // Offset: 0x1294460
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TweeningManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Tweening::TweeningManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TweeningManager*, creationType>()));
    }
  }; // Tweening.TweeningManager
  #pragma pack(pop)
  static check_size<sizeof(TweeningManager), 48 + sizeof(System::Collections::Generic::Queue_1<System::Collections::Generic::HashSet_1<Tweening::Tween*>*>*)> __Tweening_TweeningManagerSizeCheck;
  static_assert(sizeof(TweeningManager) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(Tweening::TweeningManager*, "Tweening", "TweeningManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Tweening::TweeningManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::TweeningManager::*)()>(&Tweening::TweeningManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::TweeningManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::TweeningManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::TweeningManager::*)()>(&Tweening::TweeningManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::TweeningManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::TweeningManager::AddTween
// Il2CppName: AddTween
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Tweening::Tween* (Tweening::TweeningManager::*)(Tweening::Tween*, UnityEngine::Object*)>(&Tweening::TweeningManager::AddTween)> {
  static const MethodInfo* get() {
    static auto* tween = &::il2cpp_utils::GetClassFromName("Tweening", "Tween")->byval_arg;
    static auto* owner = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::TweeningManager*), "AddTween", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tween, owner});
  }
};
// Writing MetadataGetter for method: Tweening::TweeningManager::RestartTween
// Il2CppName: RestartTween
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Tweening::Tween* (Tweening::TweeningManager::*)(Tweening::Tween*, UnityEngine::Object*)>(&Tweening::TweeningManager::RestartTween)> {
  static const MethodInfo* get() {
    static auto* tween = &::il2cpp_utils::GetClassFromName("Tweening", "Tween")->byval_arg;
    static auto* owner = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::TweeningManager*), "RestartTween", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tween, owner});
  }
};
// Writing MetadataGetter for method: Tweening::TweeningManager::KillAllTweens
// Il2CppName: KillAllTweens
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::TweeningManager::*)(UnityEngine::Object*)>(&Tweening::TweeningManager::KillAllTweens)> {
  static const MethodInfo* get() {
    static auto* owner = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::TweeningManager*), "KillAllTweens", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{owner});
  }
};
// Writing MetadataGetter for method: Tweening::TweeningManager::AddTweenToOwnerDictionary
// Il2CppName: AddTweenToOwnerDictionary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::TweeningManager::*)(Tweening::Tween*, UnityEngine::Object*)>(&Tweening::TweeningManager::AddTweenToOwnerDictionary)> {
  static const MethodInfo* get() {
    static auto* tween = &::il2cpp_utils::GetClassFromName("Tweening", "Tween")->byval_arg;
    static auto* owner = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::TweeningManager*), "AddTweenToOwnerDictionary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tween, owner});
  }
};
// Writing MetadataGetter for method: Tweening::TweeningManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
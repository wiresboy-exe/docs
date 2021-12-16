// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Stack`1<T>
  template<typename T>
  class Stack_1;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`1<T0>
  template<typename T0>
  class UnityAction_1;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UI.ObjectPool`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class ObjectPool_1 : public ::Il2CppObject {
    public:
    // private readonly System.Collections.Generic.Stack`1<T> m_Stack
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::Stack_1<T>* m_Stack;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Stack_1<T>*) == 0x8);
    // private readonly UnityEngine.Events.UnityAction`1<T> m_ActionOnGet
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::Events::UnityAction_1<T>* m_ActionOnGet;
    // Field size check
    static_assert(sizeof(UnityEngine::Events::UnityAction_1<T>*) == 0x8);
    // private readonly UnityEngine.Events.UnityAction`1<T> m_ActionOnRelease
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::Events::UnityAction_1<T>* m_ActionOnRelease;
    // Field size check
    static_assert(sizeof(UnityEngine::Events::UnityAction_1<T>*) == 0x8);
    // private System.Int32 <countAll>k__BackingField
    // Size: 0x4
    // Offset: 0x0
    int countAll;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ObjectPool_1
    ObjectPool_1(System::Collections::Generic::Stack_1<T>* m_Stack_ = {}, UnityEngine::Events::UnityAction_1<T>* m_ActionOnGet_ = {}, UnityEngine::Events::UnityAction_1<T>* m_ActionOnRelease_ = {}, int countAll_ = {}) noexcept : m_Stack{m_Stack_}, m_ActionOnGet{m_ActionOnGet_}, m_ActionOnRelease{m_ActionOnRelease_}, countAll{countAll_} {}
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Collections.Generic.Stack`1<T> m_Stack
    System::Collections::Generic::Stack_1<T>*& dyn_m_Stack() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::ObjectPool_1::dyn_m_Stack");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Stack"))->offset;
      return *reinterpret_cast<System::Collections::Generic::Stack_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly UnityEngine.Events.UnityAction`1<T> m_ActionOnGet
    UnityEngine::Events::UnityAction_1<T>*& dyn_m_ActionOnGet() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::ObjectPool_1::dyn_m_ActionOnGet");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_ActionOnGet"))->offset;
      return *reinterpret_cast<UnityEngine::Events::UnityAction_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly UnityEngine.Events.UnityAction`1<T> m_ActionOnRelease
    UnityEngine::Events::UnityAction_1<T>*& dyn_m_ActionOnRelease() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::ObjectPool_1::dyn_m_ActionOnRelease");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_ActionOnRelease"))->offset;
      return *reinterpret_cast<UnityEngine::Events::UnityAction_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 <countAll>k__BackingField
    int& dyn_$countAll$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::ObjectPool_1::dyn_$countAll$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<countAll>k__BackingField"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Int32 get_countAll()
    // Offset: 0xFFFFFFFF
    int get_countAll() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::ObjectPool_1::get_countAll");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_countAll", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<int, false>(___instance_arg, ___internal__method);
    }
    // private System.Void set_countAll(System.Int32 value)
    // Offset: 0xFFFFFFFF
    void set_countAll(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::ObjectPool_1::set_countAll");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_countAll", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, value);
    }
    // public System.Int32 get_countActive()
    // Offset: 0xFFFFFFFF
    int get_countActive() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::ObjectPool_1::get_countActive");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_countActive", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<int, false>(___instance_arg, ___internal__method);
    }
    // public System.Int32 get_countInactive()
    // Offset: 0xFFFFFFFF
    int get_countInactive() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::ObjectPool_1::get_countInactive");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_countInactive", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<int, false>(___instance_arg, ___internal__method);
    }
    // public System.Void .ctor(UnityEngine.Events.UnityAction`1<T> actionOnGet, UnityEngine.Events.UnityAction`1<T> actionOnRelease)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectPool_1<T>* New_ctor(UnityEngine::Events::UnityAction_1<T>* actionOnGet, UnityEngine::Events::UnityAction_1<T>* actionOnRelease) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::ObjectPool_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectPool_1<T>*, creationType>(actionOnGet, actionOnRelease)));
    }
    // public T Get()
    // Offset: 0xFFFFFFFF
    T Get() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::ObjectPool_1::Get");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Get", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<T, false>(___instance_arg, ___internal__method);
    }
    // public System.Void Release(T element)
    // Offset: 0xFFFFFFFF
    void Release(T element) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::ObjectPool_1::Release");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Release", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(element)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, element);
    }
  }; // UnityEngine.UI.ObjectPool`1
  // Could not write size check! Type: UnityEngine.UI.ObjectPool`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UI::ObjectPool_1, "UnityEngine.UI", "ObjectPool`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
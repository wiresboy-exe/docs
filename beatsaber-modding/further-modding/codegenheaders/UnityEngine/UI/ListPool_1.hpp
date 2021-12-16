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
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: ObjectPool`1<T>
  template<typename T>
  class ObjectPool_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UI.ListPool`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class ListPool_1 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ListPool_1
    ListPool_1() noexcept {}
    // Autogenerated static field getter
    // Get static field: static private readonly UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> s_ListPool
    static UnityEngine::UI::ObjectPool_1<System::Collections::Generic::List_1<T>*>* _get_s_ListPool() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::ListPool_1::_get_s_ListPool");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<UnityEngine::UI::ObjectPool_1<System::Collections::Generic::List_1<T>*>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ListPool_1<T>*>::get(), "s_ListPool"));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> s_ListPool
    static void _set_s_ListPool(UnityEngine::UI::ObjectPool_1<System::Collections::Generic::List_1<T>*>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::ListPool_1::_set_s_ListPool");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ListPool_1<T>*>::get(), "s_ListPool", value));
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::ListPool_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ListPool_1<T>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
    }
    // static private System.Void Clear(System.Collections.Generic.List`1<T> l)
    // Offset: 0xFFFFFFFF
    static void Clear(System::Collections::Generic::List_1<T>* l) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::ListPool_1::Clear");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ListPool_1<T>*>::get(), "Clear", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(l)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, l);
    }
    // static public System.Collections.Generic.List`1<T> Get()
    // Offset: 0xFFFFFFFF
    static System::Collections::Generic::List_1<T>* Get() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::ListPool_1::Get");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ListPool_1<T>*>::get(), "Get", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::List_1<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
    }
    // static public System.Void Release(System.Collections.Generic.List`1<T> toRelease)
    // Offset: 0xFFFFFFFF
    static void Release(System::Collections::Generic::List_1<T>* toRelease) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::ListPool_1::Release");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ListPool_1<T>*>::get(), "Release", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(toRelease)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, toRelease);
    }
  }; // UnityEngine.UI.ListPool`1
  // Could not write size check! Type: UnityEngine.UI.ListPool`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UI::ListPool_1, "UnityEngine.UI", "ListPool`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
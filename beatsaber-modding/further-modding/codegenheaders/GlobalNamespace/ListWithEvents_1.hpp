// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.IList`1
#include "System/Collections/Generic/IList_1.hpp"
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
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: ListWithEvents`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: E1EF1C
  template<typename T>
  class ListWithEvents_1 : public ::Il2CppObject/*, public System::Collections::Generic::IList_1<T>*/ {
    public:
    // private System.Collections.Generic.List`1<T> m_List
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::List_1<T>* m_List;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<T>*) == 0x8);
    // private System.Action`1<T> OnElementAdded
    // Size: 0x8
    // Offset: 0x0
    System::Action_1<T>* OnElementAdded;
    // Field size check
    static_assert(sizeof(System::Action_1<T>*) == 0x8);
    // private System.Action`1<T> OnElementRemoved
    // Size: 0x8
    // Offset: 0x0
    System::Action_1<T>* OnElementRemoved;
    // Field size check
    static_assert(sizeof(System::Action_1<T>*) == 0x8);
    // Creating value type constructor for type: ListWithEvents_1
    ListWithEvents_1(System::Collections::Generic::List_1<T>* m_List_ = {}, System::Action_1<T>* OnElementAdded_ = {}, System::Action_1<T>* OnElementRemoved_ = {}) noexcept : m_List{m_List_}, OnElementAdded{OnElementAdded_}, OnElementRemoved{OnElementRemoved_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IList_1<T>
    operator System::Collections::Generic::IList_1<T>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IList_1<T>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.List`1<T> m_List
    System::Collections::Generic::List_1<T>*& dyn_m_List() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ListWithEvents_1::dyn_m_List");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_List"))->offset;
      return *reinterpret_cast<System::Collections::Generic::List_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Action`1<T> OnElementAdded
    System::Action_1<T>*& dyn_OnElementAdded() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ListWithEvents_1::dyn_OnElementAdded");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "OnElementAdded"))->offset;
      return *reinterpret_cast<System::Action_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Action`1<T> OnElementRemoved
    System::Action_1<T>*& dyn_OnElementRemoved() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ListWithEvents_1::dyn_OnElementRemoved");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "OnElementRemoved"))->offset;
      return *reinterpret_cast<System::Action_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public T get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFF
    T get_Item(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ListWithEvents_1::get_Item");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<T, false>(___instance_arg, ___internal__method, index);
    }
    // public System.Void set_Item(System.Int32 index, T value)
    // Offset: 0xFFFFFFFF
    void set_Item(int index, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ListWithEvents_1::set_Item");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(value)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, index, value);
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFF
    int get_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ListWithEvents_1::get_Count");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Count", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<int, false>(___instance_arg, ___internal__method);
    }
    // public System.Boolean get_IsReadOnly()
    // Offset: 0xFFFFFFFF
    bool get_IsReadOnly() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ListWithEvents_1::get_IsReadOnly");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_IsReadOnly", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<bool, false>(___instance_arg, ___internal__method);
    }
    // public System.Void add_OnElementAdded(System.Action`1<T> value)
    // Offset: 0xFFFFFFFF
    void add_OnElementAdded(System::Action_1<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ListWithEvents_1::add_OnElementAdded");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "add_OnElementAdded", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, value);
    }
    // public System.Void remove_OnElementAdded(System.Action`1<T> value)
    // Offset: 0xFFFFFFFF
    void remove_OnElementAdded(System::Action_1<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ListWithEvents_1::remove_OnElementAdded");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "remove_OnElementAdded", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, value);
    }
    // public System.Void add_OnElementRemoved(System.Action`1<T> value)
    // Offset: 0xFFFFFFFF
    void add_OnElementRemoved(System::Action_1<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ListWithEvents_1::add_OnElementRemoved");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "add_OnElementRemoved", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, value);
    }
    // public System.Void remove_OnElementRemoved(System.Action`1<T> value)
    // Offset: 0xFFFFFFFF
    void remove_OnElementRemoved(System::Action_1<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ListWithEvents_1::remove_OnElementRemoved");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "remove_OnElementRemoved", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, value);
    }
    // private System.Void InvokeAdded(T element)
    // Offset: 0xFFFFFFFF
    void InvokeAdded(T element) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ListWithEvents_1::InvokeAdded");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "InvokeAdded", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(element)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, element);
    }
    // private System.Void InvokeRemoved(T element)
    // Offset: 0xFFFFFFFF
    void InvokeRemoved(T element) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ListWithEvents_1::InvokeRemoved");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "InvokeRemoved", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(element)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, element);
    }
    // public System.Void Add(T item)
    // Offset: 0xFFFFFFFF
    void Add(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ListWithEvents_1::Add");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Add", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, item);
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ListWithEvents_1::Clear");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Clear", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method);
    }
    // public System.Boolean Contains(T item)
    // Offset: 0xFFFFFFFF
    bool Contains(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ListWithEvents_1::Contains");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Contains", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<bool, false>(___instance_arg, ___internal__method, item);
    }
    // public System.Void CopyTo(T[] array, System.Int32 arrayIndex)
    // Offset: 0xFFFFFFFF
    void CopyTo(::Array<T>* array, int arrayIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ListWithEvents_1::CopyTo");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CopyTo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array), ::il2cpp_utils::ExtractType(arrayIndex)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, array, arrayIndex);
    }
    // public System.Collections.Generic.IEnumerator`1<T> GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerator_1<T>* GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ListWithEvents_1::GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerator_1<T>*, false>(___instance_arg, ___internal__method);
    }
    // public System.Int32 IndexOf(T item)
    // Offset: 0xFFFFFFFF
    int IndexOf(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ListWithEvents_1::IndexOf");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "IndexOf", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<int, false>(___instance_arg, ___internal__method, item);
    }
    // public System.Void Insert(System.Int32 index, T item)
    // Offset: 0xFFFFFFFF
    void Insert(int index, T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ListWithEvents_1::Insert");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Insert", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(item)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, index, item);
    }
    // public System.Boolean Remove(T item)
    // Offset: 0xFFFFFFFF
    bool Remove(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ListWithEvents_1::Remove");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Remove", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<bool, false>(___instance_arg, ___internal__method, item);
    }
    // public System.Void RemoveAt(System.Int32 index)
    // Offset: 0xFFFFFFFF
    void RemoveAt(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ListWithEvents_1::RemoveAt");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RemoveAt", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, index);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ListWithEvents_1::System.Collections.IEnumerable.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<System::Collections::IEnumerator*, false>(___instance_arg, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ListWithEvents_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ListWithEvents_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ListWithEvents_1<T>*, creationType>()));
    }
  }; // ListWithEvents`1
  // Could not write size check! Type: ListWithEvents`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::ListWithEvents_1, "", "ListWithEvents`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
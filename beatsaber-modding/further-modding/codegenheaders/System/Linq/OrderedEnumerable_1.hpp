// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.IOrderedEnumerable`1
#include "System/Linq/IOrderedEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: System.Linq.Buffer`1
#include "System/Linq/Buffer_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq
namespace System::Linq {
  // Skipping declaration: <GetEnumerator>d__1 because it is already included!
  // Forward declaring type: EnumerableSorter`1<TElement>
  template<typename TElement>
  class EnumerableSorter_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Skipping declaration: IEnumerable`1 because it is already included!
  // Forward declaring type: IComparer`1<T>
  template<typename T>
  class IComparer_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: System.Linq
namespace System::Linq {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Linq.OrderedEnumerable`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TElement>
  class OrderedEnumerable_1 : public ::Il2CppObject/*, public System::Linq::IOrderedEnumerable_1<TElement>*/ {
    public:
    // Nested type: System::Linq::OrderedEnumerable_1::$GetEnumerator$d__1<TElement>
    class $GetEnumerator$d__1;
    // WARNING Size may be invalid!
    // Autogenerated type: System.Linq.OrderedEnumerable`1/System.Linq.<GetEnumerator>d__1
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $GetEnumerator$d__1 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<TElement>*/ {
      public:
      using declaring_type = OrderedEnumerable_1<TElement>*;
      static constexpr std::string_view NESTED_NAME = "<GetEnumerator>d__1";
      static constexpr bool IS_VALUE_TYPE = false;
      // private System.Int32 <>1__state
      // Size: 0x4
      // Offset: 0x0
      int $$1__state;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private TElement <>2__current
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      TElement $$2__current;
      // public System.Linq.OrderedEnumerable`1<TElement> <>4__this
      // Size: 0x8
      // Offset: 0x0
      System::Linq::OrderedEnumerable_1<TElement>* $$4__this;
      // Field size check
      static_assert(sizeof(System::Linq::OrderedEnumerable_1<TElement>*) == 0x8);
      // private System.Linq.Buffer`1<TElement> <buffer>5__1
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      System::Linq::Buffer_1<TElement> $buffer$5__1;
      // private System.Int32[] <map>5__2
      // Size: 0x8
      // Offset: 0x0
      ::Array<int>* $map$5__2;
      // Field size check
      static_assert(sizeof(::Array<int>*) == 0x8);
      // private System.Int32 <i>5__3
      // Size: 0x4
      // Offset: 0x0
      int $i$5__3;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: $GetEnumerator$d__1
      $GetEnumerator$d__1(int $$1__state_ = {}, TElement $$2__current_ = {}, System::Linq::OrderedEnumerable_1<TElement>* $$4__this_ = {}, System::Linq::Buffer_1<TElement> $buffer$5__1_ = {}, ::Array<int>* $map$5__2_ = {}, int $i$5__3_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, $buffer$5__1{$buffer$5__1_}, $map$5__2{$map$5__2_}, $i$5__3{$i$5__3_} {}
      // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<TElement>
      operator System::Collections::Generic::IEnumerator_1<TElement>() noexcept {
        return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<TElement>*>(this);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Int32 <>1__state
      int& dyn_$$1__state() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::OrderedEnumerable_1::$GetEnumerator$d__1::dyn_$$1__state");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>1__state"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private TElement <>2__current
      TElement& dyn_$$2__current() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::OrderedEnumerable_1::$GetEnumerator$d__1::dyn_$$2__current");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>2__current"))->offset;
        return *reinterpret_cast<TElement*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Linq.OrderedEnumerable`1<TElement> <>4__this
      System::Linq::OrderedEnumerable_1<TElement>*& dyn_$$4__this() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::OrderedEnumerable_1::$GetEnumerator$d__1::dyn_$$4__this");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
        return *reinterpret_cast<System::Linq::OrderedEnumerable_1<TElement>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Linq.Buffer`1<TElement> <buffer>5__1
      System::Linq::Buffer_1<TElement>& dyn_$buffer$5__1() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::OrderedEnumerable_1::$GetEnumerator$d__1::dyn_$buffer$5__1");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<buffer>5__1"))->offset;
        return *reinterpret_cast<System::Linq::Buffer_1<TElement>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Int32[] <map>5__2
      ::Array<int>*& dyn_$map$5__2() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::OrderedEnumerable_1::$GetEnumerator$d__1::dyn_$map$5__2");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<map>5__2"))->offset;
        return *reinterpret_cast<::Array<int>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Int32 <i>5__3
      int& dyn_$i$5__3() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::OrderedEnumerable_1::$GetEnumerator$d__1::dyn_$i$5__3");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<i>5__3"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // private TElement System.Collections.Generic.IEnumerator<TElement>.get_Current()
      // Offset: 0xFFFFFFFF
      TElement System_Collections_Generic_IEnumerator$TElement$_get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::OrderedEnumerable_1::$GetEnumerator$d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IEnumerator<TElement>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        auto ___instance_arg = this;
        return ::il2cpp_utils::RunMethodThrow<TElement, false>(___instance_arg, ___internal__method);
      }
      // private System.Object System.Collections.IEnumerator.get_Current()
      // Offset: 0xFFFFFFFF
      ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::OrderedEnumerable_1::$GetEnumerator$d__1::System.Collections.IEnumerator.get_Current");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        auto ___instance_arg = this;
        return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(___instance_arg, ___internal__method);
      }
      // public System.Void .ctor(System.Int32 <>1__state)
      // Offset: 0xFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename OrderedEnumerable_1<TElement>::$GetEnumerator$d__1* New_ctor(int $$1__state) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::OrderedEnumerable_1::$GetEnumerator$d__1::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename OrderedEnumerable_1<TElement>::$GetEnumerator$d__1*, creationType>($$1__state)));
      }
      // private System.Void System.IDisposable.Dispose()
      // Offset: 0xFFFFFFFF
      void System_IDisposable_Dispose() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::OrderedEnumerable_1::$GetEnumerator$d__1::System.IDisposable.Dispose");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        auto ___instance_arg = this;
        ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method);
      }
      // private System.Boolean MoveNext()
      // Offset: 0xFFFFFFFF
      bool MoveNext() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::OrderedEnumerable_1::$GetEnumerator$d__1::MoveNext");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        auto ___instance_arg = this;
        return ::il2cpp_utils::RunMethodThrow<bool, false>(___instance_arg, ___internal__method);
      }
      // private System.Void System.Collections.IEnumerator.Reset()
      // Offset: 0xFFFFFFFF
      void System_Collections_IEnumerator_Reset() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::OrderedEnumerable_1::$GetEnumerator$d__1::System.Collections.IEnumerator.Reset");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        auto ___instance_arg = this;
        ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method);
      }
    }; // System.Linq.OrderedEnumerable`1/System.Linq.<GetEnumerator>d__1
    // Could not write size check! Type: System.Linq.OrderedEnumerable`1/System.Linq.<GetEnumerator>d__1 is generic, or has no fields that are valid for size checks!
    // System.Collections.Generic.IEnumerable`1<TElement> source
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::IEnumerable_1<TElement>* source;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerable_1<TElement>*) == 0x8);
    // Creating value type constructor for type: OrderedEnumerable_1
    OrderedEnumerable_1(System::Collections::Generic::IEnumerable_1<TElement>* source_ = {}) noexcept : source{source_} {}
    // Creating interface conversion operator: operator System::Linq::IOrderedEnumerable_1<TElement>
    operator System::Linq::IOrderedEnumerable_1<TElement>() noexcept {
      return *reinterpret_cast<System::Linq::IOrderedEnumerable_1<TElement>*>(this);
    }
    // Creating conversion operator: operator System::Collections::Generic::IEnumerable_1<TElement>*
    constexpr operator System::Collections::Generic::IEnumerable_1<TElement>*() const noexcept {
      return source;
    }
    // Autogenerated instance field getter
    // Get instance field: System.Collections.Generic.IEnumerable`1<TElement> source
    System::Collections::Generic::IEnumerable_1<TElement>*& dyn_source() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::OrderedEnumerable_1::dyn_source");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "source"))->offset;
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<TElement>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Collections.Generic.IEnumerator`1<TElement> GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerator_1<TElement>* GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::OrderedEnumerable_1::GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerator_1<TElement>*, false>(___instance_arg, ___internal__method);
    }
    // System.Linq.EnumerableSorter`1<TElement> GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement> next)
    // Offset: 0xFFFFFFFF
    System::Linq::EnumerableSorter_1<TElement>* GetEnumerableSorter(System::Linq::EnumerableSorter_1<TElement>* next) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::OrderedEnumerable_1::GetEnumerableSorter");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetEnumerableSorter", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(next)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<System::Linq::EnumerableSorter_1<TElement>*, false>(___instance_arg, ___internal__method, next);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::OrderedEnumerable_1::System.Collections.IEnumerable.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<System::Collections::IEnumerator*, false>(___instance_arg, ___internal__method);
    }
    // private System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey> keySelector, System.Collections.Generic.IComparer`1<TKey> comparer, System.Boolean descending)
    // Offset: 0xFFFFFFFF
    template<class TKey>
    System::Linq::IOrderedEnumerable_1<TElement>* System_Linq_IOrderedEnumerable$TElement$_CreateOrderedEnumerable(System::Func_2<TElement, TKey>* keySelector, System::Collections::Generic::IComparer_1<TKey>* comparer, bool descending) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::OrderedEnumerable_1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(keySelector), ::il2cpp_utils::ExtractType(comparer), ::il2cpp_utils::ExtractType(descending)})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get()}));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<System::Linq::IOrderedEnumerable_1<TElement>*, false>(___instance_arg, ___generic__method, keySelector, comparer, descending);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OrderedEnumerable_1<TElement>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::OrderedEnumerable_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OrderedEnumerable_1<TElement>*, creationType>()));
    }
  }; // System.Linq.OrderedEnumerable`1
  // Could not write size check! Type: System.Linq.OrderedEnumerable`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::OrderedEnumerable_1, "System.Linq", "OrderedEnumerable`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
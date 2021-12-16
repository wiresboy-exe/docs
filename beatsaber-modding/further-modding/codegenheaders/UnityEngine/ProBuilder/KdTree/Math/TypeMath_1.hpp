// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.KdTree.ITypeMath`1
#include "UnityEngine/ProBuilder/KdTree/ITypeMath_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.ProBuilder.KdTree.Math
namespace UnityEngine::ProBuilder::KdTree::Math {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.ProBuilder.KdTree.Math.TypeMath`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class TypeMath_1 : public ::Il2CppObject/*, public UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>*/ {
    public:
    // Creating value type constructor for type: TypeMath_1
    TypeMath_1() noexcept {}
    // Creating interface conversion operator: operator UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>
    operator UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>() noexcept {
      return *reinterpret_cast<UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>*>(this);
    }
    // public T get_MinValue()
    // Offset: 0xFFFFFFFF
    T get_MinValue() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::Math::TypeMath_1::get_MinValue");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_MinValue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<T, false>(___instance_arg, ___internal__method);
    }
    // public T get_Zero()
    // Offset: 0xFFFFFFFF
    T get_Zero() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::Math::TypeMath_1::get_Zero");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Zero", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<T, false>(___instance_arg, ___internal__method);
    }
    // public T get_NegativeInfinity()
    // Offset: 0xFFFFFFFF
    T get_NegativeInfinity() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::Math::TypeMath_1::get_NegativeInfinity");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_NegativeInfinity", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<T, false>(___instance_arg, ___internal__method);
    }
    // public T get_PositiveInfinity()
    // Offset: 0xFFFFFFFF
    T get_PositiveInfinity() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::Math::TypeMath_1::get_PositiveInfinity");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_PositiveInfinity", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<T, false>(___instance_arg, ___internal__method);
    }
    // public System.Int32 Compare(T a, T b)
    // Offset: 0xFFFFFFFF
    int Compare(T a, T b) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::Math::TypeMath_1::Compare");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Compare", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(a), ::il2cpp_utils::ExtractType(b)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<int, false>(___instance_arg, ___internal__method, a, b);
    }
    // public System.Boolean AreEqual(T a, T b)
    // Offset: 0xFFFFFFFF
    bool AreEqual(T a, T b) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::Math::TypeMath_1::AreEqual");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AreEqual", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(a), ::il2cpp_utils::ExtractType(b)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<bool, false>(___instance_arg, ___internal__method, a, b);
    }
    // public System.Boolean AreEqual(T[] a, T[] b)
    // Offset: 0xFFFFFFFF
    bool AreEqual(::Array<T>* a, ::Array<T>* b) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::Math::TypeMath_1::AreEqual");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AreEqual", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(a), ::il2cpp_utils::ExtractType(b)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<bool, false>(___instance_arg, ___internal__method, a, b);
    }
    // public T Add(T a, T b)
    // Offset: 0xFFFFFFFF
    T Add(T a, T b) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::Math::TypeMath_1::Add");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Add", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(a), ::il2cpp_utils::ExtractType(b)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<T, false>(___instance_arg, ___internal__method, a, b);
    }
    // public T Subtract(T a, T b)
    // Offset: 0xFFFFFFFF
    T Subtract(T a, T b) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::Math::TypeMath_1::Subtract");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Subtract", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(a), ::il2cpp_utils::ExtractType(b)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<T, false>(___instance_arg, ___internal__method, a, b);
    }
    // public T Multiply(T a, T b)
    // Offset: 0xFFFFFFFF
    T Multiply(T a, T b) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::Math::TypeMath_1::Multiply");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Multiply", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(a), ::il2cpp_utils::ExtractType(b)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<T, false>(___instance_arg, ___internal__method, a, b);
    }
    // public T DistanceSquaredBetweenPoints(T[] a, T[] b)
    // Offset: 0xFFFFFFFF
    T DistanceSquaredBetweenPoints(::Array<T>* a, ::Array<T>* b) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::Math::TypeMath_1::DistanceSquaredBetweenPoints");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "DistanceSquaredBetweenPoints", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(a), ::il2cpp_utils::ExtractType(b)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<T, false>(___instance_arg, ___internal__method, a, b);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeMath_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::Math::TypeMath_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeMath_1<T>*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.KdTree.Math.TypeMath`1
  // Could not write size check! Type: UnityEngine.ProBuilder.KdTree.Math.TypeMath`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::ProBuilder::KdTree::Math::TypeMath_1, "UnityEngine.ProBuilder.KdTree.Math", "TypeMath`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
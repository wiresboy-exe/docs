// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: IValue`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class IValue_1 {
    public:
    // Creating value type constructor for type: IValue_1
    IValue_1() noexcept {}
    // public T get_value()
    // Offset: 0xFFFFFFFF
    T get_value() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IValue_1::get_value");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_value", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<T, false>(___instance_arg, ___internal__method);
    }
    // public System.Void set_value(T value)
    // Offset: 0xFFFFFFFF
    void set_value(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IValue_1::set_value");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_value", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, value);
    }
  }; // IValue`1
  // Could not write size check! Type: IValue`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::IValue_1, "", "IValue`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
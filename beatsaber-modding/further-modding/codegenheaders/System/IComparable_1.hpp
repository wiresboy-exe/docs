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
// Type namespace: System
namespace System {
  // WARNING Size may be invalid!
  // Autogenerated type: System.IComparable`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class IComparable_1 {
    public:
    // Creating value type constructor for type: IComparable_1
    IComparable_1() noexcept {}
    // public System.Int32 CompareTo(T other)
    // Offset: 0xFFFFFFFF
    int CompareTo(T other) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IComparable_1::CompareTo");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CompareTo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(other)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<int, false>(___instance_arg, ___internal__method, other);
    }
  }; // System.IComparable`1
  // Could not write size check! Type: System.IComparable`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::IComparable_1, "System", "IComparable`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
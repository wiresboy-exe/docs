// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRResources
#include "GlobalNamespace/OVRResources.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: OVRResources/<>c__DisplayClass3_0`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename T>
  class OVRResources::$$c__DisplayClass3_0_1 : public ::Il2CppObject {
    public:
    // public System.String path
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* path;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass3_0_1
    $$c__DisplayClass3_0_1(::Il2CppString* path_ = {}) noexcept : path{path_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return path;
    }
    // Autogenerated instance field getter
    // Get instance field: public System.String path
    ::Il2CppString*& dyn_path() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRResources::$$c__DisplayClass3_0_1::dyn_path");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "path"))->offset;
      return *reinterpret_cast<::Il2CppString**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // System.Boolean <Load>b__0(System.String s)
    // Offset: 0xFFFFFFFF
    bool $Load$b__0(::Il2CppString* s) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRResources::$$c__DisplayClass3_0_1::<Load>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<Load>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(s)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<bool, false>(___instance_arg, ___internal__method, s);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRResources::$$c__DisplayClass3_0_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRResources::$$c__DisplayClass3_0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRResources::$$c__DisplayClass3_0_1<T>*, creationType>()));
    }
  }; // OVRResources/<>c__DisplayClass3_0`1
  // Could not write size check! Type: OVRResources/<>c__DisplayClass3_0`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::OVRResources::$$c__DisplayClass3_0_1, "", "OVRResources/<>c__DisplayClass3_0`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
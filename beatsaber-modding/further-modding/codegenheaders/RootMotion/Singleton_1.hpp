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
// Type namespace: RootMotion
namespace RootMotion {
  // WARNING Size may be invalid!
  // Autogenerated type: RootMotion.Singleton`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class Singleton_1 : public UnityEngine::MonoBehaviour {
    public:
    // Creating value type constructor for type: Singleton_1
    Singleton_1() noexcept {}
    // Autogenerated static field getter
    // Get static field: static private T sInstance
    static T _get_sInstance() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::Singleton_1::_get_sInstance");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<T>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Singleton_1<T>*>::get(), "sInstance"));
    }
    // Autogenerated static field setter
    // Set static field: static private T sInstance
    static void _set_sInstance(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::Singleton_1::_set_sInstance");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Singleton_1<T>*>::get(), "sInstance", value));
    }
    // static public T get_instance()
    // Offset: 0xFFFFFFFF
    static T get_instance() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::Singleton_1::get_instance");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Singleton_1<T>*>::get(), "get_instance", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
    }
    // protected System.Void Awake()
    // Offset: 0xFFFFFFFF
    void Awake() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::Singleton_1::Awake");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Awake", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Singleton_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::Singleton_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Singleton_1<T>*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::Singleton_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Singleton_1<T>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
    }
  }; // RootMotion.Singleton`1
  // Could not write size check! Type: RootMotion.Singleton`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(RootMotion::Singleton_1, "RootMotion", "Singleton`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
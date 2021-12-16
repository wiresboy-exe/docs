// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.MemoryPoolBase`1
#include "Zenject/MemoryPoolBase_1.hpp"
// Including type: Zenject.IFactory`3
#include "Zenject/IFactory_3.hpp"
// Including type: Zenject.IMemoryPool`3
#include "Zenject/IMemoryPool_3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.MemoryPool`3
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2, typename TValue>
  class MemoryPool_3 : public Zenject::MemoryPoolBase_1<TValue>/*, public Zenject::IFactory_3<TParam1, TParam2, TValue>, public Zenject::IMemoryPool_3<TParam1, TParam2, TValue>*/ {
    public:
    // Creating value type constructor for type: MemoryPool_3
    MemoryPool_3() noexcept {}
    // Creating interface conversion operator: operator Zenject::IFactory_3<TParam1, TParam2, TValue>
    operator Zenject::IFactory_3<TParam1, TParam2, TValue>() noexcept {
      return *reinterpret_cast<Zenject::IFactory_3<TParam1, TParam2, TValue>*>(this);
    }
    // Creating interface conversion operator: operator Zenject::IMemoryPool_3<TParam1, TParam2, TValue>
    operator Zenject::IMemoryPool_3<TParam1, TParam2, TValue>() noexcept {
      return *reinterpret_cast<Zenject::IMemoryPool_3<TParam1, TParam2, TValue>*>(this);
    }
    // public TValue Spawn(TParam1 param1, TParam2 param2)
    // Offset: 0xFFFFFFFF
    TValue Spawn(TParam1 param1, TParam2 param2) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPool_3::Spawn");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Spawn", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(param1), ::il2cpp_utils::ExtractType(param2)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(___instance_arg, ___internal__method, param1, param2);
    }
    // protected System.Void Reinitialize(TParam1 p1, TParam2 p2, TValue item)
    // Offset: 0xFFFFFFFF
    void Reinitialize(TParam1 p1, TParam2 p2, TValue item) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPool_3::Reinitialize");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Reinitialize", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(p1), ::il2cpp_utils::ExtractType(p2), ::il2cpp_utils::ExtractType(item)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, p1, p2, item);
    }
    // private TValue Zenject.IFactory<TParam1,TParam2,TValue>.Create(TParam1 p1, TParam2 p2)
    // Offset: 0xFFFFFFFF
    TValue Zenject_IFactory$TParam1_TParam2_TValue$_Create(TParam1 p1, TParam2 p2) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPool_3::Zenject.IFactory<TParam1,TParam2,TValue>.Create");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Zenject.IFactory<TParam1,TParam2,TValue>.Create", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(p1), ::il2cpp_utils::ExtractType(p2)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(___instance_arg, ___internal__method, p1, p2);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.MemoryPoolBase`1
    // Base method: System.Void MemoryPoolBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemoryPool_3<TParam1, TParam2, TValue>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPool_3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemoryPool_3<TParam1, TParam2, TValue>*, creationType>()));
    }
  }; // Zenject.MemoryPool`3
  // Could not write size check! Type: Zenject.MemoryPool`3 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MemoryPool_3, "Zenject", "MemoryPool`3");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
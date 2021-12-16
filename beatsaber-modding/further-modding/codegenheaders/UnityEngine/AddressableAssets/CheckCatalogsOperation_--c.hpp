// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AddressableAssets.CheckCatalogsOperation
#include "UnityEngine/AddressableAssets/CheckCatalogsOperation.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Forward declaring type: IResourceProvider
  class IResourceProvider;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.CheckCatalogsOperation/UnityEngine.AddressableAssets.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class CheckCatalogsOperation::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnityEngine.AddressableAssets.CheckCatalogsOperation/UnityEngine.AddressableAssets.<>c <>9
    static UnityEngine::AddressableAssets::CheckCatalogsOperation::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.AddressableAssets.CheckCatalogsOperation/UnityEngine.AddressableAssets.<>c <>9
    static void _set_$$9(UnityEngine::AddressableAssets::CheckCatalogsOperation::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider,System.Boolean> <>9__5_0
    static System::Func_2<UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>* _get_$$9__5_0();
    // Set static field: static public System.Func`2<UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider,System.Boolean> <>9__5_0
    static void _set_$$9__5_0(System::Func_2<UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x144C468
    static void _cctor();
    // System.Boolean <Start>b__5_0(UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider rp)
    // Offset: 0x144C4D4
    bool $Start$b__5_0(UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* rp);
    // public System.Void .ctor()
    // Offset: 0x144C4CC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CheckCatalogsOperation::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::CheckCatalogsOperation::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CheckCatalogsOperation::$$c*, creationType>()));
    }
  }; // UnityEngine.AddressableAssets.CheckCatalogsOperation/UnityEngine.AddressableAssets.<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::CheckCatalogsOperation::$$c*, "UnityEngine.AddressableAssets", "CheckCatalogsOperation/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::CheckCatalogsOperation::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::AddressableAssets::CheckCatalogsOperation::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::CheckCatalogsOperation::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::CheckCatalogsOperation::$$c::$Start$b__5_0
// Il2CppName: <Start>b__5_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::CheckCatalogsOperation::$$c::*)(UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*)>(&UnityEngine::AddressableAssets::CheckCatalogsOperation::$$c::$Start$b__5_0)> {
  static const MethodInfo* get() {
    static auto* rp = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceProviders", "IResourceProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::CheckCatalogsOperation::$$c*), "<Start>b__5_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rp});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::CheckCatalogsOperation::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
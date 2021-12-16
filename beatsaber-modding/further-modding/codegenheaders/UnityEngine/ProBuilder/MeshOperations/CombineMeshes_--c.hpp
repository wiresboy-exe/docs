// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.MeshOperations.CombineMeshes
#include "UnityEngine/ProBuilder/MeshOperations/CombineMeshes.hpp"
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
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Face
  class Face;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.CombineMeshes/UnityEngine.ProBuilder.MeshOperations.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class CombineMeshes::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnityEngine.ProBuilder.MeshOperations.CombineMeshes/UnityEngine.ProBuilder.MeshOperations.<>c <>9
    static UnityEngine::ProBuilder::MeshOperations::CombineMeshes::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.ProBuilder.MeshOperations.CombineMeshes/UnityEngine.ProBuilder.MeshOperations.<>c <>9
    static void _set_$$9(UnityEngine::ProBuilder::MeshOperations::CombineMeshes::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.Face,System.Int32> <>9__5_0
    static System::Func_2<UnityEngine::ProBuilder::Face*, int>* _get_$$9__5_0();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.Face,System.Int32> <>9__5_0
    static void _set_$$9__5_0(System::Func_2<UnityEngine::ProBuilder::Face*, int>* value);
    // static private System.Void .cctor()
    // Offset: 0x1557F6C
    static void _cctor();
    // System.Int32 <SplitByMaxVertexCount>b__5_0(UnityEngine.ProBuilder.Face x)
    // Offset: 0x1557FD8
    int $SplitByMaxVertexCount$b__5_0(UnityEngine::ProBuilder::Face* x);
    // public System.Void .ctor()
    // Offset: 0x1557FD0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CombineMeshes::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::MeshOperations::CombineMeshes::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CombineMeshes::$$c*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.MeshOperations.CombineMeshes/UnityEngine.ProBuilder.MeshOperations.<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::CombineMeshes::$$c*, "UnityEngine.ProBuilder.MeshOperations", "CombineMeshes/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::CombineMeshes::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ProBuilder::MeshOperations::CombineMeshes::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::CombineMeshes::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::CombineMeshes::$$c::$SplitByMaxVertexCount$b__5_0
// Il2CppName: <SplitByMaxVertexCount>b__5_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::MeshOperations::CombineMeshes::$$c::*)(UnityEngine::ProBuilder::Face*)>(&UnityEngine::ProBuilder::MeshOperations::CombineMeshes::$$c::$SplitByMaxVertexCount$b__5_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::CombineMeshes::$$c*), "<SplitByMaxVertexCount>b__5_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::CombineMeshes::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.KeyCode
#include "UnityEngine/KeyCode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LocalLeaderboardsModel
  class LocalLeaderboardsModel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: ResetLocalLeaderboardOnKey
  // [TokenAttribute] Offset: FFFFFFFF
  class ResetLocalLeaderboardOnKey : public UnityEngine::MonoBehaviour {
    public:
    // private LocalLeaderboardsModel _localLeaderboardsModel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::LocalLeaderboardsModel* localLeaderboardsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LocalLeaderboardsModel*) == 0x8);
    // private UnityEngine.KeyCode _keyCode
    // Size: 0x4
    // Offset: 0x20
    UnityEngine::KeyCode keyCode;
    // Field size check
    static_assert(sizeof(UnityEngine::KeyCode) == 0x4);
    // Creating value type constructor for type: ResetLocalLeaderboardOnKey
    ResetLocalLeaderboardOnKey(GlobalNamespace::LocalLeaderboardsModel* localLeaderboardsModel_ = {}, UnityEngine::KeyCode keyCode_ = {}) noexcept : localLeaderboardsModel{localLeaderboardsModel_}, keyCode{keyCode_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private LocalLeaderboardsModel _localLeaderboardsModel
    GlobalNamespace::LocalLeaderboardsModel*& dyn__localLeaderboardsModel();
    // Get instance field reference: private UnityEngine.KeyCode _keyCode
    UnityEngine::KeyCode& dyn__keyCode();
    // private System.Void Update()
    // Offset: 0x1127C90
    void Update();
    // public System.Void .ctor()
    // Offset: 0x1127CDC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResetLocalLeaderboardOnKey* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ResetLocalLeaderboardOnKey::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResetLocalLeaderboardOnKey*, creationType>()));
    }
  }; // ResetLocalLeaderboardOnKey
  #pragma pack(pop)
  static check_size<sizeof(ResetLocalLeaderboardOnKey), 32 + sizeof(UnityEngine::KeyCode)> __GlobalNamespace_ResetLocalLeaderboardOnKeySizeCheck;
  static_assert(sizeof(ResetLocalLeaderboardOnKey) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ResetLocalLeaderboardOnKey*, "", "ResetLocalLeaderboardOnKey");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ResetLocalLeaderboardOnKey::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ResetLocalLeaderboardOnKey::*)()>(&GlobalNamespace::ResetLocalLeaderboardOnKey::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ResetLocalLeaderboardOnKey*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ResetLocalLeaderboardOnKey::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: AppInit
#include "GlobalNamespace/AppInit.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MainSystemInit
  class MainSystemInit;
  // Forward declaring type: NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO
  class NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO;
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: NetEaseAppInit
  // [TokenAttribute] Offset: FFFFFFFF
  class NetEaseAppInit : public GlobalNamespace::AppInit {
    public:
    // private MainSystemInit _mainSystemInit
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::MainSystemInit* mainSystemInit;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainSystemInit*) == 0x8);
    // private NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO _netEaseLoginSceneTransitionSetupData
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO* netEaseLoginSceneTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO*) == 0x8);
    // private MainSettingsModelSO _mainSettingsModel
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainSettingsModelSO*) == 0x8);
    // Creating value type constructor for type: NetEaseAppInit
    NetEaseAppInit(GlobalNamespace::MainSystemInit* mainSystemInit_ = {}, GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO* netEaseLoginSceneTransitionSetupData_ = {}, GlobalNamespace::MainSettingsModelSO* mainSettingsModel_ = {}) noexcept : mainSystemInit{mainSystemInit_}, netEaseLoginSceneTransitionSetupData{netEaseLoginSceneTransitionSetupData_}, mainSettingsModel{mainSettingsModel_} {}
    // Get instance field reference: private MainSystemInit _mainSystemInit
    GlobalNamespace::MainSystemInit*& dyn__mainSystemInit();
    // Get instance field reference: private NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO _netEaseLoginSceneTransitionSetupData
    GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO*& dyn__netEaseLoginSceneTransitionSetupData();
    // Get instance field reference: private MainSettingsModelSO _mainSettingsModel
    GlobalNamespace::MainSettingsModelSO*& dyn__mainSettingsModel();
    // public System.Void .ctor()
    // Offset: 0x1046668
    // Implemented from: AppInit
    // Base method: System.Void AppInit::.ctor()
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetEaseAppInit* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetEaseAppInit::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetEaseAppInit*, creationType>()));
    }
    // protected override System.Void AppStartAndMultiSceneEditorSetup()
    // Offset: 0x10464C0
    // Implemented from: AppInit
    // Base method: System.Void AppInit::AppStartAndMultiSceneEditorSetup()
    void AppStartAndMultiSceneEditorSetup();
    // protected override System.Void RepeatableSetup()
    // Offset: 0x104652C
    // Implemented from: AppInit
    // Base method: System.Void AppInit::RepeatableSetup()
    void RepeatableSetup();
    // protected override System.Void TransitionToNextScene()
    // Offset: 0x1046578
    // Implemented from: AppInit
    // Base method: System.Void AppInit::TransitionToNextScene()
    void TransitionToNextScene();
    // public override System.Void InstallBindings()
    // Offset: 0x10465C4
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
  }; // NetEaseAppInit
  #pragma pack(pop)
  static check_size<sizeof(NetEaseAppInit), 80 + sizeof(GlobalNamespace::MainSettingsModelSO*)> __GlobalNamespace_NetEaseAppInitSizeCheck;
  static_assert(sizeof(NetEaseAppInit) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetEaseAppInit*, "", "NetEaseAppInit");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NetEaseAppInit::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NetEaseAppInit::AppStartAndMultiSceneEditorSetup
// Il2CppName: AppStartAndMultiSceneEditorSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseAppInit::*)()>(&GlobalNamespace::NetEaseAppInit::AppStartAndMultiSceneEditorSetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseAppInit*), "AppStartAndMultiSceneEditorSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseAppInit::RepeatableSetup
// Il2CppName: RepeatableSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseAppInit::*)()>(&GlobalNamespace::NetEaseAppInit::RepeatableSetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseAppInit*), "RepeatableSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseAppInit::TransitionToNextScene
// Il2CppName: TransitionToNextScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseAppInit::*)()>(&GlobalNamespace::NetEaseAppInit::TransitionToNextScene)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseAppInit*), "TransitionToNextScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseAppInit::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseAppInit::*)()>(&GlobalNamespace::NetEaseAppInit::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseAppInit*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
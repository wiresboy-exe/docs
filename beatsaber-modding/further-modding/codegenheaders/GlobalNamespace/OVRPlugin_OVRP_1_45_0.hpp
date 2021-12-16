// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_1_45_0
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::OVRP_1_45_0 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OVRP_1_45_0
    OVRP_1_45_0() noexcept {}
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static private System.Void .cctor()
    // Offset: 0x163757C
    static void _cctor();
    // static public OVRPlugin/Result ovrp_GetSystemHmd3DofModeEnabled(ref OVRPlugin/Bool enabled)
    // Offset: 0x16374FC
    static GlobalNamespace::OVRPlugin::Result ovrp_GetSystemHmd3DofModeEnabled(ByRef<GlobalNamespace::OVRPlugin::Bool> enabled);
    // static public OVRPlugin/Result ovrp_Media_SetAvailableQueueIndexVulkan(System.UInt32 queueIndexVk)
    // Offset: 0x16316D8
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_SetAvailableQueueIndexVulkan(uint queueIndexVk);
  }; // OVRPlugin/OVRP_1_45_0
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_45_0*, "", "OVRPlugin/OVRP_1_45_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_45_0::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_45_0::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_45_0*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_45_0::ovrp_GetSystemHmd3DofModeEnabled
// Il2CppName: ovrp_GetSystemHmd3DofModeEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(ByRef<GlobalNamespace::OVRPlugin::Bool>)>(&GlobalNamespace::OVRPlugin::OVRP_1_45_0::ovrp_GetSystemHmd3DofModeEnabled)> {
  static const MethodInfo* get() {
    static auto* enabled = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_45_0*), "ovrp_GetSystemHmd3DofModeEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enabled});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_45_0::ovrp_Media_SetAvailableQueueIndexVulkan
// Il2CppName: ovrp_Media_SetAvailableQueueIndexVulkan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(uint)>(&GlobalNamespace::OVRPlugin::OVRP_1_45_0::ovrp_Media_SetAvailableQueueIndexVulkan)> {
  static const MethodInfo* get() {
    static auto* queueIndexVk = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_45_0*), "ovrp_Media_SetAvailableQueueIndexVulkan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{queueIndexVk});
  }
};
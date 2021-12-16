// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/PlatformUI
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::PlatformUI/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: PlatformUI
    constexpr PlatformUI(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/PlatformUI None
    static constexpr const int None = -1;
    // Get static field: static public OVRPlugin/PlatformUI None
    static GlobalNamespace::OVRPlugin::PlatformUI _get_None();
    // Set static field: static public OVRPlugin/PlatformUI None
    static void _set_None(GlobalNamespace::OVRPlugin::PlatformUI value);
    // static field const value: static public OVRPlugin/PlatformUI ConfirmQuit
    static constexpr const int ConfirmQuit = 1;
    // Get static field: static public OVRPlugin/PlatformUI ConfirmQuit
    static GlobalNamespace::OVRPlugin::PlatformUI _get_ConfirmQuit();
    // Set static field: static public OVRPlugin/PlatformUI ConfirmQuit
    static void _set_ConfirmQuit(GlobalNamespace::OVRPlugin::PlatformUI value);
    // static field const value: static public OVRPlugin/PlatformUI GlobalMenuTutorial
    static constexpr const int GlobalMenuTutorial = 2;
    // Get static field: static public OVRPlugin/PlatformUI GlobalMenuTutorial
    static GlobalNamespace::OVRPlugin::PlatformUI _get_GlobalMenuTutorial();
    // Set static field: static public OVRPlugin/PlatformUI GlobalMenuTutorial
    static void _set_GlobalMenuTutorial(GlobalNamespace::OVRPlugin::PlatformUI value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVRPlugin/PlatformUI
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::PlatformUI), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_PlatformUISizeCheck;
  static_assert(sizeof(OVRPlugin::PlatformUI) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::PlatformUI, "", "OVRPlugin/PlatformUI");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
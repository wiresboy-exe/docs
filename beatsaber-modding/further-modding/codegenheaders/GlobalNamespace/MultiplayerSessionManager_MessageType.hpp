// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerSessionManager/MessageType
  // [TokenAttribute] Offset: FFFFFFFF
  struct MultiplayerSessionManager_MessageType/*, public System::Enum*/ {
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Creating value type constructor for type: MultiplayerSessionManager_MessageType
    constexpr MultiplayerSessionManager_MessageType(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public MultiplayerSessionManager/MessageType MenuRpc
    static constexpr const uint8_t MenuRpc = 0u;
    // Get static field: static public MultiplayerSessionManager/MessageType MenuRpc
    static GlobalNamespace::MultiplayerSessionManager_MessageType _get_MenuRpc();
    // Set static field: static public MultiplayerSessionManager/MessageType MenuRpc
    static void _set_MenuRpc(GlobalNamespace::MultiplayerSessionManager_MessageType value);
    // static field const value: static public MultiplayerSessionManager/MessageType GameplayRpc
    static constexpr const uint8_t GameplayRpc = 1u;
    // Get static field: static public MultiplayerSessionManager/MessageType GameplayRpc
    static GlobalNamespace::MultiplayerSessionManager_MessageType _get_GameplayRpc();
    // Set static field: static public MultiplayerSessionManager/MessageType GameplayRpc
    static void _set_GameplayRpc(GlobalNamespace::MultiplayerSessionManager_MessageType value);
    // static field const value: static public MultiplayerSessionManager/MessageType NodePoseSyncState
    static constexpr const uint8_t NodePoseSyncState = 2u;
    // Get static field: static public MultiplayerSessionManager/MessageType NodePoseSyncState
    static GlobalNamespace::MultiplayerSessionManager_MessageType _get_NodePoseSyncState();
    // Set static field: static public MultiplayerSessionManager/MessageType NodePoseSyncState
    static void _set_NodePoseSyncState(GlobalNamespace::MultiplayerSessionManager_MessageType value);
    // static field const value: static public MultiplayerSessionManager/MessageType ScoreSyncState
    static constexpr const uint8_t ScoreSyncState = 3u;
    // Get static field: static public MultiplayerSessionManager/MessageType ScoreSyncState
    static GlobalNamespace::MultiplayerSessionManager_MessageType _get_ScoreSyncState();
    // Set static field: static public MultiplayerSessionManager/MessageType ScoreSyncState
    static void _set_ScoreSyncState(GlobalNamespace::MultiplayerSessionManager_MessageType value);
    // static field const value: static public MultiplayerSessionManager/MessageType NodePoseSyncStateDelta
    static constexpr const uint8_t NodePoseSyncStateDelta = 4u;
    // Get static field: static public MultiplayerSessionManager/MessageType NodePoseSyncStateDelta
    static GlobalNamespace::MultiplayerSessionManager_MessageType _get_NodePoseSyncStateDelta();
    // Set static field: static public MultiplayerSessionManager/MessageType NodePoseSyncStateDelta
    static void _set_NodePoseSyncStateDelta(GlobalNamespace::MultiplayerSessionManager_MessageType value);
    // static field const value: static public MultiplayerSessionManager/MessageType ScoreSyncStateDelta
    static constexpr const uint8_t ScoreSyncStateDelta = 5u;
    // Get static field: static public MultiplayerSessionManager/MessageType ScoreSyncStateDelta
    static GlobalNamespace::MultiplayerSessionManager_MessageType _get_ScoreSyncStateDelta();
    // Set static field: static public MultiplayerSessionManager/MessageType ScoreSyncStateDelta
    static void _set_ScoreSyncStateDelta(GlobalNamespace::MultiplayerSessionManager_MessageType value);
    // Get instance field reference: public System.Byte value__
    uint8_t& dyn_value__();
  }; // MultiplayerSessionManager/MessageType
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerSessionManager_MessageType), 0 + sizeof(uint8_t)> __GlobalNamespace_MultiplayerSessionManager_MessageTypeSizeCheck;
  static_assert(sizeof(MultiplayerSessionManager_MessageType) == 0x1);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerSessionManager_MessageType, "", "MultiplayerSessionManager/MessageType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
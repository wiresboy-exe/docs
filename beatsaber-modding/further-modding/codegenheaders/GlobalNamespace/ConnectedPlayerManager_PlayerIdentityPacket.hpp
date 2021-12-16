// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: ConnectedPlayerManager
#include "GlobalNamespace/ConnectedPlayerManager.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: IPoolablePacket
#include "GlobalNamespace/IPoolablePacket.hpp"
// Including type: PlayerStateHash
#include "GlobalNamespace/PlayerStateHash.hpp"
// Including type: MultiplayerAvatarData
#include "GlobalNamespace/MultiplayerAvatarData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PacketPool`1<T>
  template<typename T>
  class PacketPool_1;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: ConnectedPlayerManager/PlayerIdentityPacket
  // [TokenAttribute] Offset: FFFFFFFF
  class ConnectedPlayerManager::PlayerIdentityPacket : public ::Il2CppObject/*, public LiteNetLib::Utils::INetSerializable, public GlobalNamespace::IPoolablePacket*/ {
    public:
    // public PlayerStateHash playerState
    // Size: 0x10
    // Offset: 0x10
    GlobalNamespace::PlayerStateHash playerState;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerStateHash) == 0x10);
    // public MultiplayerAvatarData playerAvatar
    // Size: 0x70
    // Offset: 0x20
    GlobalNamespace::MultiplayerAvatarData playerAvatar;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerAvatarData) == 0x70);
    // Creating value type constructor for type: PlayerIdentityPacket
    PlayerIdentityPacket(GlobalNamespace::PlayerStateHash playerState_ = {}, GlobalNamespace::MultiplayerAvatarData playerAvatar_ = {}) noexcept : playerState{playerState_}, playerAvatar{playerAvatar_} {}
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IPoolablePacket
    operator GlobalNamespace::IPoolablePacket() noexcept {
      return *reinterpret_cast<GlobalNamespace::IPoolablePacket*>(this);
    }
    // Get instance field reference: public PlayerStateHash playerState
    GlobalNamespace::PlayerStateHash& dyn_playerState();
    // Get instance field reference: public MultiplayerAvatarData playerAvatar
    GlobalNamespace::MultiplayerAvatarData& dyn_playerAvatar();
    // static public PacketPool`1<ConnectedPlayerManager/PlayerIdentityPacket> get_pool()
    // Offset: 0x13398E8
    static GlobalNamespace::PacketPool_1<GlobalNamespace::ConnectedPlayerManager::PlayerIdentityPacket*>* get_pool();
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x133CBA0
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x133CBD8
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0x133CC30
    void Release();
    // public ConnectedPlayerManager/PlayerIdentityPacket Init(PlayerStateHash states, MultiplayerAvatarData avatar)
    // Offset: 0x133C75C
    GlobalNamespace::ConnectedPlayerManager::PlayerIdentityPacket* Init(GlobalNamespace::PlayerStateHash states, GlobalNamespace::MultiplayerAvatarData avatar);
    // public System.Void .ctor()
    // Offset: 0x133CC8C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConnectedPlayerManager::PlayerIdentityPacket* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ConnectedPlayerManager::PlayerIdentityPacket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConnectedPlayerManager::PlayerIdentityPacket*, creationType>()));
    }
  }; // ConnectedPlayerManager/PlayerIdentityPacket
  #pragma pack(pop)
  static check_size<sizeof(ConnectedPlayerManager::PlayerIdentityPacket), 32 + sizeof(GlobalNamespace::MultiplayerAvatarData)> __GlobalNamespace_ConnectedPlayerManager_PlayerIdentityPacketSizeCheck;
  static_assert(sizeof(ConnectedPlayerManager::PlayerIdentityPacket) == 0x90);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConnectedPlayerManager::PlayerIdentityPacket*, "", "ConnectedPlayerManager/PlayerIdentityPacket");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::PlayerIdentityPacket::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<GlobalNamespace::ConnectedPlayerManager::PlayerIdentityPacket*>* (*)()>(&GlobalNamespace::ConnectedPlayerManager::PlayerIdentityPacket::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::PlayerIdentityPacket*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::PlayerIdentityPacket::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::PlayerIdentityPacket::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::ConnectedPlayerManager::PlayerIdentityPacket::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::PlayerIdentityPacket*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::PlayerIdentityPacket::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::PlayerIdentityPacket::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::ConnectedPlayerManager::PlayerIdentityPacket::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::PlayerIdentityPacket*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::PlayerIdentityPacket::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::PlayerIdentityPacket::*)()>(&GlobalNamespace::ConnectedPlayerManager::PlayerIdentityPacket::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::PlayerIdentityPacket*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::PlayerIdentityPacket::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ConnectedPlayerManager::PlayerIdentityPacket* (GlobalNamespace::ConnectedPlayerManager::PlayerIdentityPacket::*)(GlobalNamespace::PlayerStateHash, GlobalNamespace::MultiplayerAvatarData)>(&GlobalNamespace::ConnectedPlayerManager::PlayerIdentityPacket::Init)> {
  static const MethodInfo* get() {
    static auto* states = &::il2cpp_utils::GetClassFromName("", "PlayerStateHash")->byval_arg;
    static auto* avatar = &::il2cpp_utils::GetClassFromName("", "MultiplayerAvatarData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::PlayerIdentityPacket*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{states, avatar});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::PlayerIdentityPacket::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
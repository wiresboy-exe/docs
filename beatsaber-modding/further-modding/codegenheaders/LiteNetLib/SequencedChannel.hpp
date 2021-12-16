// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.BaseChannel
#include "LiteNetLib/BaseChannel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetPacket
  class NetPacket;
  // Forward declaring type: NetPeer
  class NetPeer;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.SequencedChannel
  // [TokenAttribute] Offset: FFFFFFFF
  class SequencedChannel : public LiteNetLib::BaseChannel {
    public:
    // private System.Int32 _localSequence
    // Size: 0x4
    // Offset: 0x28
    int localSequence;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.UInt16 _remoteSequence
    // Size: 0x2
    // Offset: 0x2C
    uint16_t remoteSequence;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // private readonly System.Boolean _reliable
    // Size: 0x1
    // Offset: 0x2E
    bool reliable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: reliable and: lastPacket
    char __padding2[0x1] = {};
    // private LiteNetLib.NetPacket _lastPacket
    // Size: 0x8
    // Offset: 0x30
    LiteNetLib::NetPacket* lastPacket;
    // Field size check
    static_assert(sizeof(LiteNetLib::NetPacket*) == 0x8);
    // private readonly LiteNetLib.NetPacket _ackPacket
    // Size: 0x8
    // Offset: 0x38
    LiteNetLib::NetPacket* ackPacket;
    // Field size check
    static_assert(sizeof(LiteNetLib::NetPacket*) == 0x8);
    // private System.Boolean _mustSendAck
    // Size: 0x1
    // Offset: 0x40
    bool mustSendAck;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private readonly System.Byte _id
    // Size: 0x1
    // Offset: 0x41
    uint8_t id;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: id and: lastPacketSendTime
    char __padding6[0x6] = {};
    // private System.Int64 _lastPacketSendTime
    // Size: 0x8
    // Offset: 0x48
    int64_t lastPacketSendTime;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // Creating value type constructor for type: SequencedChannel
    SequencedChannel(int localSequence_ = {}, uint16_t remoteSequence_ = {}, bool reliable_ = {}, LiteNetLib::NetPacket* lastPacket_ = {}, LiteNetLib::NetPacket* ackPacket_ = {}, bool mustSendAck_ = {}, uint8_t id_ = {}, int64_t lastPacketSendTime_ = {}) noexcept : localSequence{localSequence_}, remoteSequence{remoteSequence_}, reliable{reliable_}, lastPacket{lastPacket_}, ackPacket{ackPacket_}, mustSendAck{mustSendAck_}, id{id_}, lastPacketSendTime{lastPacketSendTime_} {}
    // Get instance field reference: private System.Int32 _localSequence
    int& dyn__localSequence();
    // Get instance field reference: private System.UInt16 _remoteSequence
    uint16_t& dyn__remoteSequence();
    // Get instance field reference: private readonly System.Boolean _reliable
    bool& dyn__reliable();
    // Get instance field reference: private LiteNetLib.NetPacket _lastPacket
    LiteNetLib::NetPacket*& dyn__lastPacket();
    // Get instance field reference: private readonly LiteNetLib.NetPacket _ackPacket
    LiteNetLib::NetPacket*& dyn__ackPacket();
    // Get instance field reference: private System.Boolean _mustSendAck
    bool& dyn__mustSendAck();
    // Get instance field reference: private readonly System.Byte _id
    uint8_t& dyn__id();
    // Get instance field reference: private System.Int64 _lastPacketSendTime
    int64_t& dyn__lastPacketSendTime();
    // public System.Void .ctor(LiteNetLib.NetPeer peer, System.Boolean reliable, System.Byte id)
    // Offset: 0x1C25404
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SequencedChannel* New_ctor(LiteNetLib::NetPeer* peer, bool reliable, uint8_t id) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::SequencedChannel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SequencedChannel*, creationType>(peer, reliable, id)));
    }
    // public override System.Void SendNextPackets()
    // Offset: 0x1C29754
    // Implemented from: LiteNetLib.BaseChannel
    // Base method: System.Void BaseChannel::SendNextPackets()
    void SendNextPackets();
    // public override System.Boolean ProcessPacket(LiteNetLib.NetPacket packet)
    // Offset: 0x1C29A34
    // Implemented from: LiteNetLib.BaseChannel
    // Base method: System.Boolean BaseChannel::ProcessPacket(LiteNetLib.NetPacket packet)
    bool ProcessPacket(LiteNetLib::NetPacket* packet);
  }; // LiteNetLib.SequencedChannel
  #pragma pack(pop)
  static check_size<sizeof(SequencedChannel), 72 + sizeof(int64_t)> __LiteNetLib_SequencedChannelSizeCheck;
  static_assert(sizeof(SequencedChannel) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::SequencedChannel*, "LiteNetLib", "SequencedChannel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::SequencedChannel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::SequencedChannel::SendNextPackets
// Il2CppName: SendNextPackets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::SequencedChannel::*)()>(&LiteNetLib::SequencedChannel::SendNextPackets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::SequencedChannel*), "SendNextPackets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::SequencedChannel::ProcessPacket
// Il2CppName: ProcessPacket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LiteNetLib::SequencedChannel::*)(LiteNetLib::NetPacket*)>(&LiteNetLib::SequencedChannel::ProcessPacket)> {
  static const MethodInfo* get() {
    static auto* packet = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NetPacket")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::SequencedChannel*), "ProcessPacket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packet});
  }
};
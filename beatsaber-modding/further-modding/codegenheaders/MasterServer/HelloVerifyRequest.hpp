// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BaseMasterServerReliableResponse
#include "GlobalNamespace/BaseMasterServerReliableResponse.hpp"
// Including type: MasterServer.IHandshakeServerToClientMessage
#include "MasterServer/IHandshakeServerToClientMessage.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ByteArrayNetSerializable
  class ByteArrayNetSerializable;
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
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.HelloVerifyRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class HelloVerifyRequest : public GlobalNamespace::BaseMasterServerReliableResponse/*, public MasterServer::IHandshakeServerToClientMessage*/ {
    public:
    // public readonly ByteArrayNetSerializable cookie
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ByteArrayNetSerializable* cookie;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // Creating value type constructor for type: HelloVerifyRequest
    HelloVerifyRequest(GlobalNamespace::ByteArrayNetSerializable* cookie_ = {}) noexcept : cookie{cookie_} {}
    // Creating interface conversion operator: operator MasterServer::IHandshakeServerToClientMessage
    operator MasterServer::IHandshakeServerToClientMessage() noexcept {
      return *reinterpret_cast<MasterServer::IHandshakeServerToClientMessage*>(this);
    }
    // Creating conversion operator: operator GlobalNamespace::ByteArrayNetSerializable*
    constexpr operator GlobalNamespace::ByteArrayNetSerializable*() const noexcept {
      return cookie;
    }
    // Get instance field reference: public readonly ByteArrayNetSerializable cookie
    GlobalNamespace::ByteArrayNetSerializable*& dyn_cookie();
    // static public PacketPool`1<MasterServer.HelloVerifyRequest> get_pool()
    // Offset: 0x121D744
    static GlobalNamespace::PacketPool_1<MasterServer::HelloVerifyRequest*>* get_pool();
    // public MasterServer.HelloVerifyRequest Init(System.Byte[] cookie)
    // Offset: 0x121D78C
    MasterServer::HelloVerifyRequest* Init(::Array<uint8_t>* cookie);
    // public System.Void .ctor()
    // Offset: 0x121D8A4
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HelloVerifyRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::HelloVerifyRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HelloVerifyRequest*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x121D7C0
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x121D7FC
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x121D838
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Release()
    void Release();
  }; // MasterServer.HelloVerifyRequest
  #pragma pack(pop)
  static check_size<sizeof(HelloVerifyRequest), 24 + sizeof(GlobalNamespace::ByteArrayNetSerializable*)> __MasterServer_HelloVerifyRequestSizeCheck;
  static_assert(sizeof(HelloVerifyRequest) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::HelloVerifyRequest*, "MasterServer", "HelloVerifyRequest");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::HelloVerifyRequest::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<MasterServer::HelloVerifyRequest*>* (*)()>(&MasterServer::HelloVerifyRequest::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::HelloVerifyRequest*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::HelloVerifyRequest::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<MasterServer::HelloVerifyRequest* (MasterServer::HelloVerifyRequest::*)(::Array<uint8_t>*)>(&MasterServer::HelloVerifyRequest::Init)> {
  static const MethodInfo* get() {
    static auto* cookie = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::HelloVerifyRequest*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cookie});
  }
};
// Writing MetadataGetter for method: MasterServer::HelloVerifyRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::HelloVerifyRequest::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::HelloVerifyRequest::*)(LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::HelloVerifyRequest::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::HelloVerifyRequest*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: MasterServer::HelloVerifyRequest::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::HelloVerifyRequest::*)(LiteNetLib::Utils::NetDataReader*)>(&MasterServer::HelloVerifyRequest::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::HelloVerifyRequest*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: MasterServer::HelloVerifyRequest::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::HelloVerifyRequest::*)()>(&MasterServer::HelloVerifyRequest::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::HelloVerifyRequest*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
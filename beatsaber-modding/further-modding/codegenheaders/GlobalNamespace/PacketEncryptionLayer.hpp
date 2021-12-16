// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.Layers.PacketLayerBase
#include "LiteNetLib/Layers/PacketLayerBase.hpp"
// Including type: EncryptionUtility
#include "GlobalNamespace/EncryptionUtility.hpp"
// Including type: System.Byte
#include "System/Byte.hpp"
// Including type: System.Int64
#include "System/Int64.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ExpiringDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class ExpiringDictionary_2;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Forward declaring namespace: System::Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: Stopwatch
  class Stopwatch;
}
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: ITimeProvider
  class ITimeProvider;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3A
  #pragma pack(push, 1)
  // Autogenerated type: PacketEncryptionLayer
  // [TokenAttribute] Offset: FFFFFFFF
  class PacketEncryptionLayer : public LiteNetLib::Layers::PacketLayerBase {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    // Nested type: GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics
    class EncryptionStatistics;
    // Nested type: GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList
    class PendingEncryptionStateList;
    // Nested type: GlobalNamespace::PacketEncryptionLayer::$AddEncryptedEndpointAsync$d__24
    struct $AddEncryptedEndpointAsync$d__24;
    // Nested type: GlobalNamespace::PacketEncryptionLayer::$AddPendingEncryptedEndpointAsync$d__26
    struct $AddPendingEncryptedEndpointAsync$d__26;
    // public readonly PacketEncryptionLayer/EncryptionStatistics statistics
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics* statistics;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics*) == 0x8);
    // private readonly ExpiringDictionary`2<System.Net.IPEndPoint,EncryptionUtility/IEncryptionState> _encryptionStates
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ExpiringDictionary_2<System::Net::IPEndPoint*, GlobalNamespace::EncryptionUtility::IEncryptionState*>* encryptionStates;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ExpiringDictionary_2<System::Net::IPEndPoint*, GlobalNamespace::EncryptionUtility::IEncryptionState*>*) == 0x8);
    // private readonly ExpiringDictionary`2<System.Net.IPAddress,PacketEncryptionLayer/PendingEncryptionStateList> _pendingEncryptionStates
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::ExpiringDictionary_2<System::Net::IPAddress*, GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList*>* pendingEncryptionStates;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ExpiringDictionary_2<System::Net::IPAddress*, GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList*>*) == 0x8);
    // private System.Byte[] _unencryptedTrafficFilter
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* unencryptedTrafficFilter;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Boolean <filterUnencryptedTraffic>k__BackingField
    // Size: 0x1
    // Offset: 0x38
    bool filterUnencryptedTraffic;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <enableStatistics>k__BackingField
    // Size: 0x1
    // Offset: 0x39
    bool enableStatistics;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: PacketEncryptionLayer
    PacketEncryptionLayer(GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics* statistics_ = {}, GlobalNamespace::ExpiringDictionary_2<System::Net::IPEndPoint*, GlobalNamespace::EncryptionUtility::IEncryptionState*>* encryptionStates_ = {}, GlobalNamespace::ExpiringDictionary_2<System::Net::IPAddress*, GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList*>* pendingEncryptionStates_ = {}, ::Array<uint8_t>* unencryptedTrafficFilter_ = {}, bool filterUnencryptedTraffic_ = {}, bool enableStatistics_ = {}) noexcept : statistics{statistics_}, encryptionStates{encryptionStates_}, pendingEncryptionStates{pendingEncryptionStates_}, unencryptedTrafficFilter{unencryptedTrafficFilter_}, filterUnencryptedTraffic{filterUnencryptedTraffic_}, enableStatistics{enableStatistics_} {}
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // static field const value: static private System.Byte kEncryptedPacketType
    static constexpr const uint8_t kEncryptedPacketType = 1u;
    // Get static field: static private System.Byte kEncryptedPacketType
    static uint8_t _get_kEncryptedPacketType();
    // Set static field: static private System.Byte kEncryptedPacketType
    static void _set_kEncryptedPacketType(uint8_t value);
    // static field const value: static private System.Byte kPlaintextPacketType
    static constexpr const uint8_t kPlaintextPacketType = 0u;
    // Get static field: static private System.Byte kPlaintextPacketType
    static uint8_t _get_kPlaintextPacketType();
    // Set static field: static private System.Byte kPlaintextPacketType
    static void _set_kPlaintextPacketType(uint8_t value);
    // static field const value: static private System.Int64 kEncryptionStateTimeoutMs
    static constexpr const int64_t kEncryptionStateTimeoutMs = 300000;
    // Get static field: static private System.Int64 kEncryptionStateTimeoutMs
    static int64_t _get_kEncryptionStateTimeoutMs();
    // Set static field: static private System.Int64 kEncryptionStateTimeoutMs
    static void _set_kEncryptionStateTimeoutMs(int64_t value);
    // static field const value: static private System.Int64 kPendingEncryptionStateTimeoutMs
    static constexpr const int64_t kPendingEncryptionStateTimeoutMs = 10000;
    // Get static field: static private System.Int64 kPendingEncryptionStateTimeoutMs
    static int64_t _get_kPendingEncryptionStateTimeoutMs();
    // Set static field: static private System.Int64 kPendingEncryptionStateTimeoutMs
    static void _set_kPendingEncryptionStateTimeoutMs(int64_t value);
    // Get static field: static private System.Diagnostics.Stopwatch _stopwatch
    static System::Diagnostics::Stopwatch* _get__stopwatch();
    // Set static field: static private System.Diagnostics.Stopwatch _stopwatch
    static void _set__stopwatch(System::Diagnostics::Stopwatch* value);
    // Get instance field reference: public readonly PacketEncryptionLayer/EncryptionStatistics statistics
    GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics*& dyn_statistics();
    // Get instance field reference: private readonly ExpiringDictionary`2<System.Net.IPEndPoint,EncryptionUtility/IEncryptionState> _encryptionStates
    GlobalNamespace::ExpiringDictionary_2<System::Net::IPEndPoint*, GlobalNamespace::EncryptionUtility::IEncryptionState*>*& dyn__encryptionStates();
    // Get instance field reference: private readonly ExpiringDictionary`2<System.Net.IPAddress,PacketEncryptionLayer/PendingEncryptionStateList> _pendingEncryptionStates
    GlobalNamespace::ExpiringDictionary_2<System::Net::IPAddress*, GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList*>*& dyn__pendingEncryptionStates();
    // Get instance field reference: private System.Byte[] _unencryptedTrafficFilter
    ::Array<uint8_t>*& dyn__unencryptedTrafficFilter();
    // Get instance field reference: private System.Boolean <filterUnencryptedTraffic>k__BackingField
    bool& dyn_$filterUnencryptedTraffic$k__BackingField();
    // Get instance field reference: private System.Boolean <enableStatistics>k__BackingField
    bool& dyn_$enableStatistics$k__BackingField();
    // public System.Boolean get_filterUnencryptedTraffic()
    // Offset: 0x16F58B0
    bool get_filterUnencryptedTraffic();
    // public System.Void set_filterUnencryptedTraffic(System.Boolean value)
    // Offset: 0x16F58B8
    void set_filterUnencryptedTraffic(bool value);
    // public System.Boolean get_enableStatistics()
    // Offset: 0x16F58C4
    bool get_enableStatistics();
    // public System.Void set_enableStatistics(System.Boolean value)
    // Offset: 0x16F58CC
    void set_enableStatistics(bool value);
    // public System.Void .ctor(MasterServer.ITimeProvider timeProvider)
    // Offset: 0x16F58D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PacketEncryptionLayer* New_ctor(MasterServer::ITimeProvider* timeProvider) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PacketEncryptionLayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PacketEncryptionLayer*, creationType>(timeProvider)));
    }
    // public System.Void SetUnencryptedTrafficFilter(System.Byte[] unencryptedTrafficFilter)
    // Offset: 0x16F6298
    void SetUnencryptedTrafficFilter(::Array<uint8_t>* unencryptedTrafficFilter);
    // public EncryptionUtility/IEncryptionState AddEncryptedEndpoint(System.Net.IPEndPoint endPoint, System.Byte[] preMasterSecret, System.Byte[] serverRandom, System.Byte[] clientRandom, System.Boolean isClient)
    // Offset: 0x16F62A0
    GlobalNamespace::EncryptionUtility::IEncryptionState* AddEncryptedEndpoint(System::Net::IPEndPoint* endPoint, ::Array<uint8_t>* preMasterSecret, ::Array<uint8_t>* serverRandom, ::Array<uint8_t>* clientRandom, bool isClient);
    // public System.Threading.Tasks.Task`1<EncryptionUtility/IEncryptionState> AddEncryptedEndpointAsync(System.Net.IPEndPoint endPoint, System.Byte[] preMasterSecret, System.Byte[] serverRandom, System.Byte[] clientRandom, System.Boolean isClient)
    // Offset: 0x16F63D4
    System::Threading::Tasks::Task_1<GlobalNamespace::EncryptionUtility::IEncryptionState*>* AddEncryptedEndpointAsync(System::Net::IPEndPoint* endPoint, ::Array<uint8_t>* preMasterSecret, ::Array<uint8_t>* serverRandom, ::Array<uint8_t>* clientRandom, bool isClient);
    // public System.Boolean RemoveEncryptedEndpoint(System.Net.IPEndPoint endPoint, EncryptionUtility/IEncryptionState encryptedState)
    // Offset: 0x16F6514
    bool RemoveEncryptedEndpoint(System::Net::IPEndPoint* endPoint, GlobalNamespace::EncryptionUtility::IEncryptionState* encryptedState);
    // public System.Threading.Tasks.Task AddPendingEncryptedEndpointAsync(System.Net.IPEndPoint endPoint, System.Byte[] preMasterSecret, System.Byte[] serverRandom, System.Byte[] clientRandom, System.Boolean isClient)
    // Offset: 0x16F6898
    System::Threading::Tasks::Task* AddPendingEncryptedEndpointAsync(System::Net::IPEndPoint* endPoint, ::Array<uint8_t>* preMasterSecret, ::Array<uint8_t>* serverRandom, ::Array<uint8_t>* clientRandom, bool isClient);
    // public System.Void PollUpdate()
    // Offset: 0x16F69C8
    void PollUpdate();
    // public System.Void RemoveAllEndpoints()
    // Offset: 0x16F6B4C
    void RemoveAllEndpoints();
    // private System.Boolean TryGetEncryptionState(System.Net.IPEndPoint endPoint, out EncryptionUtility/IEncryptionState state)
    // Offset: 0x16F6CD0
    bool TryGetEncryptionState(System::Net::IPEndPoint* endPoint, ByRef<GlobalNamespace::EncryptionUtility::IEncryptionState*> state);
    // private System.Boolean TryGetPendingEncryptionState(System.Net.IPEndPoint endPoint, out EncryptionUtility/IEncryptionState state)
    // Offset: 0x16F6DC8
    bool TryGetPendingEncryptionState(System::Net::IPEndPoint* endPoint, ByRef<GlobalNamespace::EncryptionUtility::IEncryptionState*> state);
    // private System.Boolean TryGetPotentialPendingEncryptionStates(System.Net.IPEndPoint endPoint, out EncryptionUtility/IEncryptionState[] encryptionStates)
    // Offset: 0x16F7074
    bool TryGetPotentialPendingEncryptionStates(System::Net::IPEndPoint* endPoint, ByRef<::Array<GlobalNamespace::EncryptionUtility::IEncryptionState*>*> encryptionStates);
    // private System.Void PromotePendingEncryptionState(System.Net.IPEndPoint endPoint, EncryptionUtility/IEncryptionState state)
    // Offset: 0x16F7324
    void PromotePendingEncryptionState(System::Net::IPEndPoint* endPoint, GlobalNamespace::EncryptionUtility::IEncryptionState* state);
    // private System.Boolean MatchesFilter(System.Byte[] data, System.Int32 offset, System.Int32 length)
    // Offset: 0x16F76B4
    bool MatchesFilter(::Array<uint8_t>* data, int offset, int length);
    // private System.Boolean ProcessInboundPacketInternal(System.Net.IPEndPoint remoteEndPoint, ref System.Byte[] data, ref System.Int32 offset, ref System.Int32 length, out System.Boolean encrypted)
    // Offset: 0x16F5B6C
    bool ProcessInboundPacketInternal(System::Net::IPEndPoint* remoteEndPoint, ByRef<::Array<uint8_t>*> data, ByRef<int> offset, ByRef<int> length, ByRef<bool> encrypted);
    // public System.Boolean ProcessOutBoundPacketInternal(System.Net.IPEndPoint remoteEndPoint, ref System.Byte[] data, ref System.Int32 offset, ref System.Int32 length, out System.Boolean encrypted)
    // Offset: 0x16F6068
    bool ProcessOutBoundPacketInternal(System::Net::IPEndPoint* remoteEndPoint, ByRef<::Array<uint8_t>*> data, ByRef<int> offset, ByRef<int> length, ByRef<bool> encrypted);
    // static public System.Void Log(System.String message)
    // Offset: 0x16F773C
    static void Log(::Il2CppString* message);
    // static public System.Void LogV(System.String message)
    // Offset: 0x16F77C4
    static void LogV(::Il2CppString* message);
    // public override System.Void ProcessInboundPacket(System.Net.IPEndPoint remoteEndPoint, ref System.Byte[] data, ref System.Int32 offset, ref System.Int32 length)
    // Offset: 0x16F59C0
    // Implemented from: LiteNetLib.Layers.PacketLayerBase
    // Base method: System.Void PacketLayerBase::ProcessInboundPacket(System.Net.IPEndPoint remoteEndPoint, ref System.Byte[] data, ref System.Int32 offset, ref System.Int32 length)
    void ProcessInboundPacket(System::Net::IPEndPoint* remoteEndPoint, ByRef<::Array<uint8_t>*> data, ByRef<int> offset, ByRef<int> length);
    // public override System.Void ProcessOutBoundPacket(System.Net.IPEndPoint remoteEndPoint, ref System.Byte[] data, ref System.Int32 offset, ref System.Int32 length)
    // Offset: 0x16F5ED0
    // Implemented from: LiteNetLib.Layers.PacketLayerBase
    // Base method: System.Void PacketLayerBase::ProcessOutBoundPacket(System.Net.IPEndPoint remoteEndPoint, ref System.Byte[] data, ref System.Int32 offset, ref System.Int32 length)
    void ProcessOutBoundPacket(System::Net::IPEndPoint* remoteEndPoint, ByRef<::Array<uint8_t>*> data, ByRef<int> offset, ByRef<int> length);
  }; // PacketEncryptionLayer
  #pragma pack(pop)
  static check_size<sizeof(PacketEncryptionLayer), 57 + sizeof(bool)> __GlobalNamespace_PacketEncryptionLayerSizeCheck;
  static_assert(sizeof(PacketEncryptionLayer) == 0x3A);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PacketEncryptionLayer*, "", "PacketEncryptionLayer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::get_filterUnencryptedTraffic
// Il2CppName: get_filterUnencryptedTraffic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PacketEncryptionLayer::*)()>(&GlobalNamespace::PacketEncryptionLayer::get_filterUnencryptedTraffic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer*), "get_filterUnencryptedTraffic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::set_filterUnencryptedTraffic
// Il2CppName: set_filterUnencryptedTraffic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PacketEncryptionLayer::*)(bool)>(&GlobalNamespace::PacketEncryptionLayer::set_filterUnencryptedTraffic)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer*), "set_filterUnencryptedTraffic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::get_enableStatistics
// Il2CppName: get_enableStatistics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PacketEncryptionLayer::*)()>(&GlobalNamespace::PacketEncryptionLayer::get_enableStatistics)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer*), "get_enableStatistics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::set_enableStatistics
// Il2CppName: set_enableStatistics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PacketEncryptionLayer::*)(bool)>(&GlobalNamespace::PacketEncryptionLayer::set_enableStatistics)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer*), "set_enableStatistics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::SetUnencryptedTrafficFilter
// Il2CppName: SetUnencryptedTrafficFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PacketEncryptionLayer::*)(::Array<uint8_t>*)>(&GlobalNamespace::PacketEncryptionLayer::SetUnencryptedTrafficFilter)> {
  static const MethodInfo* get() {
    static auto* unencryptedTrafficFilter = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer*), "SetUnencryptedTrafficFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unencryptedTrafficFilter});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::AddEncryptedEndpoint
// Il2CppName: AddEncryptedEndpoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::EncryptionUtility::IEncryptionState* (GlobalNamespace::PacketEncryptionLayer::*)(System::Net::IPEndPoint*, ::Array<uint8_t>*, ::Array<uint8_t>*, ::Array<uint8_t>*, bool)>(&GlobalNamespace::PacketEncryptionLayer::AddEncryptedEndpoint)> {
  static const MethodInfo* get() {
    static auto* endPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* preMasterSecret = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* serverRandom = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* clientRandom = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* isClient = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer*), "AddEncryptedEndpoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{endPoint, preMasterSecret, serverRandom, clientRandom, isClient});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::AddEncryptedEndpointAsync
// Il2CppName: AddEncryptedEndpointAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::EncryptionUtility::IEncryptionState*>* (GlobalNamespace::PacketEncryptionLayer::*)(System::Net::IPEndPoint*, ::Array<uint8_t>*, ::Array<uint8_t>*, ::Array<uint8_t>*, bool)>(&GlobalNamespace::PacketEncryptionLayer::AddEncryptedEndpointAsync)> {
  static const MethodInfo* get() {
    static auto* endPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* preMasterSecret = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* serverRandom = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* clientRandom = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* isClient = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer*), "AddEncryptedEndpointAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{endPoint, preMasterSecret, serverRandom, clientRandom, isClient});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::RemoveEncryptedEndpoint
// Il2CppName: RemoveEncryptedEndpoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PacketEncryptionLayer::*)(System::Net::IPEndPoint*, GlobalNamespace::EncryptionUtility::IEncryptionState*)>(&GlobalNamespace::PacketEncryptionLayer::RemoveEncryptedEndpoint)> {
  static const MethodInfo* get() {
    static auto* endPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* encryptedState = &::il2cpp_utils::GetClassFromName("", "EncryptionUtility/IEncryptionState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer*), "RemoveEncryptedEndpoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{endPoint, encryptedState});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::AddPendingEncryptedEndpointAsync
// Il2CppName: AddPendingEncryptedEndpointAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (GlobalNamespace::PacketEncryptionLayer::*)(System::Net::IPEndPoint*, ::Array<uint8_t>*, ::Array<uint8_t>*, ::Array<uint8_t>*, bool)>(&GlobalNamespace::PacketEncryptionLayer::AddPendingEncryptedEndpointAsync)> {
  static const MethodInfo* get() {
    static auto* endPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* preMasterSecret = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* serverRandom = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* clientRandom = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* isClient = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer*), "AddPendingEncryptedEndpointAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{endPoint, preMasterSecret, serverRandom, clientRandom, isClient});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::PollUpdate
// Il2CppName: PollUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PacketEncryptionLayer::*)()>(&GlobalNamespace::PacketEncryptionLayer::PollUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer*), "PollUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::RemoveAllEndpoints
// Il2CppName: RemoveAllEndpoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PacketEncryptionLayer::*)()>(&GlobalNamespace::PacketEncryptionLayer::RemoveAllEndpoints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer*), "RemoveAllEndpoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::TryGetEncryptionState
// Il2CppName: TryGetEncryptionState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PacketEncryptionLayer::*)(System::Net::IPEndPoint*, ByRef<GlobalNamespace::EncryptionUtility::IEncryptionState*>)>(&GlobalNamespace::PacketEncryptionLayer::TryGetEncryptionState)> {
  static const MethodInfo* get() {
    static auto* endPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("", "EncryptionUtility/IEncryptionState")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer*), "TryGetEncryptionState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{endPoint, state});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::TryGetPendingEncryptionState
// Il2CppName: TryGetPendingEncryptionState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PacketEncryptionLayer::*)(System::Net::IPEndPoint*, ByRef<GlobalNamespace::EncryptionUtility::IEncryptionState*>)>(&GlobalNamespace::PacketEncryptionLayer::TryGetPendingEncryptionState)> {
  static const MethodInfo* get() {
    static auto* endPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("", "EncryptionUtility/IEncryptionState")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer*), "TryGetPendingEncryptionState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{endPoint, state});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::TryGetPotentialPendingEncryptionStates
// Il2CppName: TryGetPotentialPendingEncryptionStates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PacketEncryptionLayer::*)(System::Net::IPEndPoint*, ByRef<::Array<GlobalNamespace::EncryptionUtility::IEncryptionState*>*>)>(&GlobalNamespace::PacketEncryptionLayer::TryGetPotentialPendingEncryptionStates)> {
  static const MethodInfo* get() {
    static auto* endPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* encryptionStates = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "EncryptionUtility/IEncryptionState"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer*), "TryGetPotentialPendingEncryptionStates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{endPoint, encryptionStates});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::PromotePendingEncryptionState
// Il2CppName: PromotePendingEncryptionState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PacketEncryptionLayer::*)(System::Net::IPEndPoint*, GlobalNamespace::EncryptionUtility::IEncryptionState*)>(&GlobalNamespace::PacketEncryptionLayer::PromotePendingEncryptionState)> {
  static const MethodInfo* get() {
    static auto* endPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("", "EncryptionUtility/IEncryptionState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer*), "PromotePendingEncryptionState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{endPoint, state});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::MatchesFilter
// Il2CppName: MatchesFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PacketEncryptionLayer::*)(::Array<uint8_t>*, int, int)>(&GlobalNamespace::PacketEncryptionLayer::MatchesFilter)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer*), "MatchesFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset, length});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::ProcessInboundPacketInternal
// Il2CppName: ProcessInboundPacketInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PacketEncryptionLayer::*)(System::Net::IPEndPoint*, ByRef<::Array<uint8_t>*>, ByRef<int>, ByRef<int>, ByRef<bool>)>(&GlobalNamespace::PacketEncryptionLayer::ProcessInboundPacketInternal)> {
  static const MethodInfo* get() {
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* encrypted = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer*), "ProcessInboundPacketInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{remoteEndPoint, data, offset, length, encrypted});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::ProcessOutBoundPacketInternal
// Il2CppName: ProcessOutBoundPacketInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PacketEncryptionLayer::*)(System::Net::IPEndPoint*, ByRef<::Array<uint8_t>*>, ByRef<int>, ByRef<int>, ByRef<bool>)>(&GlobalNamespace::PacketEncryptionLayer::ProcessOutBoundPacketInternal)> {
  static const MethodInfo* get() {
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* encrypted = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer*), "ProcessOutBoundPacketInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{remoteEndPoint, data, offset, length, encrypted});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*)>(&GlobalNamespace::PacketEncryptionLayer::Log)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::LogV
// Il2CppName: LogV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*)>(&GlobalNamespace::PacketEncryptionLayer::LogV)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer*), "LogV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::ProcessInboundPacket
// Il2CppName: ProcessInboundPacket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PacketEncryptionLayer::*)(System::Net::IPEndPoint*, ByRef<::Array<uint8_t>*>, ByRef<int>, ByRef<int>)>(&GlobalNamespace::PacketEncryptionLayer::ProcessInboundPacket)> {
  static const MethodInfo* get() {
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer*), "ProcessInboundPacket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{remoteEndPoint, data, offset, length});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::ProcessOutBoundPacket
// Il2CppName: ProcessOutBoundPacket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PacketEncryptionLayer::*)(System::Net::IPEndPoint*, ByRef<::Array<uint8_t>*>, ByRef<int>, ByRef<int>)>(&GlobalNamespace::PacketEncryptionLayer::ProcessOutBoundPacket)> {
  static const MethodInfo* get() {
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer*), "ProcessOutBoundPacket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{remoteEndPoint, data, offset, length});
  }
};
// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: LiteNetLib.Layers
namespace LiteNetLib::Layers {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.Layers.PacketLayerBase
  // [TokenAttribute] Offset: FFFFFFFF
  class PacketLayerBase : public ::Il2CppObject {
    public:
    // public readonly System.Int32 ExtraPacketSizeForLayer
    // Size: 0x4
    // Offset: 0x10
    int ExtraPacketSizeForLayer;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: PacketLayerBase
    PacketLayerBase(int ExtraPacketSizeForLayer_ = {}) noexcept : ExtraPacketSizeForLayer{ExtraPacketSizeForLayer_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return ExtraPacketSizeForLayer;
    }
    // Get instance field reference: public readonly System.Int32 ExtraPacketSizeForLayer
    int& dyn_ExtraPacketSizeForLayer();
    // protected System.Void .ctor(System.Int32 extraPacketSizeForLayer)
    // Offset: 0x1C1BDB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PacketLayerBase* New_ctor(int extraPacketSizeForLayer) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Layers::PacketLayerBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PacketLayerBase*, creationType>(extraPacketSizeForLayer)));
    }
    // public System.Void ProcessInboundPacket(System.Net.IPEndPoint remoteEndPoint, ref System.Byte[] data, ref System.Int32 offset, ref System.Int32 length)
    // Offset: 0xFFFFFFFF
    void ProcessInboundPacket(System::Net::IPEndPoint* remoteEndPoint, ByRef<::Array<uint8_t>*> data, ByRef<int> offset, ByRef<int> length);
    // public System.Void ProcessOutBoundPacket(System.Net.IPEndPoint remoteEndPoint, ref System.Byte[] data, ref System.Int32 offset, ref System.Int32 length)
    // Offset: 0xFFFFFFFF
    void ProcessOutBoundPacket(System::Net::IPEndPoint* remoteEndPoint, ByRef<::Array<uint8_t>*> data, ByRef<int> offset, ByRef<int> length);
  }; // LiteNetLib.Layers.PacketLayerBase
  #pragma pack(pop)
  static check_size<sizeof(PacketLayerBase), 16 + sizeof(int)> __LiteNetLib_Layers_PacketLayerBaseSizeCheck;
  static_assert(sizeof(PacketLayerBase) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Layers::PacketLayerBase*, "LiteNetLib.Layers", "PacketLayerBase");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::Layers::PacketLayerBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::Layers::PacketLayerBase::ProcessInboundPacket
// Il2CppName: ProcessInboundPacket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Layers::PacketLayerBase::*)(System::Net::IPEndPoint*, ByRef<::Array<uint8_t>*>, ByRef<int>, ByRef<int>)>(&LiteNetLib::Layers::PacketLayerBase::ProcessInboundPacket)> {
  static const MethodInfo* get() {
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Layers::PacketLayerBase*), "ProcessInboundPacket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{remoteEndPoint, data, offset, length});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Layers::PacketLayerBase::ProcessOutBoundPacket
// Il2CppName: ProcessOutBoundPacket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Layers::PacketLayerBase::*)(System::Net::IPEndPoint*, ByRef<::Array<uint8_t>*>, ByRef<int>, ByRef<int>)>(&LiteNetLib::Layers::PacketLayerBase::ProcessOutBoundPacket)> {
  static const MethodInfo* get() {
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Layers::PacketLayerBase*), "ProcessOutBoundPacket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{remoteEndPoint, data, offset, length});
  }
};
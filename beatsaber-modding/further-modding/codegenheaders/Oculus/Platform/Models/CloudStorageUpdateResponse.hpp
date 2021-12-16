// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.CloudStorageUpdateStatus
#include "Oculus/Platform/CloudStorageUpdateStatus.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.CloudStorageUpdateResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class CloudStorageUpdateResponse : public ::Il2CppObject {
    public:
    // public readonly System.String Bucket
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Bucket;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String Key
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* Key;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly Oculus.Platform.CloudStorageUpdateStatus Status
    // Size: 0x4
    // Offset: 0x20
    Oculus::Platform::CloudStorageUpdateStatus Status;
    // Field size check
    static_assert(sizeof(Oculus::Platform::CloudStorageUpdateStatus) == 0x4);
    // Padding between fields: Status and: VersionHandle
    char __padding2[0x4] = {};
    // public readonly System.String VersionHandle
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* VersionHandle;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: CloudStorageUpdateResponse
    CloudStorageUpdateResponse(::Il2CppString* Bucket_ = {}, ::Il2CppString* Key_ = {}, Oculus::Platform::CloudStorageUpdateStatus Status_ = {}, ::Il2CppString* VersionHandle_ = {}) noexcept : Bucket{Bucket_}, Key{Key_}, Status{Status_}, VersionHandle{VersionHandle_} {}
    // Get instance field reference: public readonly System.String Bucket
    ::Il2CppString*& dyn_Bucket();
    // Get instance field reference: public readonly System.String Key
    ::Il2CppString*& dyn_Key();
    // Get instance field reference: public readonly Oculus.Platform.CloudStorageUpdateStatus Status
    Oculus::Platform::CloudStorageUpdateStatus& dyn_Status();
    // Get instance field reference: public readonly System.String VersionHandle
    ::Il2CppString*& dyn_VersionHandle();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x152E7F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CloudStorageUpdateResponse* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::CloudStorageUpdateResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CloudStorageUpdateResponse*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.CloudStorageUpdateResponse
  #pragma pack(pop)
  static check_size<sizeof(CloudStorageUpdateResponse), 40 + sizeof(::Il2CppString*)> __Oculus_Platform_Models_CloudStorageUpdateResponseSizeCheck;
  static_assert(sizeof(CloudStorageUpdateResponse) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::CloudStorageUpdateResponse*, "Oculus.Platform.Models", "CloudStorageUpdateResponse");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::CloudStorageUpdateResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
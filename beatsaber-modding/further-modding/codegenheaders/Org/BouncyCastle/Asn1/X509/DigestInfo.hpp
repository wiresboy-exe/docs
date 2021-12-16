// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: AlgorithmIdentifier
  class AlgorithmIdentifier;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.DigestInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class DigestInfo : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // private readonly System.Byte[] digest
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* digest;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier algID
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*) == 0x8);
    // Creating value type constructor for type: DigestInfo
    DigestInfo(::Array<uint8_t>* digest_ = {}, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID_ = {}) noexcept : digest{digest_}, algID{algID_} {}
    // Get instance field reference: private readonly System.Byte[] digest
    ::Array<uint8_t>*& dyn_digest();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier algID
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& dyn_algID();
    // public System.Void .ctor(Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier algID, System.Byte[] digest)
    // Offset: 0x19FDDB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DigestInfo* New_ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID, ::Array<uint8_t>* digest) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X509::DigestInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DigestInfo*, creationType>(algID, digest)));
    }
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x19FDDE8
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X509.DigestInfo
  #pragma pack(pop)
  static check_size<sizeof(DigestInfo), 24 + sizeof(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)> __Org_BouncyCastle_Asn1_X509_DigestInfoSizeCheck;
  static_assert(sizeof(DigestInfo) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::DigestInfo*, "Org.BouncyCastle.Asn1.X509", "DigestInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::DigestInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::DigestInfo::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::X509::DigestInfo::*)()>(&Org::BouncyCastle::Asn1::X509::DigestInfo::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::DigestInfo*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
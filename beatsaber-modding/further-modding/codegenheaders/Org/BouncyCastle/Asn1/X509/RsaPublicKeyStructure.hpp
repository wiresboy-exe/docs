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
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.RsaPublicKeyStructure
  // [TokenAttribute] Offset: FFFFFFFF
  class RsaPublicKeyStructure : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // private Org.BouncyCastle.Math.BigInteger modulus
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Math::BigInteger* modulus;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // private Org.BouncyCastle.Math.BigInteger publicExponent
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Math::BigInteger* publicExponent;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // Creating value type constructor for type: RsaPublicKeyStructure
    RsaPublicKeyStructure(Org::BouncyCastle::Math::BigInteger* modulus_ = {}, Org::BouncyCastle::Math::BigInteger* publicExponent_ = {}) noexcept : modulus{modulus_}, publicExponent{publicExponent_} {}
    // Get instance field reference: private Org.BouncyCastle.Math.BigInteger modulus
    Org::BouncyCastle::Math::BigInteger*& dyn_modulus();
    // Get instance field reference: private Org.BouncyCastle.Math.BigInteger publicExponent
    Org::BouncyCastle::Math::BigInteger*& dyn_publicExponent();
    // public Org.BouncyCastle.Math.BigInteger get_Modulus()
    // Offset: 0x1A0132C
    Org::BouncyCastle::Math::BigInteger* get_Modulus();
    // public Org.BouncyCastle.Math.BigInteger get_PublicExponent()
    // Offset: 0x1A01334
    Org::BouncyCastle::Math::BigInteger* get_PublicExponent();
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1A011DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RsaPublicKeyStructure* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RsaPublicKeyStructure*, creationType>(seq)));
    }
    // static public Org.BouncyCastle.Asn1.X509.RsaPublicKeyStructure GetInstance(System.Object obj)
    // Offset: 0x1A01068
    static Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure* GetInstance(::Il2CppObject* obj);
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1A0133C
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X509.RsaPublicKeyStructure
  #pragma pack(pop)
  static check_size<sizeof(RsaPublicKeyStructure), 24 + sizeof(Org::BouncyCastle::Math::BigInteger*)> __Org_BouncyCastle_Asn1_X509_RsaPublicKeyStructureSizeCheck;
  static_assert(sizeof(RsaPublicKeyStructure) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure*, "Org.BouncyCastle.Asn1.X509", "RsaPublicKeyStructure");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure::get_Modulus
// Il2CppName: get_Modulus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure::*)()>(&Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure::get_Modulus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure*), "get_Modulus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure::get_PublicExponent
// Il2CppName: get_PublicExponent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure::*)()>(&Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure::get_PublicExponent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure*), "get_PublicExponent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure::*)()>(&Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
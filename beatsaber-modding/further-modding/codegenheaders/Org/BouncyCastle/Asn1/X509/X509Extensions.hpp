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
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
  // Forward declaring type: IList
  class IList;
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: X509Extension
  class X509Extension;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.X509Extensions
  // [TokenAttribute] Offset: FFFFFFFF
  class X509Extensions : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // private readonly System.Collections.IDictionary extensions
    // Size: 0x8
    // Offset: 0x10
    System::Collections::IDictionary* extensions;
    // Field size check
    static_assert(sizeof(System::Collections::IDictionary*) == 0x8);
    // private readonly System.Collections.IList ordering
    // Size: 0x8
    // Offset: 0x18
    System::Collections::IList* ordering;
    // Field size check
    static_assert(sizeof(System::Collections::IList*) == 0x8);
    // Creating value type constructor for type: X509Extensions
    X509Extensions(System::Collections::IDictionary* extensions_ = {}, System::Collections::IList* ordering_ = {}) noexcept : extensions{extensions_}, ordering{ordering_} {}
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier SubjectDirectoryAttributes
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_SubjectDirectoryAttributes();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier SubjectDirectoryAttributes
    static void _set_SubjectDirectoryAttributes(Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier SubjectKeyIdentifier
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_SubjectKeyIdentifier();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier SubjectKeyIdentifier
    static void _set_SubjectKeyIdentifier(Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier KeyUsage
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_KeyUsage();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier KeyUsage
    static void _set_KeyUsage(Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier PrivateKeyUsagePeriod
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_PrivateKeyUsagePeriod();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier PrivateKeyUsagePeriod
    static void _set_PrivateKeyUsagePeriod(Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier SubjectAlternativeName
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_SubjectAlternativeName();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier SubjectAlternativeName
    static void _set_SubjectAlternativeName(Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier IssuerAlternativeName
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_IssuerAlternativeName();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier IssuerAlternativeName
    static void _set_IssuerAlternativeName(Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier BasicConstraints
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_BasicConstraints();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier BasicConstraints
    static void _set_BasicConstraints(Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier CrlNumber
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_CrlNumber();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier CrlNumber
    static void _set_CrlNumber(Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier ReasonCode
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_ReasonCode();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier ReasonCode
    static void _set_ReasonCode(Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier InstructionCode
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_InstructionCode();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier InstructionCode
    static void _set_InstructionCode(Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier InvalidityDate
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_InvalidityDate();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier InvalidityDate
    static void _set_InvalidityDate(Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier DeltaCrlIndicator
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_DeltaCrlIndicator();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier DeltaCrlIndicator
    static void _set_DeltaCrlIndicator(Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier IssuingDistributionPoint
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_IssuingDistributionPoint();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier IssuingDistributionPoint
    static void _set_IssuingDistributionPoint(Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier CertificateIssuer
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_CertificateIssuer();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier CertificateIssuer
    static void _set_CertificateIssuer(Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier NameConstraints
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_NameConstraints();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier NameConstraints
    static void _set_NameConstraints(Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier CrlDistributionPoints
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_CrlDistributionPoints();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier CrlDistributionPoints
    static void _set_CrlDistributionPoints(Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier CertificatePolicies
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_CertificatePolicies();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier CertificatePolicies
    static void _set_CertificatePolicies(Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier PolicyMappings
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_PolicyMappings();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier PolicyMappings
    static void _set_PolicyMappings(Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier AuthorityKeyIdentifier
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_AuthorityKeyIdentifier();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier AuthorityKeyIdentifier
    static void _set_AuthorityKeyIdentifier(Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier PolicyConstraints
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_PolicyConstraints();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier PolicyConstraints
    static void _set_PolicyConstraints(Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier ExtendedKeyUsage
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_ExtendedKeyUsage();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier ExtendedKeyUsage
    static void _set_ExtendedKeyUsage(Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier FreshestCrl
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_FreshestCrl();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier FreshestCrl
    static void _set_FreshestCrl(Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier InhibitAnyPolicy
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_InhibitAnyPolicy();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier InhibitAnyPolicy
    static void _set_InhibitAnyPolicy(Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier AuthorityInfoAccess
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_AuthorityInfoAccess();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier AuthorityInfoAccess
    static void _set_AuthorityInfoAccess(Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier SubjectInfoAccess
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_SubjectInfoAccess();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier SubjectInfoAccess
    static void _set_SubjectInfoAccess(Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier LogoType
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_LogoType();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier LogoType
    static void _set_LogoType(Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier BiometricInfo
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_BiometricInfo();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier BiometricInfo
    static void _set_BiometricInfo(Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier QCStatements
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_QCStatements();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier QCStatements
    static void _set_QCStatements(Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier AuditIdentity
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_AuditIdentity();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier AuditIdentity
    static void _set_AuditIdentity(Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier NoRevAvail
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_NoRevAvail();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier NoRevAvail
    static void _set_NoRevAvail(Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier TargetInformation
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_TargetInformation();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier TargetInformation
    static void _set_TargetInformation(Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier ExpiredCertsOnCrl
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_ExpiredCertsOnCrl();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier ExpiredCertsOnCrl
    static void _set_ExpiredCertsOnCrl(Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get instance field reference: private readonly System.Collections.IDictionary extensions
    System::Collections::IDictionary*& dyn_extensions();
    // Get instance field reference: private readonly System.Collections.IList ordering
    System::Collections::IList*& dyn_ordering();
    // public System.Collections.IEnumerable get_ExtensionOids()
    // Offset: 0x1A03B28
    System::Collections::IEnumerable* get_ExtensionOids();
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1A0341C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Extensions* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X509::X509Extensions::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Extensions*, creationType>(seq)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1A04198
    static void _cctor();
    // static public Org.BouncyCastle.Asn1.X509.X509Extensions GetInstance(System.Object obj)
    // Offset: 0x19FBF08
    static Org::BouncyCastle::Asn1::X509::X509Extensions* GetInstance(::Il2CppObject* obj);
    // public Org.BouncyCastle.Asn1.X509.X509Extension GetExtension(Org.BouncyCastle.Asn1.DerObjectIdentifier oid)
    // Offset: 0x1A03B90
    Org::BouncyCastle::Asn1::X509::X509Extension* GetExtension(Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1A03C90
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X509.X509Extensions
  #pragma pack(pop)
  static check_size<sizeof(X509Extensions), 24 + sizeof(System::Collections::IList*)> __Org_BouncyCastle_Asn1_X509_X509ExtensionsSizeCheck;
  static_assert(sizeof(X509Extensions) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::X509Extensions*, "Org.BouncyCastle.Asn1.X509", "X509Extensions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::X509Extensions::get_ExtensionOids
// Il2CppName: get_ExtensionOids
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerable* (Org::BouncyCastle::Asn1::X509::X509Extensions::*)()>(&Org::BouncyCastle::Asn1::X509::X509Extensions::get_ExtensionOids)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::X509Extensions*), "get_ExtensionOids", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::X509Extensions::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::X509Extensions::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Asn1::X509::X509Extensions::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::X509Extensions*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::X509Extensions::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::X509Extensions* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::X509::X509Extensions::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::X509Extensions*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::X509Extensions::GetExtension
// Il2CppName: GetExtension
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::X509Extension* (Org::BouncyCastle::Asn1::X509::X509Extensions::*)(Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&Org::BouncyCastle::Asn1::X509::X509Extensions::GetExtension)> {
  static const MethodInfo* get() {
    static auto* oid = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerObjectIdentifier")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::X509Extensions*), "GetExtension", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oid});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::X509Extensions::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::X509::X509Extensions::*)()>(&Org::BouncyCastle::Asn1::X509::X509Extensions::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::X509Extensions*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
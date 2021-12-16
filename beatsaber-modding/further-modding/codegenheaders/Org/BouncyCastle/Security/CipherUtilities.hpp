// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IBufferedCipher
  class IBufferedCipher;
  // Forward declaring type: IBlockCipher
  class IBlockCipher;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Security
namespace Org::BouncyCastle::Security {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Security.CipherUtilities
  // [TokenAttribute] Offset: FFFFFFFF
  class CipherUtilities : public ::Il2CppObject {
    public:
    // Nested type: Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm
    struct CipherAlgorithm;
    // Nested type: Org::BouncyCastle::Security::CipherUtilities::CipherMode
    struct CipherMode;
    // Nested type: Org::BouncyCastle::Security::CipherUtilities::CipherPadding
    struct CipherPadding;
    // Creating value type constructor for type: CipherUtilities
    CipherUtilities() noexcept {}
    // Get static field: static private readonly System.Collections.IDictionary algorithms
    static System::Collections::IDictionary* _get_algorithms();
    // Set static field: static private readonly System.Collections.IDictionary algorithms
    static void _set_algorithms(System::Collections::IDictionary* value);
    // Get static field: static private readonly System.Collections.IDictionary oids
    static System::Collections::IDictionary* _get_oids();
    // Set static field: static private readonly System.Collections.IDictionary oids
    static void _set_oids(System::Collections::IDictionary* value);
    // static private System.Void .cctor()
    // Offset: 0x13B0740
    static void _cctor();
    // static public Org.BouncyCastle.Crypto.IBufferedCipher GetCipher(Org.BouncyCastle.Asn1.DerObjectIdentifier oid)
    // Offset: 0x13B3328
    static Org::BouncyCastle::Crypto::IBufferedCipher* GetCipher(Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);
    // static public Org.BouncyCastle.Crypto.IBufferedCipher GetCipher(System.String algorithm)
    // Offset: 0x13AB548
    static Org::BouncyCastle::Crypto::IBufferedCipher* GetCipher(::Il2CppString* algorithm);
    // static private System.Int32 GetDigitIndex(System.String s)
    // Offset: 0x13B3398
    static int GetDigitIndex(::Il2CppString* s);
    // static private Org.BouncyCastle.Crypto.IBlockCipher CreateBlockCipher(Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherAlgorithm cipherAlgorithm)
    // Offset: 0x13B3458
    static Org::BouncyCastle::Crypto::IBlockCipher* CreateBlockCipher(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm cipherAlgorithm);
  }; // Org.BouncyCastle.Security.CipherUtilities
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::CipherUtilities*, "Org.BouncyCastle.Security", "CipherUtilities");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Security::CipherUtilities::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Security::CipherUtilities::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::CipherUtilities*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::CipherUtilities::GetCipher
// Il2CppName: GetCipher
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::IBufferedCipher* (*)(Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&Org::BouncyCastle::Security::CipherUtilities::GetCipher)> {
  static const MethodInfo* get() {
    static auto* oid = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerObjectIdentifier")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::CipherUtilities*), "GetCipher", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oid});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::CipherUtilities::GetCipher
// Il2CppName: GetCipher
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::IBufferedCipher* (*)(::Il2CppString*)>(&Org::BouncyCastle::Security::CipherUtilities::GetCipher)> {
  static const MethodInfo* get() {
    static auto* algorithm = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::CipherUtilities*), "GetCipher", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{algorithm});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::CipherUtilities::GetDigitIndex
// Il2CppName: GetDigitIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppString*)>(&Org::BouncyCastle::Security::CipherUtilities::GetDigitIndex)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::CipherUtilities*), "GetDigitIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::CipherUtilities::CreateBlockCipher
// Il2CppName: CreateBlockCipher
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::IBlockCipher* (*)(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm)>(&Org::BouncyCastle::Security::CipherUtilities::CreateBlockCipher)> {
  static const MethodInfo* get() {
    static auto* cipherAlgorithm = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Security", "CipherUtilities/CipherAlgorithm")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::CipherUtilities*), "CreateBlockCipher", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cipherAlgorithm});
  }
};
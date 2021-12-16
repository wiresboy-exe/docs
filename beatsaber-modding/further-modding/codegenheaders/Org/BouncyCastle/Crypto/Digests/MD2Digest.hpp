// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IDigest
#include "Org/BouncyCastle/Crypto/IDigest.hpp"
// Including type: Org.BouncyCastle.Utilities.IMemoable
#include "Org/BouncyCastle/Utilities/IMemoable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.MD2Digest
  // [TokenAttribute] Offset: FFFFFFFF
  class MD2Digest : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IDigest, public Org::BouncyCastle::Utilities::IMemoable*/ {
    public:
    // private System.Byte[] X
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* X;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 xOff
    // Size: 0x4
    // Offset: 0x18
    int xOff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: xOff and: M
    char __padding1[0x4] = {};
    // private System.Byte[] M
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint8_t>* M;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 mOff
    // Size: 0x4
    // Offset: 0x28
    int mOff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: mOff and: C
    char __padding3[0x4] = {};
    // private System.Byte[] C
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* C;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 COff
    // Size: 0x4
    // Offset: 0x38
    int COff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MD2Digest
    MD2Digest(::Array<uint8_t>* X_ = {}, int xOff_ = {}, ::Array<uint8_t>* M_ = {}, int mOff_ = {}, ::Array<uint8_t>* C_ = {}, int COff_ = {}) noexcept : X{X_}, xOff{xOff_}, M{M_}, mOff{mOff_}, C{C_}, COff{COff_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IDigest
    operator Org::BouncyCastle::Crypto::IDigest() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IDigest*>(this);
    }
    // Creating interface conversion operator: operator Org::BouncyCastle::Utilities::IMemoable
    operator Org::BouncyCastle::Utilities::IMemoable() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Utilities::IMemoable*>(this);
    }
    // Get static field: static private readonly System.Byte[] S
    static ::Array<uint8_t>* _get_S();
    // Set static field: static private readonly System.Byte[] S
    static void _set_S(::Array<uint8_t>* value);
    // Get instance field reference: private System.Byte[] X
    ::Array<uint8_t>*& dyn_X();
    // Get instance field reference: private System.Int32 xOff
    int& dyn_xOff();
    // Get instance field reference: private System.Byte[] M
    ::Array<uint8_t>*& dyn_M();
    // Get instance field reference: private System.Int32 mOff
    int& dyn_mOff();
    // Get instance field reference: private System.Byte[] C
    ::Array<uint8_t>*& dyn_C();
    // Get instance field reference: private System.Int32 COff
    int& dyn_COff();
    // public System.String get_AlgorithmName()
    // Offset: 0x1D63CE0
    ::Il2CppString* get_AlgorithmName();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Digests.MD2Digest t)
    // Offset: 0x1D63BA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MD2Digest* New_ctor(Org::BouncyCastle::Crypto::Digests::MD2Digest* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::MD2Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MD2Digest*, creationType>(t)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1D643B8
    static void _cctor();
    // private System.Void CopyIn(Org.BouncyCastle.Crypto.Digests.MD2Digest t)
    // Offset: 0x1D63C40
    void CopyIn(Org::BouncyCastle::Crypto::Digests::MD2Digest* t);
    // public System.Int32 GetDigestSize()
    // Offset: 0x1D63D28
    int GetDigestSize();
    // public System.Int32 GetByteLength()
    // Offset: 0x1D63D30
    int GetByteLength();
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1D63D38
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1D63AE4
    void Reset();
    // public System.Void Update(System.Byte input)
    // Offset: 0x1D64104
    void Update(uint8_t input);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0x1D64180
    void BlockUpdate(::Array<uint8_t>* input, int inOff, int length);
    // System.Void ProcessChecksum(System.Byte[] m)
    // Offset: 0x1D63E08
    void ProcessChecksum(::Array<uint8_t>* m);
    // System.Void ProcessBlock(System.Byte[] m)
    // Offset: 0x1D63F54
    void ProcessBlock(::Array<uint8_t>* m);
    // public Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0x1D642C4
    Org::BouncyCastle::Utilities::IMemoable* Copy();
    // public System.Void Reset(Org.BouncyCastle.Utilities.IMemoable other)
    // Offset: 0x1D64324
    void Reset(Org::BouncyCastle::Utilities::IMemoable* other);
    // public System.Void .ctor()
    // Offset: 0x1D63A5C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MD2Digest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::MD2Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MD2Digest*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Digests.MD2Digest
  #pragma pack(pop)
  static check_size<sizeof(MD2Digest), 56 + sizeof(int)> __Org_BouncyCastle_Crypto_Digests_MD2DigestSizeCheck;
  static_assert(sizeof(MD2Digest) == 0x3C);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::MD2Digest*, "Org.BouncyCastle.Crypto.Digests", "MD2Digest");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::MD2Digest::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Digests::MD2Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::MD2Digest::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::MD2Digest*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::MD2Digest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::MD2Digest::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Digests::MD2Digest::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::MD2Digest*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::MD2Digest::CopyIn
// Il2CppName: CopyIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::MD2Digest::*)(Org::BouncyCastle::Crypto::Digests::MD2Digest*)>(&Org::BouncyCastle::Crypto::Digests::MD2Digest::CopyIn)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto.Digests", "MD2Digest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::MD2Digest*), "CopyIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::MD2Digest::GetDigestSize
// Il2CppName: GetDigestSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::MD2Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::MD2Digest::GetDigestSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::MD2Digest*), "GetDigestSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::MD2Digest::GetByteLength
// Il2CppName: GetByteLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::MD2Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::MD2Digest::GetByteLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::MD2Digest*), "GetByteLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::MD2Digest::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::MD2Digest::*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Digests::MD2Digest::DoFinal)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::MD2Digest*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::MD2Digest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::MD2Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::MD2Digest::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::MD2Digest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::MD2Digest::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::MD2Digest::*)(uint8_t)>(&Org::BouncyCastle::Crypto::Digests::MD2Digest::Update)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::MD2Digest*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::MD2Digest::BlockUpdate
// Il2CppName: BlockUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::MD2Digest::*)(::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Crypto::Digests::MD2Digest::BlockUpdate)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::MD2Digest*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::MD2Digest::ProcessChecksum
// Il2CppName: ProcessChecksum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::MD2Digest::*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Digests::MD2Digest::ProcessChecksum)> {
  static const MethodInfo* get() {
    static auto* m = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::MD2Digest*), "ProcessChecksum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::MD2Digest::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::MD2Digest::*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Digests::MD2Digest::ProcessBlock)> {
  static const MethodInfo* get() {
    static auto* m = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::MD2Digest*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::MD2Digest::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::IMemoable* (Org::BouncyCastle::Crypto::Digests::MD2Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::MD2Digest::Copy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::MD2Digest*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::MD2Digest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::MD2Digest::*)(Org::BouncyCastle::Utilities::IMemoable*)>(&Org::BouncyCastle::Crypto::Digests::MD2Digest::Reset)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Utilities", "IMemoable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::MD2Digest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::MD2Digest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
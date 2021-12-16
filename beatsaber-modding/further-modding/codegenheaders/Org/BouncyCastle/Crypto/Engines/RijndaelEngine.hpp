// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IBlockCipher
#include "Org/BouncyCastle/Crypto/IBlockCipher.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.RijndaelEngine
  // [TokenAttribute] Offset: FFFFFFFF
  class RijndaelEngine : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IBlockCipher*/ {
    public:
    // private System.Int32 BC
    // Size: 0x4
    // Offset: 0x10
    int BC;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: BC and: BC_MASK
    char __padding0[0x4] = {};
    // private System.Int64 BC_MASK
    // Size: 0x8
    // Offset: 0x18
    int64_t BC_MASK;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int32 ROUNDS
    // Size: 0x4
    // Offset: 0x20
    int ROUNDS;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 blockBits
    // Size: 0x4
    // Offset: 0x24
    int blockBits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int64[][] workingKey
    // Size: 0x8
    // Offset: 0x28
    ::Array<::Array<int64_t>*>* workingKey;
    // Field size check
    static_assert(sizeof(::Array<::Array<int64_t>*>*) == 0x8);
    // private System.Int64 A0
    // Size: 0x8
    // Offset: 0x30
    int64_t A0;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 A1
    // Size: 0x8
    // Offset: 0x38
    int64_t A1;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 A2
    // Size: 0x8
    // Offset: 0x40
    int64_t A2;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 A3
    // Size: 0x8
    // Offset: 0x48
    int64_t A3;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Boolean forEncryption
    // Size: 0x1
    // Offset: 0x50
    bool forEncryption;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: forEncryption and: shifts0SC
    char __padding9[0x7] = {};
    // private System.Byte[] shifts0SC
    // Size: 0x8
    // Offset: 0x58
    ::Array<uint8_t>* shifts0SC;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] shifts1SC
    // Size: 0x8
    // Offset: 0x60
    ::Array<uint8_t>* shifts1SC;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: RijndaelEngine
    RijndaelEngine(int BC_ = {}, int64_t BC_MASK_ = {}, int ROUNDS_ = {}, int blockBits_ = {}, ::Array<::Array<int64_t>*>* workingKey_ = {}, int64_t A0_ = {}, int64_t A1_ = {}, int64_t A2_ = {}, int64_t A3_ = {}, bool forEncryption_ = {}, ::Array<uint8_t>* shifts0SC_ = {}, ::Array<uint8_t>* shifts1SC_ = {}) noexcept : BC{BC_}, BC_MASK{BC_MASK_}, ROUNDS{ROUNDS_}, blockBits{blockBits_}, workingKey{workingKey_}, A0{A0_}, A1{A1_}, A2{A2_}, A3{A3_}, forEncryption{forEncryption_}, shifts0SC{shifts0SC_}, shifts1SC{shifts1SC_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IBlockCipher
    operator Org::BouncyCastle::Crypto::IBlockCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Get static field: static private readonly System.Int32 MAXROUNDS
    static int _get_MAXROUNDS();
    // Set static field: static private readonly System.Int32 MAXROUNDS
    static void _set_MAXROUNDS(int value);
    // Get static field: static private readonly System.Int32 MAXKC
    static int _get_MAXKC();
    // Set static field: static private readonly System.Int32 MAXKC
    static void _set_MAXKC(int value);
    // Get static field: static private readonly System.Byte[] Logtable
    static ::Array<uint8_t>* _get_Logtable();
    // Set static field: static private readonly System.Byte[] Logtable
    static void _set_Logtable(::Array<uint8_t>* value);
    // Get static field: static private readonly System.Byte[] Alogtable
    static ::Array<uint8_t>* _get_Alogtable();
    // Set static field: static private readonly System.Byte[] Alogtable
    static void _set_Alogtable(::Array<uint8_t>* value);
    // Get static field: static private readonly System.Byte[] S
    static ::Array<uint8_t>* _get_S();
    // Set static field: static private readonly System.Byte[] S
    static void _set_S(::Array<uint8_t>* value);
    // Get static field: static private readonly System.Byte[] Si
    static ::Array<uint8_t>* _get_Si();
    // Set static field: static private readonly System.Byte[] Si
    static void _set_Si(::Array<uint8_t>* value);
    // Get static field: static private readonly System.Byte[] rcon
    static ::Array<uint8_t>* _get_rcon();
    // Set static field: static private readonly System.Byte[] rcon
    static void _set_rcon(::Array<uint8_t>* value);
    // Get static field: static private readonly System.Byte[][] shifts0
    static ::Array<::Array<uint8_t>*>* _get_shifts0();
    // Set static field: static private readonly System.Byte[][] shifts0
    static void _set_shifts0(::Array<::Array<uint8_t>*>* value);
    // Get static field: static private readonly System.Byte[][] shifts1
    static ::Array<::Array<uint8_t>*>* _get_shifts1();
    // Set static field: static private readonly System.Byte[][] shifts1
    static void _set_shifts1(::Array<::Array<uint8_t>*>* value);
    // Get instance field reference: private System.Int32 BC
    int& dyn_BC();
    // Get instance field reference: private System.Int64 BC_MASK
    int64_t& dyn_BC_MASK();
    // Get instance field reference: private System.Int32 ROUNDS
    int& dyn_ROUNDS();
    // Get instance field reference: private System.Int32 blockBits
    int& dyn_blockBits();
    // Get instance field reference: private System.Int64[][] workingKey
    ::Array<::Array<int64_t>*>*& dyn_workingKey();
    // Get instance field reference: private System.Int64 A0
    int64_t& dyn_A0();
    // Get instance field reference: private System.Int64 A1
    int64_t& dyn_A1();
    // Get instance field reference: private System.Int64 A2
    int64_t& dyn_A2();
    // Get instance field reference: private System.Int64 A3
    int64_t& dyn_A3();
    // Get instance field reference: private System.Boolean forEncryption
    bool& dyn_forEncryption();
    // Get instance field reference: private System.Byte[] shifts0SC
    ::Array<uint8_t>*& dyn_shifts0SC();
    // Get instance field reference: private System.Byte[] shifts1SC
    ::Array<uint8_t>*& dyn_shifts1SC();
    // public System.String get_AlgorithmName()
    // Offset: 0x1EC1770
    ::Il2CppString* get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x1EC17B8
    bool get_IsPartialBlockOkay();
    // public System.Void .ctor(System.Int32 blockBits)
    // Offset: 0x1EC12C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RijndaelEngine* New_ctor(int blockBits) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::RijndaelEngine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RijndaelEngine*, creationType>(blockBits)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1EC1DDC
    static void _cctor();
    // private System.Byte Mul0x2(System.Int32 b)
    // Offset: 0x1EBFEDC
    uint8_t Mul0x2(int b);
    // private System.Byte Mul0x3(System.Int32 b)
    // Offset: 0x1EBFF9C
    uint8_t Mul0x3(int b);
    // private System.Byte Mul0x9(System.Int32 b)
    // Offset: 0x1EC005C
    uint8_t Mul0x9(int b);
    // private System.Byte Mul0xb(System.Int32 b)
    // Offset: 0x1EC0100
    uint8_t Mul0xb(int b);
    // private System.Byte Mul0xd(System.Int32 b)
    // Offset: 0x1EC01A4
    uint8_t Mul0xd(int b);
    // private System.Byte Mul0xe(System.Int32 b)
    // Offset: 0x1EC0248
    uint8_t Mul0xe(int b);
    // private System.Void KeyAddition(System.Int64[] rk)
    // Offset: 0x1EC02EC
    void KeyAddition(::Array<int64_t>* rk);
    // private System.Int64 Shift(System.Int64 r, System.Int32 shift)
    // Offset: 0x1EC037C
    int64_t Shift(int64_t r, int shift);
    // private System.Void ShiftRow(System.Byte[] shiftsSC)
    // Offset: 0x1EC03A8
    void ShiftRow(::Array<uint8_t>* shiftsSC);
    // private System.Int64 ApplyS(System.Int64 r, System.Byte[] box)
    // Offset: 0x1EC047C
    int64_t ApplyS(int64_t r, ::Array<uint8_t>* box);
    // private System.Void Substitution(System.Byte[] box)
    // Offset: 0x1EC04F0
    void Substitution(::Array<uint8_t>* box);
    // private System.Void MixColumn()
    // Offset: 0x1EC0560
    void MixColumn();
    // private System.Void InvMixColumn()
    // Offset: 0x1EC0704
    void InvMixColumn();
    // private System.Int64[][] GenerateWorkingKey(System.Byte[] key)
    // Offset: 0x1EC0A48
    ::Array<::Array<int64_t>*>* GenerateWorkingKey(::Array<uint8_t>* key);
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1EC15E0
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetBlockSize()
    // Offset: 0x1EC17C0
    int GetBlockSize();
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1EC17D4
    int ProcessBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1EC1DD8
    void Reset();
    // private System.Void UnPackBlock(System.Byte[] bytes, System.Int32 off)
    // Offset: 0x1EC191C
    void UnPackBlock(::Array<uint8_t>* bytes, int off);
    // private System.Void PackBlock(System.Byte[] bytes, System.Int32 off)
    // Offset: 0x1EC1D0C
    void PackBlock(::Array<uint8_t>* bytes, int off);
    // private System.Void EncryptBlock(System.Int64[][] rk)
    // Offset: 0x1EC1A60
    void EncryptBlock(::Array<::Array<int64_t>*>* rk);
    // private System.Void DecryptBlock(System.Int64[][] rk)
    // Offset: 0x1EC1BC0
    void DecryptBlock(::Array<::Array<int64_t>*>* rk);
    // public System.Void .ctor()
    // Offset: 0x1EC12C0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RijndaelEngine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::RijndaelEngine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RijndaelEngine*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Engines.RijndaelEngine
  #pragma pack(pop)
  static check_size<sizeof(RijndaelEngine), 96 + sizeof(::Array<uint8_t>*)> __Org_BouncyCastle_Crypto_Engines_RijndaelEngineSizeCheck;
  static_assert(sizeof(RijndaelEngine) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::RijndaelEngine*, "Org.BouncyCastle.Crypto.Engines", "RijndaelEngine");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RijndaelEngine::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Engines::RijndaelEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::RijndaelEngine::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RijndaelEngine*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RijndaelEngine::get_IsPartialBlockOkay
// Il2CppName: get_IsPartialBlockOkay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Engines::RijndaelEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::RijndaelEngine::get_IsPartialBlockOkay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RijndaelEngine*), "get_IsPartialBlockOkay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RijndaelEngine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RijndaelEngine::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Engines::RijndaelEngine::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RijndaelEngine*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RijndaelEngine::Mul0x2
// Il2CppName: Mul0x2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (Org::BouncyCastle::Crypto::Engines::RijndaelEngine::*)(int)>(&Org::BouncyCastle::Crypto::Engines::RijndaelEngine::Mul0x2)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RijndaelEngine*), "Mul0x2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RijndaelEngine::Mul0x3
// Il2CppName: Mul0x3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (Org::BouncyCastle::Crypto::Engines::RijndaelEngine::*)(int)>(&Org::BouncyCastle::Crypto::Engines::RijndaelEngine::Mul0x3)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RijndaelEngine*), "Mul0x3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RijndaelEngine::Mul0x9
// Il2CppName: Mul0x9
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (Org::BouncyCastle::Crypto::Engines::RijndaelEngine::*)(int)>(&Org::BouncyCastle::Crypto::Engines::RijndaelEngine::Mul0x9)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RijndaelEngine*), "Mul0x9", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RijndaelEngine::Mul0xb
// Il2CppName: Mul0xb
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (Org::BouncyCastle::Crypto::Engines::RijndaelEngine::*)(int)>(&Org::BouncyCastle::Crypto::Engines::RijndaelEngine::Mul0xb)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RijndaelEngine*), "Mul0xb", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RijndaelEngine::Mul0xd
// Il2CppName: Mul0xd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (Org::BouncyCastle::Crypto::Engines::RijndaelEngine::*)(int)>(&Org::BouncyCastle::Crypto::Engines::RijndaelEngine::Mul0xd)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RijndaelEngine*), "Mul0xd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RijndaelEngine::Mul0xe
// Il2CppName: Mul0xe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (Org::BouncyCastle::Crypto::Engines::RijndaelEngine::*)(int)>(&Org::BouncyCastle::Crypto::Engines::RijndaelEngine::Mul0xe)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RijndaelEngine*), "Mul0xe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RijndaelEngine::KeyAddition
// Il2CppName: KeyAddition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::RijndaelEngine::*)(::Array<int64_t>*)>(&Org::BouncyCastle::Crypto::Engines::RijndaelEngine::KeyAddition)> {
  static const MethodInfo* get() {
    static auto* rk = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RijndaelEngine*), "KeyAddition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rk});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RijndaelEngine::Shift
// Il2CppName: Shift
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Org::BouncyCastle::Crypto::Engines::RijndaelEngine::*)(int64_t, int)>(&Org::BouncyCastle::Crypto::Engines::RijndaelEngine::Shift)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* shift = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RijndaelEngine*), "Shift", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r, shift});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RijndaelEngine::ShiftRow
// Il2CppName: ShiftRow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::RijndaelEngine::*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Engines::RijndaelEngine::ShiftRow)> {
  static const MethodInfo* get() {
    static auto* shiftsSC = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RijndaelEngine*), "ShiftRow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shiftsSC});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RijndaelEngine::ApplyS
// Il2CppName: ApplyS
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Org::BouncyCastle::Crypto::Engines::RijndaelEngine::*)(int64_t, ::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Engines::RijndaelEngine::ApplyS)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* box = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RijndaelEngine*), "ApplyS", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r, box});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RijndaelEngine::Substitution
// Il2CppName: Substitution
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::RijndaelEngine::*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Engines::RijndaelEngine::Substitution)> {
  static const MethodInfo* get() {
    static auto* box = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RijndaelEngine*), "Substitution", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{box});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RijndaelEngine::MixColumn
// Il2CppName: MixColumn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::RijndaelEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::RijndaelEngine::MixColumn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RijndaelEngine*), "MixColumn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RijndaelEngine::InvMixColumn
// Il2CppName: InvMixColumn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::RijndaelEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::RijndaelEngine::InvMixColumn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RijndaelEngine*), "InvMixColumn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RijndaelEngine::GenerateWorkingKey
// Il2CppName: GenerateWorkingKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Array<int64_t>*>* (Org::BouncyCastle::Crypto::Engines::RijndaelEngine::*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Engines::RijndaelEngine::GenerateWorkingKey)> {
  static const MethodInfo* get() {
    static auto* key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RijndaelEngine*), "GenerateWorkingKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RijndaelEngine::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::RijndaelEngine::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Engines::RijndaelEngine::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RijndaelEngine*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RijndaelEngine::GetBlockSize
// Il2CppName: GetBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::RijndaelEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::RijndaelEngine::GetBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RijndaelEngine*), "GetBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RijndaelEngine::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::RijndaelEngine::*)(::Array<uint8_t>*, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::RijndaelEngine::ProcessBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RijndaelEngine*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RijndaelEngine::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::RijndaelEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::RijndaelEngine::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RijndaelEngine*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RijndaelEngine::UnPackBlock
// Il2CppName: UnPackBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::RijndaelEngine::*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::RijndaelEngine::UnPackBlock)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RijndaelEngine*), "UnPackBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, off});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RijndaelEngine::PackBlock
// Il2CppName: PackBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::RijndaelEngine::*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::RijndaelEngine::PackBlock)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RijndaelEngine*), "PackBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, off});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RijndaelEngine::EncryptBlock
// Il2CppName: EncryptBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::RijndaelEngine::*)(::Array<::Array<int64_t>*>*)>(&Org::BouncyCastle::Crypto::Engines::RijndaelEngine::EncryptBlock)> {
  static const MethodInfo* get() {
    static auto* rk = &il2cpp_functions::array_class_get(il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int64"), 1), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RijndaelEngine*), "EncryptBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rk});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RijndaelEngine::DecryptBlock
// Il2CppName: DecryptBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::RijndaelEngine::*)(::Array<::Array<int64_t>*>*)>(&Org::BouncyCastle::Crypto::Engines::RijndaelEngine::DecryptBlock)> {
  static const MethodInfo* get() {
    static auto* rk = &il2cpp_functions::array_class_get(il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int64"), 1), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RijndaelEngine*), "DecryptBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rk});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RijndaelEngine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
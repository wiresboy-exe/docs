// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.Raw
namespace Org::BouncyCastle::Math::Raw {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.Raw.Nat128
  // [TokenAttribute] Offset: FFFFFFFF
  class Nat128 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Nat128
    Nat128() noexcept {}
    // static public System.UInt32 Add(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x139E4AC
    static uint Add(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.UInt32 AddBothTo(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x139E5AC
    static uint AddBothTo(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.Void Copy(System.UInt32[] x, System.Int32 xOff, System.UInt32[] z, System.Int32 zOff)
    // Offset: 0x139E6CC
    static void Copy(::Array<uint>* x, int xOff, ::Array<uint>* z, int zOff);
    // static public System.Void Copy64(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x139E7AC
    static void Copy64(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static public System.Void Copy64(System.UInt64[] x, System.Int32 xOff, System.UInt64[] z, System.Int32 zOff)
    // Offset: 0x139E808
    static void Copy64(::Array<uint64_t>* x, int xOff, ::Array<uint64_t>* z, int zOff);
    // static public System.UInt32[] Create()
    // Offset: 0x139E888
    static ::Array<uint>* Create();
    // static public System.UInt64[] Create64()
    // Offset: 0x139E8D4
    static ::Array<uint64_t>* Create64();
    // static public System.UInt32[] CreateExt()
    // Offset: 0x139E920
    static ::Array<uint>* CreateExt();
    // static public System.UInt64[] CreateExt64()
    // Offset: 0x139E96C
    static ::Array<uint64_t>* CreateExt64();
    // static public System.Boolean Eq(System.UInt32[] x, System.UInt32[] y)
    // Offset: 0x139E9B8
    static bool Eq(::Array<uint>* x, ::Array<uint>* y);
    // static public System.Boolean Eq64(System.UInt64[] x, System.UInt64[] y)
    // Offset: 0x139EA28
    static bool Eq64(::Array<uint64_t>* x, ::Array<uint64_t>* y);
    // static public System.UInt32[] FromBigInteger(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x139EAA0
    static ::Array<uint>* FromBigInteger(Org::BouncyCastle::Math::BigInteger* x);
    // static public System.UInt32 GetBit(System.UInt32[] x, System.Int32 bit)
    // Offset: 0x139EBA4
    static uint GetBit(::Array<uint>* x, int bit);
    // static public System.Boolean Gte(System.UInt32[] x, System.UInt32[] y)
    // Offset: 0x139EC14
    static bool Gte(::Array<uint>* x, ::Array<uint>* y);
    // static public System.Boolean IsOne(System.UInt32[] x)
    // Offset: 0x139EC90
    static bool IsOne(::Array<uint>* x);
    // static public System.Boolean IsOne64(System.UInt64[] x)
    // Offset: 0x139ECFC
    static bool IsOne64(::Array<uint64_t>* x);
    // static public System.Boolean IsZero(System.UInt32[] x)
    // Offset: 0x139ED54
    static bool IsZero(::Array<uint>* x);
    // static public System.Boolean IsZero64(System.UInt64[] x)
    // Offset: 0x139EDB4
    static bool IsZero64(::Array<uint64_t>* x);
    // static public System.Void Mul(System.UInt32[] x, System.UInt32[] y, System.UInt32[] zz)
    // Offset: 0x139EE0C
    static void Mul(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* zz);
    // static public System.UInt32 MulAddTo(System.UInt32[] x, System.UInt32[] y, System.UInt32[] zz)
    // Offset: 0x139EF74
    static uint MulAddTo(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* zz);
    // static public System.Void Square(System.UInt32[] x, System.UInt32[] zz)
    // Offset: 0x139F094
    static void Square(::Array<uint>* x, ::Array<uint>* zz);
    // static public System.Int32 Sub(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x139F260
    static int Sub(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.Int32 SubFrom(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x139F360
    static int SubFrom(::Array<uint>* x, ::Array<uint>* z);
    // static public Org.BouncyCastle.Math.BigInteger ToBigInteger(System.UInt32[] x)
    // Offset: 0x139F430
    static Org::BouncyCastle::Math::BigInteger* ToBigInteger(::Array<uint>* x);
    // static public Org.BouncyCastle.Math.BigInteger ToBigInteger64(System.UInt64[] x)
    // Offset: 0x139F514
    static Org::BouncyCastle::Math::BigInteger* ToBigInteger64(::Array<uint64_t>* x);
  }; // Org.BouncyCastle.Math.Raw.Nat128
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Raw::Nat128*, "Org.BouncyCastle.Math.Raw", "Nat128");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat128::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::Array<uint>*, ::Array<uint>*, ::Array<uint>*)>(&Org::BouncyCastle::Math::Raw::Nat128::Add)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat128*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat128::AddBothTo
// Il2CppName: AddBothTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::Array<uint>*, ::Array<uint>*, ::Array<uint>*)>(&Org::BouncyCastle::Math::Raw::Nat128::AddBothTo)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat128*), "AddBothTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat128::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint>*, int, ::Array<uint>*, int)>(&Org::BouncyCastle::Math::Raw::Nat128::Copy)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* xOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* zOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat128*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, xOff, z, zOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat128::Copy64
// Il2CppName: Copy64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::Raw::Nat128::Copy64)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat128*), "Copy64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat128::Copy64
// Il2CppName: Copy64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, int, ::Array<uint64_t>*, int)>(&Org::BouncyCastle::Math::Raw::Nat128::Copy64)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* xOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* zOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat128*), "Copy64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, xOff, z, zOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat128::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint>* (*)()>(&Org::BouncyCastle::Math::Raw::Nat128::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat128*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat128::Create64
// Il2CppName: Create64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint64_t>* (*)()>(&Org::BouncyCastle::Math::Raw::Nat128::Create64)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat128*), "Create64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat128::CreateExt
// Il2CppName: CreateExt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint>* (*)()>(&Org::BouncyCastle::Math::Raw::Nat128::CreateExt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat128*), "CreateExt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat128::CreateExt64
// Il2CppName: CreateExt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint64_t>* (*)()>(&Org::BouncyCastle::Math::Raw::Nat128::CreateExt64)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat128*), "CreateExt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat128::Eq
// Il2CppName: Eq
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<uint>*, ::Array<uint>*)>(&Org::BouncyCastle::Math::Raw::Nat128::Eq)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat128*), "Eq", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat128::Eq64
// Il2CppName: Eq64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::Raw::Nat128::Eq64)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat128*), "Eq64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat128::FromBigInteger
// Il2CppName: FromBigInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint>* (*)(Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::Raw::Nat128::FromBigInteger)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat128*), "FromBigInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat128::GetBit
// Il2CppName: GetBit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::Array<uint>*, int)>(&Org::BouncyCastle::Math::Raw::Nat128::GetBit)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* bit = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat128*), "GetBit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, bit});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat128::Gte
// Il2CppName: Gte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<uint>*, ::Array<uint>*)>(&Org::BouncyCastle::Math::Raw::Nat128::Gte)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat128*), "Gte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat128::IsOne
// Il2CppName: IsOne
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<uint>*)>(&Org::BouncyCastle::Math::Raw::Nat128::IsOne)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat128*), "IsOne", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat128::IsOne64
// Il2CppName: IsOne64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<uint64_t>*)>(&Org::BouncyCastle::Math::Raw::Nat128::IsOne64)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat128*), "IsOne64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat128::IsZero
// Il2CppName: IsZero
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<uint>*)>(&Org::BouncyCastle::Math::Raw::Nat128::IsZero)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat128*), "IsZero", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat128::IsZero64
// Il2CppName: IsZero64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<uint64_t>*)>(&Org::BouncyCastle::Math::Raw::Nat128::IsZero64)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat128*), "IsZero64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat128::Mul
// Il2CppName: Mul
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint>*, ::Array<uint>*, ::Array<uint>*)>(&Org::BouncyCastle::Math::Raw::Nat128::Mul)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* zz = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat128*), "Mul", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, zz});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat128::MulAddTo
// Il2CppName: MulAddTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::Array<uint>*, ::Array<uint>*, ::Array<uint>*)>(&Org::BouncyCastle::Math::Raw::Nat128::MulAddTo)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* zz = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat128*), "MulAddTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, zz});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat128::Square
// Il2CppName: Square
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint>*, ::Array<uint>*)>(&Org::BouncyCastle::Math::Raw::Nat128::Square)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* zz = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat128*), "Square", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, zz});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat128::Sub
// Il2CppName: Sub
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Array<uint>*, ::Array<uint>*, ::Array<uint>*)>(&Org::BouncyCastle::Math::Raw::Nat128::Sub)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat128*), "Sub", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat128::SubFrom
// Il2CppName: SubFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Array<uint>*, ::Array<uint>*)>(&Org::BouncyCastle::Math::Raw::Nat128::SubFrom)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat128*), "SubFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat128::ToBigInteger
// Il2CppName: ToBigInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (*)(::Array<uint>*)>(&Org::BouncyCastle::Math::Raw::Nat128::ToBigInteger)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat128*), "ToBigInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat128::ToBigInteger64
// Il2CppName: ToBigInteger64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (*)(::Array<uint64_t>*)>(&Org::BouncyCastle::Math::Raw::Nat128::ToBigInteger64)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat128*), "ToBigInteger64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
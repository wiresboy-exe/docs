// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Forward declaring type: WNafPreCompInfo
  class WNafPreCompInfo;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECPoint
  class ECPoint;
  // Forward declaring type: ECPointMap
  class ECPointMap;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities
  // [TokenAttribute] Offset: FFFFFFFF
  class WNafUtilities : public ::Il2CppObject {
    public:
    // Nested type: Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::ConfigureBasepointCallback
    class ConfigureBasepointCallback;
    // Nested type: Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeCallback
    class PrecomputeCallback;
    // Nested type: Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeWithPointMapCallback
    class PrecomputeWithPointMapCallback;
    // Creating value type constructor for type: WNafUtilities
    WNafUtilities() noexcept {}
    // Get static field: static public readonly System.String PRECOMP_NAME
    static ::Il2CppString* _get_PRECOMP_NAME();
    // Set static field: static public readonly System.String PRECOMP_NAME
    static void _set_PRECOMP_NAME(::Il2CppString* value);
    // Get static field: static private readonly System.Int32[] DEFAULT_WINDOW_SIZE_CUTOFFS
    static ::Array<int>* _get_DEFAULT_WINDOW_SIZE_CUTOFFS();
    // Set static field: static private readonly System.Int32[] DEFAULT_WINDOW_SIZE_CUTOFFS
    static void _set_DEFAULT_WINDOW_SIZE_CUTOFFS(::Array<int>* value);
    // Get static field: static private readonly System.Int32 MAX_WIDTH
    static int _get_MAX_WIDTH();
    // Set static field: static private readonly System.Int32 MAX_WIDTH
    static void _set_MAX_WIDTH(int value);
    // Get static field: static private readonly Org.BouncyCastle.Math.EC.ECPoint[] EMPTY_POINTS
    static ::Array<Org::BouncyCastle::Math::EC::ECPoint*>* _get_EMPTY_POINTS();
    // Set static field: static private readonly Org.BouncyCastle.Math.EC.ECPoint[] EMPTY_POINTS
    static void _set_EMPTY_POINTS(::Array<Org::BouncyCastle::Math::EC::ECPoint*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1DCAC50
    static void _cctor();
    // static public System.Void ConfigureBasepoint(Org.BouncyCastle.Math.EC.ECPoint p)
    // Offset: 0x1DC9E70
    static void ConfigureBasepoint(Org::BouncyCastle::Math::EC::ECPoint* p);
    // static public System.Int32[] GenerateCompactNaf(Org.BouncyCastle.Math.BigInteger k)
    // Offset: 0x1DCA028
    static ::Array<int>* GenerateCompactNaf(Org::BouncyCastle::Math::BigInteger* k);
    // static public System.Int32[] GenerateCompactWindowNaf(System.Int32 width, Org.BouncyCastle.Math.BigInteger k)
    // Offset: 0x1DC9A20
    static ::Array<int>* GenerateCompactWindowNaf(int width, Org::BouncyCastle::Math::BigInteger* k);
    // static public System.Byte[] GenerateNaf(Org.BouncyCastle.Math.BigInteger k)
    // Offset: 0x1DCA31C
    static ::Array<uint8_t>* GenerateNaf(Org::BouncyCastle::Math::BigInteger* k);
    // static public System.Byte[] GenerateWindowNaf(System.Int32 width, Org.BouncyCastle.Math.BigInteger k)
    // Offset: 0x1DCA4B8
    static ::Array<uint8_t>* GenerateWindowNaf(int width, Org::BouncyCastle::Math::BigInteger* k);
    // static public System.Int32 GetNafWeight(Org.BouncyCastle.Math.BigInteger k)
    // Offset: 0x1DCA81C
    static int GetNafWeight(Org::BouncyCastle::Math::BigInteger* k);
    // static public System.Int32 GetWindowSize(System.Int32 bits)
    // Offset: 0x1DC987C
    static int GetWindowSize(int bits);
    // static public System.Int32 GetWindowSize(System.Int32 bits, System.Int32 maxWidth)
    // Offset: 0x1DCA96C
    static int GetWindowSize(int bits, int maxWidth);
    // static public System.Int32 GetWindowSize(System.Int32 bits, System.Int32[] windowSizeCutoffs, System.Int32 maxWidth)
    // Offset: 0x1DCA890
    static int GetWindowSize(int bits, ::Array<int>* windowSizeCutoffs, int maxWidth);
    // static public Org.BouncyCastle.Math.EC.Multiplier.WNafPreCompInfo Precompute(Org.BouncyCastle.Math.EC.ECPoint p, System.Int32 minWidth, System.Boolean includeNegated)
    // Offset: 0x1DC98F0
    static Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* Precompute(Org::BouncyCastle::Math::EC::ECPoint* p, int minWidth, bool includeNegated);
    // static public Org.BouncyCastle.Math.EC.Multiplier.WNafPreCompInfo PrecomputeWithPointMap(Org.BouncyCastle.Math.EC.ECPoint p, Org.BouncyCastle.Math.EC.ECPointMap pointMap, Org.BouncyCastle.Math.EC.Multiplier.WNafPreCompInfo fromWNaf, System.Boolean includeNegated)
    // Offset: 0x1DCAA34
    static Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* PrecomputeWithPointMap(Org::BouncyCastle::Math::EC::ECPoint* p, Org::BouncyCastle::Math::EC::ECPointMap* pointMap, Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* fromWNaf, bool includeNegated);
    // static private System.Byte[] Trim(System.Byte[] a, System.Int32 length)
    // Offset: 0x1DCA790
    static ::Array<uint8_t>* Trim(::Array<uint8_t>* a, int length);
    // static private System.Int32[] Trim(System.Int32[] a, System.Int32 length)
    // Offset: 0x1DCA290
    static ::Array<int>* Trim(::Array<int>* a, int length);
    // static private Org.BouncyCastle.Math.EC.ECPoint[] ResizeTable(Org.BouncyCastle.Math.EC.ECPoint[] a, System.Int32 length)
    // Offset: 0x1DCABC4
    static ::Array<Org::BouncyCastle::Math::EC::ECPoint*>* ResizeTable(::Array<Org::BouncyCastle::Math::EC::ECPoint*>* a, int length);
  }; // Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*, "Org.BouncyCastle.Math.EC.Multiplier", "WNafUtilities");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::ConfigureBasepoint
// Il2CppName: ConfigureBasepoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Org::BouncyCastle::Math::EC::ECPoint*)>(&Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::ConfigureBasepoint)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*), "ConfigureBasepoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateCompactNaf
// Il2CppName: GenerateCompactNaf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<int>* (*)(Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateCompactNaf)> {
  static const MethodInfo* get() {
    static auto* k = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*), "GenerateCompactNaf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{k});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateCompactWindowNaf
// Il2CppName: GenerateCompactWindowNaf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<int>* (*)(int, Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateCompactWindowNaf)> {
  static const MethodInfo* get() {
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* k = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*), "GenerateCompactWindowNaf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{width, k});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateNaf
// Il2CppName: GenerateNaf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateNaf)> {
  static const MethodInfo* get() {
    static auto* k = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*), "GenerateNaf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{k});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateWindowNaf
// Il2CppName: GenerateWindowNaf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(int, Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateWindowNaf)> {
  static const MethodInfo* get() {
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* k = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*), "GenerateWindowNaf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{width, k});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetNafWeight
// Il2CppName: GetNafWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetNafWeight)> {
  static const MethodInfo* get() {
    static auto* k = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*), "GetNafWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{k});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWindowSize
// Il2CppName: GetWindowSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWindowSize)> {
  static const MethodInfo* get() {
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*), "GetWindowSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bits});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWindowSize
// Il2CppName: GetWindowSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWindowSize)> {
  static const MethodInfo* get() {
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxWidth = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*), "GetWindowSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bits, maxWidth});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWindowSize
// Il2CppName: GetWindowSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, ::Array<int>*, int)>(&Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWindowSize)> {
  static const MethodInfo* get() {
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* windowSizeCutoffs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* maxWidth = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*), "GetWindowSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bits, windowSizeCutoffs, maxWidth});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::Precompute
// Il2CppName: Precompute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* (*)(Org::BouncyCastle::Math::EC::ECPoint*, int, bool)>(&Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::Precompute)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    static auto* minWidth = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* includeNegated = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*), "Precompute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, minWidth, includeNegated});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeWithPointMap
// Il2CppName: PrecomputeWithPointMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* (*)(Org::BouncyCastle::Math::EC::ECPoint*, Org::BouncyCastle::Math::EC::ECPointMap*, Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*, bool)>(&Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeWithPointMap)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    static auto* pointMap = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPointMap")->byval_arg;
    static auto* fromWNaf = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC.Multiplier", "WNafPreCompInfo")->byval_arg;
    static auto* includeNegated = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*), "PrecomputeWithPointMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, pointMap, fromWNaf, includeNegated});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::Trim
// Il2CppName: Trim
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::Trim)> {
  static const MethodInfo* get() {
    static auto* a = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*), "Trim", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::Trim
// Il2CppName: Trim
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<int>* (*)(::Array<int>*, int)>(&Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::Trim)> {
  static const MethodInfo* get() {
    static auto* a = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*), "Trim", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::ResizeTable
// Il2CppName: ResizeTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<Org::BouncyCastle::Math::EC::ECPoint*>* (*)(::Array<Org::BouncyCastle::Math::EC::ECPoint*>*, int)>(&Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::ResizeTable)> {
  static const MethodInfo* get() {
    static auto* a = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint"), 1)->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*), "ResizeTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, length});
  }
};
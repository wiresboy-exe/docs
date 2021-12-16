// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.LanguagePackInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class LanguagePackInfo : public ::Il2CppObject {
    public:
    // public readonly System.String EnglishName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* EnglishName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String NativeName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* NativeName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String Tag
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* Tag;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: LanguagePackInfo
    LanguagePackInfo(::Il2CppString* EnglishName_ = {}, ::Il2CppString* NativeName_ = {}, ::Il2CppString* Tag_ = {}) noexcept : EnglishName{EnglishName_}, NativeName{NativeName_}, Tag{Tag_} {}
    // Get instance field reference: public readonly System.String EnglishName
    ::Il2CppString*& dyn_EnglishName();
    // Get instance field reference: public readonly System.String NativeName
    ::Il2CppString*& dyn_NativeName();
    // Get instance field reference: public readonly System.String Tag
    ::Il2CppString*& dyn_Tag();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x1535CD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LanguagePackInfo* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::LanguagePackInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LanguagePackInfo*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.LanguagePackInfo
  #pragma pack(pop)
  static check_size<sizeof(LanguagePackInfo), 32 + sizeof(::Il2CppString*)> __Oculus_Platform_Models_LanguagePackInfoSizeCheck;
  static_assert(sizeof(LanguagePackInfo) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::LanguagePackInfo*, "Oculus.Platform.Models", "LanguagePackInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::LanguagePackInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
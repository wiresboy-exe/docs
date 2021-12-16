// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.AspMvcAreaViewLocationFormatAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: DF0494
  class AspMvcAreaViewLocationFormatAttribute : public System::Attribute {
    public:
    // private System.String <Format>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Format;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: AspMvcAreaViewLocationFormatAttribute
    AspMvcAreaViewLocationFormatAttribute(::Il2CppString* Format_ = {}) noexcept : Format{Format_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return Format;
    }
    // Get instance field reference: private System.String <Format>k__BackingField
    ::Il2CppString*& dyn_$Format$k__BackingField();
    // public System.String get_Format()
    // Offset: 0x2405E48
    ::Il2CppString* get_Format();
    // private System.Void set_Format(System.String value)
    // Offset: 0x2405E50
    void set_Format(::Il2CppString* value);
    // public System.Void .ctor(System.String format)
    // Offset: 0x2405E1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AspMvcAreaViewLocationFormatAttribute* New_ctor(::Il2CppString* format) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AspMvcAreaViewLocationFormatAttribute*, creationType>(format)));
    }
  }; // JetBrains.Annotations.AspMvcAreaViewLocationFormatAttribute
  #pragma pack(pop)
  static check_size<sizeof(AspMvcAreaViewLocationFormatAttribute), 16 + sizeof(::Il2CppString*)> __JetBrains_Annotations_AspMvcAreaViewLocationFormatAttributeSizeCheck;
  static_assert(sizeof(AspMvcAreaViewLocationFormatAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute*, "JetBrains.Annotations", "AspMvcAreaViewLocationFormatAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute::get_Format
// Il2CppName: get_Format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute::*)()>(&JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute::get_Format)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute*), "get_Format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute::set_Format
// Il2CppName: set_Format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute::*)(::Il2CppString*)>(&JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute::set_Format)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute*), "set_Format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
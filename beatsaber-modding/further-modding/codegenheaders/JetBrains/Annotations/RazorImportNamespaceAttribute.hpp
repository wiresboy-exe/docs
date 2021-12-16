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
  // Autogenerated type: JetBrains.Annotations.RazorImportNamespaceAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: DF089C
  class RazorImportNamespaceAttribute : public System::Attribute {
    public:
    // private System.String <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: RazorImportNamespaceAttribute
    RazorImportNamespaceAttribute(::Il2CppString* Name_ = {}) noexcept : Name{Name_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return Name;
    }
    // Get instance field reference: private System.String <Name>k__BackingField
    ::Il2CppString*& dyn_$Name$k__BackingField();
    // public System.String get_Name()
    // Offset: 0x2406560
    ::Il2CppString* get_Name();
    // private System.Void set_Name(System.String value)
    // Offset: 0x2406568
    void set_Name(::Il2CppString* value);
    // public System.Void .ctor(System.String name)
    // Offset: 0x2406534
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RazorImportNamespaceAttribute* New_ctor(::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::RazorImportNamespaceAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RazorImportNamespaceAttribute*, creationType>(name)));
    }
  }; // JetBrains.Annotations.RazorImportNamespaceAttribute
  #pragma pack(pop)
  static check_size<sizeof(RazorImportNamespaceAttribute), 16 + sizeof(::Il2CppString*)> __JetBrains_Annotations_RazorImportNamespaceAttributeSizeCheck;
  static_assert(sizeof(RazorImportNamespaceAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::RazorImportNamespaceAttribute*, "JetBrains.Annotations", "RazorImportNamespaceAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: JetBrains::Annotations::RazorImportNamespaceAttribute::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (JetBrains::Annotations::RazorImportNamespaceAttribute::*)()>(&JetBrains::Annotations::RazorImportNamespaceAttribute::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::RazorImportNamespaceAttribute*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::RazorImportNamespaceAttribute::set_Name
// Il2CppName: set_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::RazorImportNamespaceAttribute::*)(::Il2CppString*)>(&JetBrains::Annotations::RazorImportNamespaceAttribute::set_Name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::RazorImportNamespaceAttribute*), "set_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::RazorImportNamespaceAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
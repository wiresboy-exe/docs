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
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.RazorHelperCommonAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: DF097C
  class RazorHelperCommonAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: RazorHelperCommonAttribute
    RazorHelperCommonAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x240652C
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RazorHelperCommonAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::RazorHelperCommonAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RazorHelperCommonAttribute*, creationType>()));
    }
  }; // JetBrains.Annotations.RazorHelperCommonAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::RazorHelperCommonAttribute*, "JetBrains.Annotations", "RazorHelperCommonAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: JetBrains::Annotations::RazorHelperCommonAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
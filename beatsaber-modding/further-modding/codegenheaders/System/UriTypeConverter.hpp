// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.TypeConverter
#include "System/ComponentModel/TypeConverter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.UriTypeConverter
  // [TokenAttribute] Offset: FFFFFFFF
  class UriTypeConverter : public System::ComponentModel::TypeConverter {
    public:
    // Creating value type constructor for type: UriTypeConverter
    UriTypeConverter() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x23EA1E0
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Void TypeConverter::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UriTypeConverter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::UriTypeConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UriTypeConverter*, creationType>()));
    }
  }; // System.UriTypeConverter
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::UriTypeConverter*, "System", "UriTypeConverter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::UriTypeConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
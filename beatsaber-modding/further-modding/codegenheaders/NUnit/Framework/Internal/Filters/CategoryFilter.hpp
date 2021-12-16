// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Internal.Filters.ValueMatchFilter
#include "NUnit/Framework/Internal/Filters/ValueMatchFilter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Filters
namespace NUnit::Framework::Internal::Filters {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Filters.CategoryFilter
  // [TokenAttribute] Offset: FFFFFFFF
  class CategoryFilter : public NUnit::Framework::Internal::Filters::ValueMatchFilter {
    public:
    // Creating value type constructor for type: CategoryFilter
    CategoryFilter() noexcept {}
    // protected override System.String get_ElementName()
    // Offset: 0x1781F14
    // Implemented from: NUnit.Framework.Internal.Filters.ValueMatchFilter
    // Base method: System.String ValueMatchFilter::get_ElementName()
    ::Il2CppString* get_ElementName();
    // public System.Void .ctor(System.String name)
    // Offset: 0x1781B20
    // Implemented from: NUnit.Framework.Internal.Filters.ValueMatchFilter
    // Base method: System.Void ValueMatchFilter::.ctor(System.String name)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CategoryFilter* New_ctor(::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Filters::CategoryFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CategoryFilter*, creationType>(name)));
    }
    // public override System.Boolean Match(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x1781B28
    // Implemented from: NUnit.Framework.Internal.TestFilter
    // Base method: System.Boolean TestFilter::Match(NUnit.Framework.Interfaces.ITest test)
    bool Match(NUnit::Framework::Interfaces::ITest* test);
  }; // NUnit.Framework.Internal.Filters.CategoryFilter
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Filters::CategoryFilter*, "NUnit.Framework.Internal.Filters", "CategoryFilter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::CategoryFilter::get_ElementName
// Il2CppName: get_ElementName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Internal::Filters::CategoryFilter::*)()>(&NUnit::Framework::Internal::Filters::CategoryFilter::get_ElementName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Filters::CategoryFilter*), "get_ElementName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::CategoryFilter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::CategoryFilter::Match
// Il2CppName: Match
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::Filters::CategoryFilter::*)(NUnit::Framework::Interfaces::ITest*)>(&NUnit::Framework::Internal::Filters::CategoryFilter::Match)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Filters::CategoryFilter*), "Match", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
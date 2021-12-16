// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Resources.IResourceGroveler
#include "System/Resources/IResourceGroveler.hpp"
// Including type: System.Resources.ResourceManager
#include "System/Resources/ResourceManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: System::Resources
namespace System::Resources {
  // Skipping declaration: UltimateResourceFallbackLocation because it is already included!
}
// Completed forward declares
// Type namespace: System.Resources
namespace System::Resources {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Resources.ManifestBasedResourceGroveler
  // [TokenAttribute] Offset: FFFFFFFF
  class ManifestBasedResourceGroveler : public ::Il2CppObject/*, public System::Resources::IResourceGroveler*/ {
    public:
    // private System.Resources.ResourceManager/System.Resources.ResourceManagerMediator _mediator
    // Size: 0x8
    // Offset: 0x10
    System::Resources::ResourceManager::ResourceManagerMediator* mediator;
    // Field size check
    static_assert(sizeof(System::Resources::ResourceManager::ResourceManagerMediator*) == 0x8);
    // Creating value type constructor for type: ManifestBasedResourceGroveler
    ManifestBasedResourceGroveler(System::Resources::ResourceManager::ResourceManagerMediator* mediator_ = {}) noexcept : mediator{mediator_} {}
    // Creating interface conversion operator: operator System::Resources::IResourceGroveler
    operator System::Resources::IResourceGroveler() noexcept {
      return *reinterpret_cast<System::Resources::IResourceGroveler*>(this);
    }
    // Creating conversion operator: operator System::Resources::ResourceManager::ResourceManagerMediator*
    constexpr operator System::Resources::ResourceManager::ResourceManagerMediator*() const noexcept {
      return mediator;
    }
    // Get instance field reference: private System.Resources.ResourceManager/System.Resources.ResourceManagerMediator _mediator
    System::Resources::ResourceManager::ResourceManagerMediator*& dyn__mediator();
    // public System.Void .ctor(System.Resources.ResourceManager/System.Resources.ResourceManagerMediator mediator)
    // Offset: 0x1486FFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ManifestBasedResourceGroveler* New_ctor(System::Resources::ResourceManager::ResourceManagerMediator* mediator) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Resources::ManifestBasedResourceGroveler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ManifestBasedResourceGroveler*, creationType>(mediator)));
    }
    // static System.Globalization.CultureInfo GetNeutralResourcesLanguage(System.Reflection.Assembly a, ref System.Resources.UltimateResourceFallbackLocation fallbackLocation)
    // Offset: 0x1487028
    static System::Globalization::CultureInfo* GetNeutralResourcesLanguage(System::Reflection::Assembly* a, ByRef<System::Resources::UltimateResourceFallbackLocation> fallbackLocation);
    // static private System.Boolean GetNeutralResourcesLanguageAttribute(System.Reflection.Assembly assembly, ref System.String cultureName, ref System.Int16 fallbackLocation)
    // Offset: 0x1487358
    static bool GetNeutralResourcesLanguageAttribute(System::Reflection::Assembly* assembly, ByRef<::Il2CppString*> cultureName, ByRef<int16_t> fallbackLocation);
  }; // System.Resources.ManifestBasedResourceGroveler
  #pragma pack(pop)
  static check_size<sizeof(ManifestBasedResourceGroveler), 16 + sizeof(System::Resources::ResourceManager::ResourceManagerMediator*)> __System_Resources_ManifestBasedResourceGrovelerSizeCheck;
  static_assert(sizeof(ManifestBasedResourceGroveler) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Resources::ManifestBasedResourceGroveler*, "System.Resources", "ManifestBasedResourceGroveler");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Resources::ManifestBasedResourceGroveler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Resources::ManifestBasedResourceGroveler::GetNeutralResourcesLanguage
// Il2CppName: GetNeutralResourcesLanguage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::CultureInfo* (*)(System::Reflection::Assembly*, ByRef<System::Resources::UltimateResourceFallbackLocation>)>(&System::Resources::ManifestBasedResourceGroveler::GetNeutralResourcesLanguage)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    static auto* fallbackLocation = &::il2cpp_utils::GetClassFromName("System.Resources", "UltimateResourceFallbackLocation")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ManifestBasedResourceGroveler*), "GetNeutralResourcesLanguage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, fallbackLocation});
  }
};
// Writing MetadataGetter for method: System::Resources::ManifestBasedResourceGroveler::GetNeutralResourcesLanguageAttribute
// Il2CppName: GetNeutralResourcesLanguageAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Reflection::Assembly*, ByRef<::Il2CppString*>, ByRef<int16_t>)>(&System::Resources::ManifestBasedResourceGroveler::GetNeutralResourcesLanguageAttribute)> {
  static const MethodInfo* get() {
    static auto* assembly = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    static auto* cultureName = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* fallbackLocation = &::il2cpp_utils::GetClassFromName("System", "Int16")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ManifestBasedResourceGroveler*), "GetNeutralResourcesLanguageAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assembly, cultureName, fallbackLocation});
  }
};
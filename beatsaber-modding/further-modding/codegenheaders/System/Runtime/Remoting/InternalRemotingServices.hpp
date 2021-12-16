// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Runtime::Remoting::Metadata
namespace System::Runtime::Remoting::Metadata {
  // Forward declaring type: SoapAttribute
  class SoapAttribute;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.InternalRemotingServices
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA32AC
  class InternalRemotingServices : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: InternalRemotingServices
    InternalRemotingServices() noexcept {}
    // Get static field: static private System.Collections.Hashtable _soapAttributes
    static System::Collections::Hashtable* _get__soapAttributes();
    // Set static field: static private System.Collections.Hashtable _soapAttributes
    static void _set__soapAttributes(System::Collections::Hashtable* value);
    // static private System.Void .cctor()
    // Offset: 0x1A46EF8
    static void _cctor();
    // static public System.Runtime.Remoting.Metadata.SoapAttribute GetCachedSoapAttribute(System.Object reflectionObject)
    // Offset: 0x1A46A38
    static System::Runtime::Remoting::Metadata::SoapAttribute* GetCachedSoapAttribute(::Il2CppObject* reflectionObject);
  }; // System.Runtime.Remoting.InternalRemotingServices
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::InternalRemotingServices*, "System.Runtime.Remoting", "InternalRemotingServices");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::InternalRemotingServices::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Runtime::Remoting::InternalRemotingServices::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::InternalRemotingServices*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::InternalRemotingServices::GetCachedSoapAttribute
// Il2CppName: GetCachedSoapAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Metadata::SoapAttribute* (*)(::Il2CppObject*)>(&System::Runtime::Remoting::InternalRemotingServices::GetCachedSoapAttribute)> {
  static const MethodInfo* get() {
    static auto* reflectionObject = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::InternalRemotingServices*), "GetCachedSoapAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reflectionObject});
  }
};
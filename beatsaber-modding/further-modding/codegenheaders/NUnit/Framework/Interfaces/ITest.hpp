// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Interfaces.IXmlNodeBuilder
#include "NUnit/Framework/Interfaces/IXmlNodeBuilder.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITypeInfo
  class ITypeInfo;
  // Forward declaring type: IMethodInfo
  class IMethodInfo;
  // Forward declaring type: RunState
  struct RunState;
  // Forward declaring type: IPropertyBag
  class IPropertyBag;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Interfaces.ITest
  // [TokenAttribute] Offset: FFFFFFFF
  class ITest/*, public NUnit::Framework::Interfaces::IXmlNodeBuilder*/ {
    public:
    // Creating value type constructor for type: ITest
    ITest() noexcept {}
    // Creating interface conversion operator: operator NUnit::Framework::Interfaces::IXmlNodeBuilder
    operator NUnit::Framework::Interfaces::IXmlNodeBuilder() noexcept {
      return *reinterpret_cast<NUnit::Framework::Interfaces::IXmlNodeBuilder*>(this);
    }
    // public System.String get_Id()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_Id();
    // public System.String get_Name()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_Name();
    // public System.String get_FullName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_FullName();
    // public NUnit.Framework.Interfaces.ITypeInfo get_TypeInfo()
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Interfaces::ITypeInfo* get_TypeInfo();
    // public NUnit.Framework.Interfaces.IMethodInfo get_Method()
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Interfaces::IMethodInfo* get_Method();
    // public NUnit.Framework.Interfaces.RunState get_RunState()
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Interfaces::RunState get_RunState();
    // public System.Int32 get_TestCaseCount()
    // Offset: 0xFFFFFFFF
    int get_TestCaseCount();
    // public NUnit.Framework.Interfaces.IPropertyBag get_Properties()
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Interfaces::IPropertyBag* get_Properties();
    // public NUnit.Framework.Interfaces.ITest get_Parent()
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Interfaces::ITest* get_Parent();
    // public System.Boolean get_IsSuite()
    // Offset: 0xFFFFFFFF
    bool get_IsSuite();
    // public System.Boolean get_HasChildren()
    // Offset: 0xFFFFFFFF
    bool get_HasChildren();
    // public System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITest> get_Tests()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IList_1<NUnit::Framework::Interfaces::ITest*>* get_Tests();
  }; // NUnit.Framework.Interfaces.ITest
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::ITest*, "NUnit.Framework.Interfaces", "ITest");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITest::get_Id
// Il2CppName: get_Id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Interfaces::ITest::*)()>(&NUnit::Framework::Interfaces::ITest::get_Id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITest*), "get_Id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITest::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Interfaces::ITest::*)()>(&NUnit::Framework::Interfaces::ITest::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITest*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITest::get_FullName
// Il2CppName: get_FullName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Interfaces::ITest::*)()>(&NUnit::Framework::Interfaces::ITest::get_FullName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITest*), "get_FullName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITest::get_TypeInfo
// Il2CppName: get_TypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::ITypeInfo* (NUnit::Framework::Interfaces::ITest::*)()>(&NUnit::Framework::Interfaces::ITest::get_TypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITest*), "get_TypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITest::get_Method
// Il2CppName: get_Method
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::IMethodInfo* (NUnit::Framework::Interfaces::ITest::*)()>(&NUnit::Framework::Interfaces::ITest::get_Method)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITest*), "get_Method", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITest::get_RunState
// Il2CppName: get_RunState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::RunState (NUnit::Framework::Interfaces::ITest::*)()>(&NUnit::Framework::Interfaces::ITest::get_RunState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITest*), "get_RunState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITest::get_TestCaseCount
// Il2CppName: get_TestCaseCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NUnit::Framework::Interfaces::ITest::*)()>(&NUnit::Framework::Interfaces::ITest::get_TestCaseCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITest*), "get_TestCaseCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITest::get_Properties
// Il2CppName: get_Properties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::IPropertyBag* (NUnit::Framework::Interfaces::ITest::*)()>(&NUnit::Framework::Interfaces::ITest::get_Properties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITest*), "get_Properties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITest::get_Parent
// Il2CppName: get_Parent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::ITest* (NUnit::Framework::Interfaces::ITest::*)()>(&NUnit::Framework::Interfaces::ITest::get_Parent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITest*), "get_Parent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITest::get_IsSuite
// Il2CppName: get_IsSuite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Interfaces::ITest::*)()>(&NUnit::Framework::Interfaces::ITest::get_IsSuite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITest*), "get_IsSuite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITest::get_HasChildren
// Il2CppName: get_HasChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Interfaces::ITest::*)()>(&NUnit::Framework::Interfaces::ITest::get_HasChildren)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITest*), "get_HasChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITest::get_Tests
// Il2CppName: get_Tests
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IList_1<NUnit::Framework::Interfaces::ITest*>* (NUnit::Framework::Interfaces::ITest::*)()>(&NUnit::Framework::Interfaces::ITest::get_Tests)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITest*), "get_Tests", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
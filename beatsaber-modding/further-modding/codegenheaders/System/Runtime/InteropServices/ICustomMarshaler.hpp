// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.ICustomMarshaler
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA44AC
  class ICustomMarshaler {
    public:
    // Creating value type constructor for type: ICustomMarshaler
    ICustomMarshaler() noexcept {}
    // public System.Object MarshalNativeToManaged(System.IntPtr pNativeData)
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* MarshalNativeToManaged(System::IntPtr pNativeData);
    // public System.IntPtr MarshalManagedToNative(System.Object ManagedObj)
    // Offset: 0xFFFFFFFF
    System::IntPtr MarshalManagedToNative(::Il2CppObject* ManagedObj);
    // public System.Void CleanUpNativeData(System.IntPtr pNativeData)
    // Offset: 0xFFFFFFFF
    void CleanUpNativeData(System::IntPtr pNativeData);
    // public System.Void CleanUpManagedData(System.Object ManagedObj)
    // Offset: 0xFFFFFFFF
    void CleanUpManagedData(::Il2CppObject* ManagedObj);
    // public System.Int32 GetNativeDataSize()
    // Offset: 0xFFFFFFFF
    int GetNativeDataSize();
  }; // System.Runtime.InteropServices.ICustomMarshaler
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::ICustomMarshaler*, "System.Runtime.InteropServices", "ICustomMarshaler");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::InteropServices::ICustomMarshaler::MarshalNativeToManaged
// Il2CppName: MarshalNativeToManaged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::InteropServices::ICustomMarshaler::*)(System::IntPtr)>(&System::Runtime::InteropServices::ICustomMarshaler::MarshalNativeToManaged)> {
  static const MethodInfo* get() {
    static auto* pNativeData = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::ICustomMarshaler*), "MarshalNativeToManaged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pNativeData});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::ICustomMarshaler::MarshalManagedToNative
// Il2CppName: MarshalManagedToNative
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (System::Runtime::InteropServices::ICustomMarshaler::*)(::Il2CppObject*)>(&System::Runtime::InteropServices::ICustomMarshaler::MarshalManagedToNative)> {
  static const MethodInfo* get() {
    static auto* ManagedObj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::ICustomMarshaler*), "MarshalManagedToNative", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ManagedObj});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::ICustomMarshaler::CleanUpNativeData
// Il2CppName: CleanUpNativeData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::InteropServices::ICustomMarshaler::*)(System::IntPtr)>(&System::Runtime::InteropServices::ICustomMarshaler::CleanUpNativeData)> {
  static const MethodInfo* get() {
    static auto* pNativeData = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::ICustomMarshaler*), "CleanUpNativeData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pNativeData});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::ICustomMarshaler::CleanUpManagedData
// Il2CppName: CleanUpManagedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::InteropServices::ICustomMarshaler::*)(::Il2CppObject*)>(&System::Runtime::InteropServices::ICustomMarshaler::CleanUpManagedData)> {
  static const MethodInfo* get() {
    static auto* ManagedObj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::ICustomMarshaler*), "CleanUpManagedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ManagedObj});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::ICustomMarshaler::GetNativeDataSize
// Il2CppName: GetNativeDataSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::InteropServices::ICustomMarshaler::*)()>(&System::Runtime::InteropServices::ICustomMarshaler::GetNativeDataSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::ICustomMarshaler*), "GetNativeDataSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
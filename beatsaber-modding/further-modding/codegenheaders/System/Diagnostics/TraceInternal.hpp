// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: TraceListenerCollection
  class TraceListenerCollection;
}
// Completed forward declares
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.TraceInternal
  // [TokenAttribute] Offset: FFFFFFFF
  class TraceInternal : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: TraceInternal
    TraceInternal() noexcept {}
    // Get static field: static private System.String appName
    static ::Il2CppString* _get_appName();
    // Set static field: static private System.String appName
    static void _set_appName(::Il2CppString* value);
    // Get static field: static private System.Diagnostics.TraceListenerCollection listeners
    static System::Diagnostics::TraceListenerCollection* _get_listeners();
    // Set static field: static private System.Diagnostics.TraceListenerCollection listeners
    static void _set_listeners(System::Diagnostics::TraceListenerCollection* value);
    // Get static field: static private System.Boolean autoFlush
    static bool _get_autoFlush();
    // Set static field: static private System.Boolean autoFlush
    static void _set_autoFlush(bool value);
    // Get static field: static private System.Boolean useGlobalLock
    static bool _get_useGlobalLock();
    // Set static field: static private System.Boolean useGlobalLock
    static void _set_useGlobalLock(bool value);
    // Get static field: static private System.Int32 indentLevel
    static int _get_indentLevel();
    // Set static field: static private System.Int32 indentLevel
    static void _set_indentLevel(int value);
    // Get static field: static private System.Int32 indentSize
    static int _get_indentSize();
    // Set static field: static private System.Int32 indentSize
    static void _set_indentSize(int value);
    // Get static field: static readonly System.Object critSec
    static ::Il2CppObject* _get_critSec();
    // Set static field: static readonly System.Object critSec
    static void _set_critSec(::Il2CppObject* value);
    // static public System.Diagnostics.TraceListenerCollection get_Listeners()
    // Offset: 0x18BB2FC
    static System::Diagnostics::TraceListenerCollection* get_Listeners();
    // static public System.Boolean get_AutoFlush()
    // Offset: 0x18BB788
    static bool get_AutoFlush();
    // static public System.Boolean get_UseGlobalLock()
    // Offset: 0x18BB7F8
    static bool get_UseGlobalLock();
    // static public System.Int32 get_IndentLevel()
    // Offset: 0x18BB868
    static int get_IndentLevel();
    // static public System.Int32 get_IndentSize()
    // Offset: 0x18BB8D0
    static int get_IndentSize();
    // static private System.Void .cctor()
    // Offset: 0x18BC0D8
    static void _cctor();
    // static public System.Void Assert(System.Boolean condition)
    // Offset: 0x18B8878
    static void Assert_(bool condition);
    // static public System.Void Fail(System.String message)
    // Offset: 0x18BB940
    static void Fail(::Il2CppString* message);
    // static private System.Void InitializeSettings()
    // Offset: 0x18BB524
    static void InitializeSettings();
  }; // System.Diagnostics.TraceInternal
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::TraceInternal*, "System.Diagnostics", "TraceInternal");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::TraceInternal::get_Listeners
// Il2CppName: get_Listeners
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Diagnostics::TraceListenerCollection* (*)()>(&System::Diagnostics::TraceInternal::get_Listeners)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceInternal*), "get_Listeners", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceInternal::get_AutoFlush
// Il2CppName: get_AutoFlush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Diagnostics::TraceInternal::get_AutoFlush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceInternal*), "get_AutoFlush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceInternal::get_UseGlobalLock
// Il2CppName: get_UseGlobalLock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Diagnostics::TraceInternal::get_UseGlobalLock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceInternal*), "get_UseGlobalLock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceInternal::get_IndentLevel
// Il2CppName: get_IndentLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&System::Diagnostics::TraceInternal::get_IndentLevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceInternal*), "get_IndentLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceInternal::get_IndentSize
// Il2CppName: get_IndentSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&System::Diagnostics::TraceInternal::get_IndentSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceInternal*), "get_IndentSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceInternal::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Diagnostics::TraceInternal::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceInternal*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceInternal::Assert_
// Il2CppName: Assert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&System::Diagnostics::TraceInternal::Assert_)> {
  static const MethodInfo* get() {
    static auto* condition = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceInternal*), "Assert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{condition});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceInternal::Fail
// Il2CppName: Fail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*)>(&System::Diagnostics::TraceInternal::Fail)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceInternal*), "Fail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceInternal::InitializeSettings
// Il2CppName: InitializeSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Diagnostics::TraceInternal::InitializeSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceInternal*), "InitializeSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
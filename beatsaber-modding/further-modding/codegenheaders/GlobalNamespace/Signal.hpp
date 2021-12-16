// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Signal
  // [TokenAttribute] Offset: FFFFFFFF
  class Signal : public UnityEngine::ScriptableObject {
    public:
    // private System.Action _event
    // Size: 0x8
    // Offset: 0x18
    System::Action* event;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: Signal
    Signal(System::Action* event_ = {}) noexcept : event{event_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Action _event
    System::Action*& dyn__event();
    // private System.Void add__event(System.Action value)
    // Offset: 0x2393A80
    void add__event(System::Action* value);
    // private System.Void remove__event(System.Action value)
    // Offset: 0x2393B24
    void remove__event(System::Action* value);
    // public System.Void Raise()
    // Offset: 0x2393BC8
    void Raise();
    // public System.Void Subscribe(System.Action foo)
    // Offset: 0x2393BDC
    void Subscribe(System::Action* foo);
    // public System.Void Unsubscribe(System.Action foo)
    // Offset: 0x2393C08
    void Unsubscribe(System::Action* foo);
    // public System.Void .ctor()
    // Offset: 0x2393C0C
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Signal* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::Signal::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Signal*, creationType>()));
    }
  }; // Signal
  #pragma pack(pop)
  static check_size<sizeof(Signal), 24 + sizeof(System::Action*)> __GlobalNamespace_SignalSizeCheck;
  static_assert(sizeof(Signal) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Signal*, "", "Signal");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::Signal::add__event
// Il2CppName: add__event
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Signal::*)(System::Action*)>(&GlobalNamespace::Signal::add__event)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Signal*), "add__event", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Signal::remove__event
// Il2CppName: remove__event
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Signal::*)(System::Action*)>(&GlobalNamespace::Signal::remove__event)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Signal*), "remove__event", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Signal::Raise
// Il2CppName: Raise
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Signal::*)()>(&GlobalNamespace::Signal::Raise)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Signal*), "Raise", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Signal::Subscribe
// Il2CppName: Subscribe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Signal::*)(System::Action*)>(&GlobalNamespace::Signal::Subscribe)> {
  static const MethodInfo* get() {
    static auto* foo = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Signal*), "Subscribe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{foo});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Signal::Unsubscribe
// Il2CppName: Unsubscribe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Signal::*)(System::Action*)>(&GlobalNamespace::Signal::Unsubscribe)> {
  static const MethodInfo* get() {
    static auto* foo = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Signal*), "Unsubscribe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{foo});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Signal::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.PointerInputModule
#include "UnityEngine/EventSystems/PointerInputModule.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Skipping declaration: PointerEventData because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x71
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.TouchInputModule
  // [TokenAttribute] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: DEB4B4
  // [AddComponentMenu] Offset: DEB4B4
  class TouchInputModule : public UnityEngine::EventSystems::PointerInputModule {
    public:
    // private UnityEngine.Vector2 m_LastMousePosition
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::Vector2 m_LastMousePosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 m_MousePosition
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::Vector2 m_MousePosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private UnityEngine.EventSystems.PointerEventData m_InputPointerEvent
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::EventSystems::PointerEventData* m_InputPointerEvent;
    // Field size check
    static_assert(sizeof(UnityEngine::EventSystems::PointerEventData*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xDED53C
    // private System.Boolean m_ForceModuleActive
    // Size: 0x1
    // Offset: 0x70
    bool m_ForceModuleActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: TouchInputModule
    TouchInputModule(UnityEngine::Vector2 m_LastMousePosition_ = {}, UnityEngine::Vector2 m_MousePosition_ = {}, UnityEngine::EventSystems::PointerEventData* m_InputPointerEvent_ = {}, bool m_ForceModuleActive_ = {}) noexcept : m_LastMousePosition{m_LastMousePosition_}, m_MousePosition{m_MousePosition_}, m_InputPointerEvent{m_InputPointerEvent_}, m_ForceModuleActive{m_ForceModuleActive_} {}
    // Get instance field reference: private UnityEngine.Vector2 m_LastMousePosition
    UnityEngine::Vector2& dyn_m_LastMousePosition();
    // Get instance field reference: private UnityEngine.Vector2 m_MousePosition
    UnityEngine::Vector2& dyn_m_MousePosition();
    // Get instance field reference: private UnityEngine.EventSystems.PointerEventData m_InputPointerEvent
    UnityEngine::EventSystems::PointerEventData*& dyn_m_InputPointerEvent();
    // Get instance field reference: private System.Boolean m_ForceModuleActive
    bool& dyn_m_ForceModuleActive();
    // public System.Boolean get_allowActivationOnStandalone()
    // Offset: 0x1477DDC
    bool get_allowActivationOnStandalone();
    // public System.Void set_allowActivationOnStandalone(System.Boolean value)
    // Offset: 0x1477DE4
    void set_allowActivationOnStandalone(bool value);
    // public System.Boolean get_forceModuleActive()
    // Offset: 0x1477DF0
    bool get_forceModuleActive();
    // public System.Void set_forceModuleActive(System.Boolean value)
    // Offset: 0x1477DF8
    void set_forceModuleActive(bool value);
    // private System.Boolean UseFakeInput()
    // Offset: 0x14780D8
    bool UseFakeInput();
    // private System.Void FakeTouches()
    // Offset: 0x1478144
    void FakeTouches();
    // private System.Void ProcessTouchEvents()
    // Offset: 0x147828C
    void ProcessTouchEvents();
    // protected System.Void ProcessTouchPress(UnityEngine.EventSystems.PointerEventData pointerEvent, System.Boolean pressed, System.Boolean released)
    // Offset: 0x14783E0
    void ProcessTouchPress(UnityEngine::EventSystems::PointerEventData* pointerEvent, bool pressed, bool released);
    // protected System.Void .ctor()
    // Offset: 0x1477DD8
    // Implemented from: UnityEngine.EventSystems.PointerInputModule
    // Base method: System.Void PointerInputModule::.ctor()
    // Base method: System.Void BaseInputModule::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TouchInputModule* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::EventSystems::TouchInputModule::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TouchInputModule*, creationType>()));
    }
    // public override System.Void UpdateModule()
    // Offset: 0x1477E04
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::UpdateModule()
    void UpdateModule();
    // public override System.Boolean IsModuleSupported()
    // Offset: 0x1477F68
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Boolean BaseInputModule::IsModuleSupported()
    bool IsModuleSupported();
    // public override System.Boolean ShouldActivateModule()
    // Offset: 0x1477FA4
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Boolean BaseInputModule::ShouldActivateModule()
    bool ShouldActivateModule();
    // public override System.Void Process()
    // Offset: 0x147810C
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::Process()
    void Process();
    // public override System.Void DeactivateModule()
    // Offset: 0x1478AC4
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::DeactivateModule()
    void DeactivateModule();
    // public override System.String ToString()
    // Offset: 0x1478AC8
    // Implemented from: UnityEngine.EventSystems.PointerInputModule
    // Base method: System.String PointerInputModule::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.EventSystems.TouchInputModule
  #pragma pack(pop)
  static check_size<sizeof(TouchInputModule), 112 + sizeof(bool)> __UnityEngine_EventSystems_TouchInputModuleSizeCheck;
  static_assert(sizeof(TouchInputModule) == 0x71);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::TouchInputModule*, "UnityEngine.EventSystems", "TouchInputModule");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EventSystems::TouchInputModule::get_allowActivationOnStandalone
// Il2CppName: get_allowActivationOnStandalone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::TouchInputModule::*)()>(&UnityEngine::EventSystems::TouchInputModule::get_allowActivationOnStandalone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::TouchInputModule*), "get_allowActivationOnStandalone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::TouchInputModule::set_allowActivationOnStandalone
// Il2CppName: set_allowActivationOnStandalone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::TouchInputModule::*)(bool)>(&UnityEngine::EventSystems::TouchInputModule::set_allowActivationOnStandalone)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::TouchInputModule*), "set_allowActivationOnStandalone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::TouchInputModule::get_forceModuleActive
// Il2CppName: get_forceModuleActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::TouchInputModule::*)()>(&UnityEngine::EventSystems::TouchInputModule::get_forceModuleActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::TouchInputModule*), "get_forceModuleActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::TouchInputModule::set_forceModuleActive
// Il2CppName: set_forceModuleActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::TouchInputModule::*)(bool)>(&UnityEngine::EventSystems::TouchInputModule::set_forceModuleActive)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::TouchInputModule*), "set_forceModuleActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::TouchInputModule::UseFakeInput
// Il2CppName: UseFakeInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::TouchInputModule::*)()>(&UnityEngine::EventSystems::TouchInputModule::UseFakeInput)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::TouchInputModule*), "UseFakeInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::TouchInputModule::FakeTouches
// Il2CppName: FakeTouches
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::TouchInputModule::*)()>(&UnityEngine::EventSystems::TouchInputModule::FakeTouches)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::TouchInputModule*), "FakeTouches", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::TouchInputModule::ProcessTouchEvents
// Il2CppName: ProcessTouchEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::TouchInputModule::*)()>(&UnityEngine::EventSystems::TouchInputModule::ProcessTouchEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::TouchInputModule*), "ProcessTouchEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::TouchInputModule::ProcessTouchPress
// Il2CppName: ProcessTouchPress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::TouchInputModule::*)(UnityEngine::EventSystems::PointerEventData*, bool, bool)>(&UnityEngine::EventSystems::TouchInputModule::ProcessTouchPress)> {
  static const MethodInfo* get() {
    static auto* pointerEvent = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    static auto* pressed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* released = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::TouchInputModule*), "ProcessTouchPress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerEvent, pressed, released});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::TouchInputModule::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::EventSystems::TouchInputModule::UpdateModule
// Il2CppName: UpdateModule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::TouchInputModule::*)()>(&UnityEngine::EventSystems::TouchInputModule::UpdateModule)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::TouchInputModule*), "UpdateModule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::TouchInputModule::IsModuleSupported
// Il2CppName: IsModuleSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::TouchInputModule::*)()>(&UnityEngine::EventSystems::TouchInputModule::IsModuleSupported)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::TouchInputModule*), "IsModuleSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::TouchInputModule::ShouldActivateModule
// Il2CppName: ShouldActivateModule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::TouchInputModule::*)()>(&UnityEngine::EventSystems::TouchInputModule::ShouldActivateModule)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::TouchInputModule*), "ShouldActivateModule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::TouchInputModule::Process
// Il2CppName: Process
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::TouchInputModule::*)()>(&UnityEngine::EventSystems::TouchInputModule::Process)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::TouchInputModule*), "Process", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::TouchInputModule::DeactivateModule
// Il2CppName: DeactivateModule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::TouchInputModule::*)()>(&UnityEngine::EventSystems::TouchInputModule::DeactivateModule)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::TouchInputModule*), "DeactivateModule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::TouchInputModule::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::EventSystems::TouchInputModule::*)()>(&UnityEngine::EventSystems::TouchInputModule::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::TouchInputModule*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
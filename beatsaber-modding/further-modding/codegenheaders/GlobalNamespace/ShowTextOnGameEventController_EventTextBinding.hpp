// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: ShowTextOnGameEventController
#include "GlobalNamespace/ShowTextOnGameEventController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Signal
  class Signal;
  // Forward declaring type: TextFadeTransitions
  class TextFadeTransitions;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: ShowTextOnGameEventController/EventTextBinding
  // [TokenAttribute] Offset: FFFFFFFF
  class ShowTextOnGameEventController::EventTextBinding : public ::Il2CppObject {
    public:
    // private Signal _signal
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::Signal* signal;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Signal*) == 0x8);
    // [TextAreaAttribute] Offset: 0xE4D450
    // private System.String _text
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* text;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private TextFadeTransitions _textFadeTransitions
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::TextFadeTransitions* textFadeTransitions;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TextFadeTransitions*) == 0x8);
    // Creating value type constructor for type: EventTextBinding
    EventTextBinding(GlobalNamespace::Signal* signal_ = {}, ::Il2CppString* text_ = {}, GlobalNamespace::TextFadeTransitions* textFadeTransitions_ = {}) noexcept : signal{signal_}, text{text_}, textFadeTransitions{textFadeTransitions_} {}
    // Get instance field reference: private Signal _signal
    GlobalNamespace::Signal*& dyn__signal();
    // Get instance field reference: private System.String _text
    ::Il2CppString*& dyn__text();
    // Get instance field reference: private TextFadeTransitions _textFadeTransitions
    GlobalNamespace::TextFadeTransitions*& dyn__textFadeTransitions();
    // public System.Void Init(TextFadeTransitions textFadeTransitions)
    // Offset: 0x10958B8
    void Init(GlobalNamespace::TextFadeTransitions* textFadeTransitions);
    // public System.Void Deinit()
    // Offset: 0x10959B4
    void Deinit();
    // private System.Void HandleGameEvent()
    // Offset: 0x1095A48
    void HandleGameEvent();
    // public System.Void .ctor()
    // Offset: 0x1095A84
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShowTextOnGameEventController::EventTextBinding* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ShowTextOnGameEventController::EventTextBinding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShowTextOnGameEventController::EventTextBinding*, creationType>()));
    }
  }; // ShowTextOnGameEventController/EventTextBinding
  #pragma pack(pop)
  static check_size<sizeof(ShowTextOnGameEventController::EventTextBinding), 32 + sizeof(GlobalNamespace::TextFadeTransitions*)> __GlobalNamespace_ShowTextOnGameEventController_EventTextBindingSizeCheck;
  static_assert(sizeof(ShowTextOnGameEventController::EventTextBinding) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ShowTextOnGameEventController::EventTextBinding*, "", "ShowTextOnGameEventController/EventTextBinding");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ShowTextOnGameEventController::EventTextBinding::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ShowTextOnGameEventController::EventTextBinding::*)(GlobalNamespace::TextFadeTransitions*)>(&GlobalNamespace::ShowTextOnGameEventController::EventTextBinding::Init)> {
  static const MethodInfo* get() {
    static auto* textFadeTransitions = &::il2cpp_utils::GetClassFromName("", "TextFadeTransitions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowTextOnGameEventController::EventTextBinding*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textFadeTransitions});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShowTextOnGameEventController::EventTextBinding::Deinit
// Il2CppName: Deinit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ShowTextOnGameEventController::EventTextBinding::*)()>(&GlobalNamespace::ShowTextOnGameEventController::EventTextBinding::Deinit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowTextOnGameEventController::EventTextBinding*), "Deinit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShowTextOnGameEventController::EventTextBinding::HandleGameEvent
// Il2CppName: HandleGameEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ShowTextOnGameEventController::EventTextBinding::*)()>(&GlobalNamespace::ShowTextOnGameEventController::EventTextBinding::HandleGameEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowTextOnGameEventController::EventTextBinding*), "HandleGameEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShowTextOnGameEventController::EventTextBinding::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
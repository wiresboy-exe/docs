// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: TMPro.TMP_InputField
#include "TMPro/TMP_InputField.hpp"
// Including type: UnityEngine.Events.UnityEvent`3
#include "UnityEngine/Events/UnityEvent_3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // WARNING Size may be invalid!
  // Autogenerated type: TMPro.TMP_InputField/TMPro.TextSelectionEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class TMP_InputField::TextSelectionEvent : public UnityEngine::Events::UnityEvent_3<::Il2CppString*, int, int> {
    public:
    // Creating value type constructor for type: TextSelectionEvent
    TextSelectionEvent() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x114F360
    // Implemented from: UnityEngine.Events.UnityEvent`3
    // Base method: System.Void UnityEvent_3::.ctor()
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_InputField::TextSelectionEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_InputField::TextSelectionEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_InputField::TextSelectionEvent*, creationType>()));
    }
  }; // TMPro.TMP_InputField/TMPro.TextSelectionEvent
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_InputField::TextSelectionEvent*, "TMPro", "TMP_InputField/TextSelectionEvent");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_InputField::TextSelectionEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
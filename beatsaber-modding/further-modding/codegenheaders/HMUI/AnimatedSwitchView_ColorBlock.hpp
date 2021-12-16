// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.AnimatedSwitchView
#include "HMUI/AnimatedSwitchView.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.AnimatedSwitchView/HMUI.ColorBlock
  // [TokenAttribute] Offset: FFFFFFFF
  class AnimatedSwitchView::ColorBlock : public ::Il2CppObject {
    public:
    // public UnityEngine.Color knobColor
    // Size: 0x10
    // Offset: 0x10
    UnityEngine::Color knobColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public UnityEngine.Color knobColor0
    // Size: 0x10
    // Offset: 0x20
    UnityEngine::Color knobColor0;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public UnityEngine.Color knobColor1
    // Size: 0x10
    // Offset: 0x30
    UnityEngine::Color knobColor1;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // [SpaceAttribute] Offset: 0xE1D2F4
    // public UnityEngine.Color backgroundColor
    // Size: 0x10
    // Offset: 0x40
    UnityEngine::Color backgroundColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public UnityEngine.Color backgroundColor0
    // Size: 0x10
    // Offset: 0x50
    UnityEngine::Color backgroundColor0;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public UnityEngine.Color backgroundColor1
    // Size: 0x10
    // Offset: 0x60
    UnityEngine::Color backgroundColor1;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Creating value type constructor for type: ColorBlock
    ColorBlock(UnityEngine::Color knobColor_ = {}, UnityEngine::Color knobColor0_ = {}, UnityEngine::Color knobColor1_ = {}, UnityEngine::Color backgroundColor_ = {}, UnityEngine::Color backgroundColor0_ = {}, UnityEngine::Color backgroundColor1_ = {}) noexcept : knobColor{knobColor_}, knobColor0{knobColor0_}, knobColor1{knobColor1_}, backgroundColor{backgroundColor_}, backgroundColor0{backgroundColor0_}, backgroundColor1{backgroundColor1_} {}
    // Get instance field reference: public UnityEngine.Color knobColor
    UnityEngine::Color& dyn_knobColor();
    // Get instance field reference: public UnityEngine.Color knobColor0
    UnityEngine::Color& dyn_knobColor0();
    // Get instance field reference: public UnityEngine.Color knobColor1
    UnityEngine::Color& dyn_knobColor1();
    // Get instance field reference: public UnityEngine.Color backgroundColor
    UnityEngine::Color& dyn_backgroundColor();
    // Get instance field reference: public UnityEngine.Color backgroundColor0
    UnityEngine::Color& dyn_backgroundColor0();
    // Get instance field reference: public UnityEngine.Color backgroundColor1
    UnityEngine::Color& dyn_backgroundColor1();
    // public System.Void .ctor()
    // Offset: 0x136C080
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimatedSwitchView::ColorBlock* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::AnimatedSwitchView::ColorBlock::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimatedSwitchView::ColorBlock*, creationType>()));
    }
  }; // HMUI.AnimatedSwitchView/HMUI.ColorBlock
  #pragma pack(pop)
  static check_size<sizeof(AnimatedSwitchView::ColorBlock), 96 + sizeof(UnityEngine::Color)> __HMUI_AnimatedSwitchView_ColorBlockSizeCheck;
  static_assert(sizeof(AnimatedSwitchView::ColorBlock) == 0x70);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::AnimatedSwitchView::ColorBlock*, "HMUI", "AnimatedSwitchView/ColorBlock");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::AnimatedSwitchView::ColorBlock::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MultiplayerGameplayAnimator
#include "GlobalNamespace/MultiplayerGameplayAnimator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerBigAvatarAnimator
  class MultiplayerBigAvatarAnimator;
  // Forward declaring type: ScaleAnimator
  class ScaleAnimator;
  // Forward declaring type: MultiplayerConnectedPlayerLevelFailController
  class MultiplayerConnectedPlayerLevelFailController;
  // Forward declaring type: MultiplayerLayoutProvider
  class MultiplayerLayoutProvider;
  // Forward declaring type: MultiplayerConnectedPlayerSpectatingSpot
  class MultiplayerConnectedPlayerSpectatingSpot;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerConnectedPlayerGameplayAnimator
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerConnectedPlayerGameplayAnimator : public GlobalNamespace::MultiplayerGameplayAnimator {
    public:
    // [SpaceAttribute] Offset: 0xE3FBE4
    // private MultiplayerBigAvatarAnimator _bigAvatarAnimator
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::MultiplayerBigAvatarAnimator* bigAvatarAnimator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerBigAvatarAnimator*) == 0x8);
    // private ScaleAnimator _avatarScaleAnimator
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::ScaleAnimator* avatarScaleAnimator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ScaleAnimator*) == 0x8);
    // [SpaceAttribute] Offset: 0xE3FC2C
    // private System.Single _defaultLightsWidth
    // Size: 0x4
    // Offset: 0x78
    float defaultLightsWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _observedLightsWidth
    // Size: 0x4
    // Offset: 0x7C
    float observedLightsWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [InjectAttribute] Offset: 0xE3FC74
    // private readonly MultiplayerConnectedPlayerLevelFailController _failController
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::MultiplayerConnectedPlayerLevelFailController* failController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerConnectedPlayerLevelFailController*) == 0x8);
    // [InjectAttribute] Offset: 0xE3FC84
    // private readonly MultiplayerLayoutProvider _multiplayerLayoutProvider
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::MultiplayerLayoutProvider* multiplayerLayoutProvider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLayoutProvider*) == 0x8);
    // [InjectAttribute] Offset: 0xE3FC94
    // private readonly MultiplayerConnectedPlayerSpectatingSpot _playerSpectatingSpot
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot* playerSpectatingSpot;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*) == 0x8);
    // Creating value type constructor for type: MultiplayerConnectedPlayerGameplayAnimator
    MultiplayerConnectedPlayerGameplayAnimator(GlobalNamespace::MultiplayerBigAvatarAnimator* bigAvatarAnimator_ = {}, GlobalNamespace::ScaleAnimator* avatarScaleAnimator_ = {}, float defaultLightsWidth_ = {}, float observedLightsWidth_ = {}, GlobalNamespace::MultiplayerConnectedPlayerLevelFailController* failController_ = {}, GlobalNamespace::MultiplayerLayoutProvider* multiplayerLayoutProvider_ = {}, GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot* playerSpectatingSpot_ = {}) noexcept : bigAvatarAnimator{bigAvatarAnimator_}, avatarScaleAnimator{avatarScaleAnimator_}, defaultLightsWidth{defaultLightsWidth_}, observedLightsWidth{observedLightsWidth_}, failController{failController_}, multiplayerLayoutProvider{multiplayerLayoutProvider_}, playerSpectatingSpot{playerSpectatingSpot_} {}
    // Get instance field reference: private MultiplayerBigAvatarAnimator _bigAvatarAnimator
    GlobalNamespace::MultiplayerBigAvatarAnimator*& dyn__bigAvatarAnimator();
    // Get instance field reference: private ScaleAnimator _avatarScaleAnimator
    GlobalNamespace::ScaleAnimator*& dyn__avatarScaleAnimator();
    // Get instance field reference: private System.Single _defaultLightsWidth
    float& dyn__defaultLightsWidth();
    // Get instance field reference: private System.Single _observedLightsWidth
    float& dyn__observedLightsWidth();
    // Get instance field reference: private readonly MultiplayerConnectedPlayerLevelFailController _failController
    GlobalNamespace::MultiplayerConnectedPlayerLevelFailController*& dyn__failController();
    // Get instance field reference: private readonly MultiplayerLayoutProvider _multiplayerLayoutProvider
    GlobalNamespace::MultiplayerLayoutProvider*& dyn__multiplayerLayoutProvider();
    // Get instance field reference: private readonly MultiplayerConnectedPlayerSpectatingSpot _playerSpectatingSpot
    GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*& dyn__playerSpectatingSpot();
    // private System.Void TransitionIntoFailedState()
    // Offset: 0x11CA59C
    void TransitionIntoFailedState();
    // private System.Void HandlePlayerDidFail()
    // Offset: 0x11CAB84
    void HandlePlayerDidFail();
    // private System.Void HandleIsObservedChanged(System.Boolean isObserved)
    // Offset: 0x11CAB88
    void HandleIsObservedChanged(bool isObserved);
    // public System.Void .ctor()
    // Offset: 0x11CAC14
    // Implemented from: MultiplayerGameplayAnimator
    // Base method: System.Void MultiplayerGameplayAnimator::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerGameplayAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerGameplayAnimator*, creationType>()));
    }
    // protected override System.Void Start()
    // Offset: 0x11C9F80
    // Implemented from: MultiplayerGameplayAnimator
    // Base method: System.Void MultiplayerGameplayAnimator::Start()
    void Start();
    // protected override System.Void OnDestroy()
    // Offset: 0x11CA174
    // Implemented from: MultiplayerGameplayAnimator
    // Base method: System.Void MultiplayerGameplayAnimator::OnDestroy()
    void OnDestroy();
    // protected override System.Void AnimateNewLeaderSelected(System.Boolean isLeading)
    // Offset: 0x11CA708
    // Implemented from: MultiplayerGameplayAnimator
    // Base method: System.Void MultiplayerGameplayAnimator::AnimateNewLeaderSelected(System.Boolean isLeading)
    void AnimateNewLeaderSelected(bool isLeading);
    // protected override System.Void HandleStateChanged(MultiplayerController/State state)
    // Offset: 0x11CA860
    // Implemented from: MultiplayerGameplayAnimator
    // Base method: System.Void MultiplayerGameplayAnimator::HandleStateChanged(MultiplayerController/State state)
    void HandleStateChanged(GlobalNamespace::MultiplayerController::State state);
  }; // MultiplayerConnectedPlayerGameplayAnimator
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerConnectedPlayerGameplayAnimator), 144 + sizeof(GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*)> __GlobalNamespace_MultiplayerConnectedPlayerGameplayAnimatorSizeCheck;
  static_assert(sizeof(MultiplayerConnectedPlayerGameplayAnimator) == 0x98);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator*, "", "MultiplayerConnectedPlayerGameplayAnimator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::TransitionIntoFailedState
// Il2CppName: TransitionIntoFailedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::TransitionIntoFailedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator*), "TransitionIntoFailedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::HandlePlayerDidFail
// Il2CppName: HandlePlayerDidFail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::HandlePlayerDidFail)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator*), "HandlePlayerDidFail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::HandleIsObservedChanged
// Il2CppName: HandleIsObservedChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::*)(bool)>(&GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::HandleIsObservedChanged)> {
  static const MethodInfo* get() {
    static auto* isObserved = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator*), "HandleIsObservedChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isObserved});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::AnimateNewLeaderSelected
// Il2CppName: AnimateNewLeaderSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::*)(bool)>(&GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::AnimateNewLeaderSelected)> {
  static const MethodInfo* get() {
    static auto* isLeading = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator*), "AnimateNewLeaderSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isLeading});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::HandleStateChanged
// Il2CppName: HandleStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::*)(GlobalNamespace::MultiplayerController::State)>(&GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::HandleStateChanged)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("", "MultiplayerController/State")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator*), "HandleStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
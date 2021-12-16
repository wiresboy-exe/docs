// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: IAudioClipAsyncLoader
#include "GlobalNamespace/IAudioClipAsyncLoader.hpp"
// Including type: ISpriteAsyncLoader
#include "GlobalNamespace/ISpriteAsyncLoader.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IMediaAsyncLoader
  // [TokenAttribute] Offset: FFFFFFFF
  class IMediaAsyncLoader/*, public GlobalNamespace::IAudioClipAsyncLoader, public GlobalNamespace::ISpriteAsyncLoader*/ {
    public:
    // Creating value type constructor for type: IMediaAsyncLoader
    IMediaAsyncLoader() noexcept {}
    // Creating interface conversion operator: operator GlobalNamespace::IAudioClipAsyncLoader
    operator GlobalNamespace::IAudioClipAsyncLoader() noexcept {
      return *reinterpret_cast<GlobalNamespace::IAudioClipAsyncLoader*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::ISpriteAsyncLoader
    operator GlobalNamespace::ISpriteAsyncLoader() noexcept {
      return *reinterpret_cast<GlobalNamespace::ISpriteAsyncLoader*>(this);
    }
  }; // IMediaAsyncLoader
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IMediaAsyncLoader*, "", "IMediaAsyncLoader");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
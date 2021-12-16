// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.DriverDirectMode_FrameTiming
  // [TokenAttribute] Offset: FFFFFFFF
  struct DriverDirectMode_FrameTiming/*, public System::ValueType*/ {
    public:
    // public System.UInt32 m_nSize
    // Size: 0x4
    // Offset: 0x0
    uint m_nSize;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 m_nNumFramePresents
    // Size: 0x4
    // Offset: 0x4
    uint m_nNumFramePresents;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 m_nNumMisPresented
    // Size: 0x4
    // Offset: 0x8
    uint m_nNumMisPresented;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 m_nNumDroppedFrames
    // Size: 0x4
    // Offset: 0xC
    uint m_nNumDroppedFrames;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 m_nReprojectionFlags
    // Size: 0x4
    // Offset: 0x10
    uint m_nReprojectionFlags;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: DriverDirectMode_FrameTiming
    constexpr DriverDirectMode_FrameTiming(uint m_nSize_ = {}, uint m_nNumFramePresents_ = {}, uint m_nNumMisPresented_ = {}, uint m_nNumDroppedFrames_ = {}, uint m_nReprojectionFlags_ = {}) noexcept : m_nSize{m_nSize_}, m_nNumFramePresents{m_nNumFramePresents_}, m_nNumMisPresented{m_nNumMisPresented_}, m_nNumDroppedFrames{m_nNumDroppedFrames_}, m_nReprojectionFlags{m_nReprojectionFlags_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt32 m_nSize
    uint& dyn_m_nSize();
    // Get instance field reference: public System.UInt32 m_nNumFramePresents
    uint& dyn_m_nNumFramePresents();
    // Get instance field reference: public System.UInt32 m_nNumMisPresented
    uint& dyn_m_nNumMisPresented();
    // Get instance field reference: public System.UInt32 m_nNumDroppedFrames
    uint& dyn_m_nNumDroppedFrames();
    // Get instance field reference: public System.UInt32 m_nReprojectionFlags
    uint& dyn_m_nReprojectionFlags();
  }; // Valve.VR.DriverDirectMode_FrameTiming
  #pragma pack(pop)
  static check_size<sizeof(DriverDirectMode_FrameTiming), 16 + sizeof(uint)> __Valve_VR_DriverDirectMode_FrameTimingSizeCheck;
  static_assert(sizeof(DriverDirectMode_FrameTiming) == 0x14);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::DriverDirectMode_FrameTiming, "Valve.VR", "DriverDirectMode_FrameTiming");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
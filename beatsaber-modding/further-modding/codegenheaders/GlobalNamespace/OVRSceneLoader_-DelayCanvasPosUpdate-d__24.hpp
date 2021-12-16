// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRSceneLoader
#include "GlobalNamespace/OVRSceneLoader.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: OVRSceneLoader/<DelayCanvasPosUpdate>d__24
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class OVRSceneLoader::$DelayCanvasPosUpdate$d__24 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public OVRSceneLoader <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::OVRSceneLoader* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRSceneLoader*) == 0x8);
    // Creating value type constructor for type: $DelayCanvasPosUpdate$d__24
    $DelayCanvasPosUpdate$d__24(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, GlobalNamespace::OVRSceneLoader* $$4__this_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public OVRSceneLoader <>4__this
    GlobalNamespace::OVRSceneLoader*& dyn_$$4__this();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x163E7BC
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x163E824
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x163E518
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRSceneLoader::$DelayCanvasPosUpdate$d__24* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRSceneLoader::$DelayCanvasPosUpdate$d__24::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRSceneLoader::$DelayCanvasPosUpdate$d__24*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x163E710
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x163E714
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x163E7C4
    void System_Collections_IEnumerator_Reset();
  }; // OVRSceneLoader/<DelayCanvasPosUpdate>d__24
  #pragma pack(pop)
  static check_size<sizeof(OVRSceneLoader::$DelayCanvasPosUpdate$d__24), 32 + sizeof(GlobalNamespace::OVRSceneLoader*)> __GlobalNamespace_OVRSceneLoader_$DelayCanvasPosUpdate$d__24SizeCheck;
  static_assert(sizeof(OVRSceneLoader::$DelayCanvasPosUpdate$d__24) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSceneLoader::$DelayCanvasPosUpdate$d__24*, "", "OVRSceneLoader/<DelayCanvasPosUpdate>d__24");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneLoader::$DelayCanvasPosUpdate$d__24::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::OVRSceneLoader::$DelayCanvasPosUpdate$d__24::*)()>(&GlobalNamespace::OVRSceneLoader::$DelayCanvasPosUpdate$d__24::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneLoader::$DelayCanvasPosUpdate$d__24*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneLoader::$DelayCanvasPosUpdate$d__24::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::OVRSceneLoader::$DelayCanvasPosUpdate$d__24::*)()>(&GlobalNamespace::OVRSceneLoader::$DelayCanvasPosUpdate$d__24::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneLoader::$DelayCanvasPosUpdate$d__24*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneLoader::$DelayCanvasPosUpdate$d__24::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneLoader::$DelayCanvasPosUpdate$d__24::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneLoader::$DelayCanvasPosUpdate$d__24::*)()>(&GlobalNamespace::OVRSceneLoader::$DelayCanvasPosUpdate$d__24::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneLoader::$DelayCanvasPosUpdate$d__24*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneLoader::$DelayCanvasPosUpdate$d__24::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSceneLoader::$DelayCanvasPosUpdate$d__24::*)()>(&GlobalNamespace::OVRSceneLoader::$DelayCanvasPosUpdate$d__24::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneLoader::$DelayCanvasPosUpdate$d__24*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneLoader::$DelayCanvasPosUpdate$d__24::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneLoader::$DelayCanvasPosUpdate$d__24::*)()>(&GlobalNamespace::OVRSceneLoader::$DelayCanvasPosUpdate$d__24::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneLoader::$DelayCanvasPosUpdate$d__24*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MockNoteData
  class MockNoteData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IMockPlayerScoreCalculator
  // [TokenAttribute] Offset: FFFFFFFF
  class IMockPlayerScoreCalculator {
    public:
    // Creating value type constructor for type: IMockPlayerScoreCalculator
    IMockPlayerScoreCalculator() noexcept {}
    // public System.Int32 GetScoreForNote(MockNoteData noteData)
    // Offset: 0xFFFFFFFF
    int GetScoreForNote(GlobalNamespace::MockNoteData* noteData);
  }; // IMockPlayerScoreCalculator
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IMockPlayerScoreCalculator*, "", "IMockPlayerScoreCalculator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IMockPlayerScoreCalculator::GetScoreForNote
// Il2CppName: GetScoreForNote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::IMockPlayerScoreCalculator::*)(GlobalNamespace::MockNoteData*)>(&GlobalNamespace::IMockPlayerScoreCalculator::GetScoreForNote)> {
  static const MethodInfo* get() {
    static auto* noteData = &::il2cpp_utils::GetClassFromName("", "MockNoteData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IMockPlayerScoreCalculator*), "GetScoreForNote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteData});
  }
};
// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Polyglot.ILocalize
#include "Polyglot/ILocalize.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextMesh
  class TextMesh;
  // Forward declaring type: TextAlignment
  struct TextAlignment;
}
// Forward declaring namespace: Polyglot
namespace Polyglot {
  // Forward declaring type: LanguageDirection
  struct LanguageDirection;
}
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Polyglot.LocalizedTextMesh
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: E1E780
  // [RequireComponent] Offset: E1E780
  class LocalizedTextMesh : public UnityEngine::MonoBehaviour/*, public Polyglot::ILocalize*/ {
    public:
    // [TooltipAttribute] Offset: 0xE1ECE4
    // private UnityEngine.TextMesh text
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::TextMesh* text;
    // Field size check
    static_assert(sizeof(UnityEngine::TextMesh*) == 0x8);
    // [TooltipAttribute] Offset: 0xE1ED30
    // [LocalizationKeyAttribute] Offset: 0xE1ED30
    // private System.String key
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* key;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: LocalizedTextMesh
    LocalizedTextMesh(UnityEngine::TextMesh* text_ = {}, ::Il2CppString* key_ = {}) noexcept : text{text_}, key{key_} {}
    // Creating interface conversion operator: operator Polyglot::ILocalize
    operator Polyglot::ILocalize() noexcept {
      return *reinterpret_cast<Polyglot::ILocalize*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.TextMesh text
    UnityEngine::TextMesh*& dyn_text();
    // Get instance field reference: private System.String key
    ::Il2CppString*& dyn_key();
    // public System.String get_Key()
    // Offset: 0x237DFE8
    ::Il2CppString* get_Key();
    // public System.Void Reset()
    // Offset: 0x237DFF0
    void Reset();
    // public System.Void Start()
    // Offset: 0x237E048
    void Start();
    // public System.Void OnLocalize()
    // Offset: 0x237E074
    void OnLocalize();
    // private System.Boolean IsOppositeDirection(UnityEngine.TextAlignment alignment, Polyglot.LanguageDirection direction)
    // Offset: 0x237E178
    bool IsOppositeDirection(UnityEngine::TextAlignment alignment, Polyglot::LanguageDirection direction);
    // private System.Boolean IsAlignmentRight(UnityEngine.TextAlignment alignment)
    // Offset: 0x237E1A4
    bool IsAlignmentRight(UnityEngine::TextAlignment alignment);
    // private System.Boolean IsAlignmentLeft(UnityEngine.TextAlignment alignment)
    // Offset: 0x237E1B0
    bool IsAlignmentLeft(UnityEngine::TextAlignment alignment);
    // public System.Void .ctor()
    // Offset: 0x237E1BC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalizedTextMesh* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Polyglot::LocalizedTextMesh::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalizedTextMesh*, creationType>()));
    }
  }; // Polyglot.LocalizedTextMesh
  #pragma pack(pop)
  static check_size<sizeof(LocalizedTextMesh), 32 + sizeof(::Il2CppString*)> __Polyglot_LocalizedTextMeshSizeCheck;
  static_assert(sizeof(LocalizedTextMesh) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Polyglot::LocalizedTextMesh*, "Polyglot", "LocalizedTextMesh");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Polyglot::LocalizedTextMesh::get_Key
// Il2CppName: get_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Polyglot::LocalizedTextMesh::*)()>(&Polyglot::LocalizedTextMesh::get_Key)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizedTextMesh*), "get_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizedTextMesh::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::LocalizedTextMesh::*)()>(&Polyglot::LocalizedTextMesh::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizedTextMesh*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizedTextMesh::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::LocalizedTextMesh::*)()>(&Polyglot::LocalizedTextMesh::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizedTextMesh*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizedTextMesh::OnLocalize
// Il2CppName: OnLocalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::LocalizedTextMesh::*)()>(&Polyglot::LocalizedTextMesh::OnLocalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizedTextMesh*), "OnLocalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizedTextMesh::IsOppositeDirection
// Il2CppName: IsOppositeDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Polyglot::LocalizedTextMesh::*)(UnityEngine::TextAlignment, Polyglot::LanguageDirection)>(&Polyglot::LocalizedTextMesh::IsOppositeDirection)> {
  static const MethodInfo* get() {
    static auto* alignment = &::il2cpp_utils::GetClassFromName("UnityEngine", "TextAlignment")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("Polyglot", "LanguageDirection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizedTextMesh*), "IsOppositeDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{alignment, direction});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizedTextMesh::IsAlignmentRight
// Il2CppName: IsAlignmentRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Polyglot::LocalizedTextMesh::*)(UnityEngine::TextAlignment)>(&Polyglot::LocalizedTextMesh::IsAlignmentRight)> {
  static const MethodInfo* get() {
    static auto* alignment = &::il2cpp_utils::GetClassFromName("UnityEngine", "TextAlignment")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizedTextMesh*), "IsAlignmentRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{alignment});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizedTextMesh::IsAlignmentLeft
// Il2CppName: IsAlignmentLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Polyglot::LocalizedTextMesh::*)(UnityEngine::TextAlignment)>(&Polyglot::LocalizedTextMesh::IsAlignmentLeft)> {
  static const MethodInfo* get() {
    static auto* alignment = &::il2cpp_utils::GetClassFromName("UnityEngine", "TextAlignment")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizedTextMesh*), "IsAlignmentLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{alignment});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizedTextMesh::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
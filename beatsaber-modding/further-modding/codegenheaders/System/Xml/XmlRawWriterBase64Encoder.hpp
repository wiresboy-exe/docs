// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Base64Encoder
#include "System/Xml/Base64Encoder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlRawWriter
  class XmlRawWriter;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlRawWriterBase64Encoder
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlRawWriterBase64Encoder : public System::Xml::Base64Encoder {
    public:
    // private System.Xml.XmlRawWriter rawWriter
    // Size: 0x8
    // Offset: 0x28
    System::Xml::XmlRawWriter* rawWriter;
    // Field size check
    static_assert(sizeof(System::Xml::XmlRawWriter*) == 0x8);
    // Creating value type constructor for type: XmlRawWriterBase64Encoder
    XmlRawWriterBase64Encoder(System::Xml::XmlRawWriter* rawWriter_ = {}) noexcept : rawWriter{rawWriter_} {}
    // Creating conversion operator: operator System::Xml::XmlRawWriter*
    constexpr operator System::Xml::XmlRawWriter*() const noexcept {
      return rawWriter;
    }
    // Get instance field reference: private System.Xml.XmlRawWriter rawWriter
    System::Xml::XmlRawWriter*& dyn_rawWriter();
    // System.Void .ctor(System.Xml.XmlRawWriter rawWriter)
    // Offset: 0x1964E98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlRawWriterBase64Encoder* New_ctor(System::Xml::XmlRawWriter* rawWriter) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlRawWriterBase64Encoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlRawWriterBase64Encoder*, creationType>(rawWriter)));
    }
    // override System.Void WriteChars(System.Char[] chars, System.Int32 index, System.Int32 count)
    // Offset: 0x19652C4
    // Implemented from: System.Xml.Base64Encoder
    // Base method: System.Void Base64Encoder::WriteChars(System.Char[] chars, System.Int32 index, System.Int32 count)
    void WriteChars(::Array<::Il2CppChar>* chars, int index, int count);
  }; // System.Xml.XmlRawWriterBase64Encoder
  #pragma pack(pop)
  static check_size<sizeof(XmlRawWriterBase64Encoder), 40 + sizeof(System::Xml::XmlRawWriter*)> __System_Xml_XmlRawWriterBase64EncoderSizeCheck;
  static_assert(sizeof(XmlRawWriterBase64Encoder) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlRawWriterBase64Encoder*, "System.Xml", "XmlRawWriterBase64Encoder");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlRawWriterBase64Encoder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlRawWriterBase64Encoder::WriteChars
// Il2CppName: WriteChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlRawWriterBase64Encoder::*)(::Array<::Il2CppChar>*, int, int)>(&System::Xml::XmlRawWriterBase64Encoder::WriteChars)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlRawWriterBase64Encoder*), "WriteChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, index, count});
  }
};
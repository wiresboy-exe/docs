// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.Http.Headers.Parser
#include "System/Net/Http/Headers/Parser.hpp"
// Completed includes
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.Parser/System.Net.Http.Headers.Token
  // [TokenAttribute] Offset: FFFFFFFF
  class Parser::Token : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Token
    Token() noexcept {}
    // static public System.Void Check(System.String s)
    // Offset: 0x15B0B78
    static void Check(::Il2CppString* s);
    // static public System.Boolean TryCheck(System.String s)
    // Offset: 0x15ACA48
    static bool TryCheck(::Il2CppString* s);
  }; // System.Net.Http.Headers.Parser/System.Net.Http.Headers.Token
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::Parser::Token*, "System.Net.Http.Headers", "Parser/Token");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::Parser::Token::Check
// Il2CppName: Check
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*)>(&System::Net::Http::Headers::Parser::Token::Check)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Parser::Token*), "Check", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::Parser::Token::TryCheck
// Il2CppName: TryCheck
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&System::Net::Http::Headers::Parser::Token::TryCheck)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Parser::Token*), "TryCheck", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
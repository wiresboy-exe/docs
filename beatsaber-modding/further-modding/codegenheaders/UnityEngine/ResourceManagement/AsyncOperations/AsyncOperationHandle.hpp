// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ResourceManagement::AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // Forward declaring type: IAsyncOperation
  class IAsyncOperation;
  // Forward declaring type: AsyncOperationStatus
  struct AsyncOperationStatus;
  // Forward declaring type: DownloadStatus
  struct DownloadStatus;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.ResourceManagement.AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
  // [TokenAttribute] Offset: FFFFFFFF
  struct AsyncOperationHandle/*, public System::ValueType, public System::Collections::IEnumerator*/ {
    public:
    // UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation m_InternalOp
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* m_InternalOp;
    // Field size check
    static_assert(sizeof(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*) == 0x8);
    // private System.Int32 m_Version
    // Size: 0x4
    // Offset: 0x8
    int m_Version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_Version and: m_LocationName
    char __padding1[0x4] = {};
    // private System.String m_LocationName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_LocationName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: AsyncOperationHandle
    constexpr AsyncOperationHandle(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* m_InternalOp_ = {}, int m_Version_ = {}, ::Il2CppString* m_LocationName_ = {}) noexcept : m_InternalOp{m_InternalOp_}, m_Version{m_Version_}, m_LocationName{m_LocationName_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::IEnumerator
    operator System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerator*>(this);
    }
    // Get instance field reference: UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation m_InternalOp
    UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*& dyn_m_InternalOp();
    // Get instance field reference: private System.Int32 m_Version
    int& dyn_m_Version();
    // Get instance field reference: private System.String m_LocationName
    ::Il2CppString*& dyn_m_LocationName();
    // System.String get_LocationName()
    // Offset: 0x19E9A6C
    ::Il2CppString* get_LocationName();
    // System.Void set_LocationName(System.String value)
    // Offset: 0x19E9A74
    void set_LocationName(::Il2CppString* value);
    // public System.String get_DebugName()
    // Offset: 0x19E9FF8
    ::Il2CppString* get_DebugName();
    // private UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation get_InternalOp()
    // Offset: 0x19E9D34
    UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* get_InternalOp();
    // public System.Boolean get_IsDone()
    // Offset: 0x19EA440
    bool get_IsDone();
    // public System.Exception get_OperationException()
    // Offset: 0x19EA518
    System::Exception* get_OperationException();
    // public System.Single get_PercentComplete()
    // Offset: 0x19EA5D4
    float get_PercentComplete();
    // System.Int32 get_ReferenceCount()
    // Offset: 0x19EA86C
    int get_ReferenceCount();
    // public System.Object get_Result()
    // Offset: 0x19EA9EC
    ::Il2CppObject* get_Result();
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus get_Status()
    // Offset: 0x19EAAA4
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus get_Status();
    // public System.Threading.Tasks.Task`1<System.Object> get_Task()
    // Offset: 0x19EAB60
    System::Threading::Tasks::Task_1<::Il2CppObject*>* get_Task();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x19EAC1C
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void add_Completed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> value)
    // Offset: 0x19E9E34
    void add_Completed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);
    // public System.Void remove_Completed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> value)
    // Offset: 0x19E9F00
    void remove_Completed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);
    // public System.Void add_Destroyed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> value)
    // Offset: 0x19EA1A0
    void add_Destroyed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);
    // public System.Void remove_Destroyed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> value)
    // Offset: 0x19EA26C
    void remove_Destroyed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);
    // System.Void .ctor(UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation op)
    // Offset: 0x19E9A7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    AsyncOperationHandle(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* op) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(op)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, op);
    }
    // System.Void .ctor(UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation op, System.Int32 version)
    // Offset: 0x19E9B58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    AsyncOperationHandle(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* op, int version) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(op), ::il2cpp_utils::ExtractType(version)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, op, version);
    }
    // System.Void .ctor(UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation op, System.String locationName)
    // Offset: 0x19E9B68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    AsyncOperationHandle(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* op, ::Il2CppString* locationName) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(op), ::il2cpp_utils::ExtractType(locationName)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, op, locationName);
    }
    // System.Void .ctor(UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation op, System.Int32 version, System.String locationName)
    // Offset: 0x19E9C48
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  AsyncOperationHandle(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* op, int version, ::Il2CppString* locationName)
    // UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle Acquire()
    // Offset: 0x19E9C58
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle Acquire();
    // public System.Boolean Equals(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle other)
    // Offset: 0x19E9FCC
    bool Equals(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle other);
    // public System.Void GetDependencies(System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> deps)
    // Offset: 0x19EA338
    void GetDependencies(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* deps);
    // public System.Boolean IsValid()
    // Offset: 0x19EA0D8
    bool IsValid();
    // public UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus GetDownloadStatus()
    // Offset: 0x19EA690
    UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus();
    // UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus InternalGetDownloadStatus(System.Collections.Generic.HashSet`1<System.Object> visited)
    // Offset: 0x19EA70C
    UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus InternalGetDownloadStatus(System::Collections::Generic::HashSet_1<::Il2CppObject*>* visited);
    // System.Void Release()
    // Offset: 0x19EA928
    void Release();
    // private System.Boolean System.Collections.IEnumerator.MoveNext()
    // Offset: 0x19EAC20
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x19EAC3C
    void System_Collections_IEnumerator_Reset();
    // public System.Object WaitForCompletion()
    // Offset: 0x19EAC40
    ::Il2CppObject* WaitForCompletion();
    // public override System.Int32 GetHashCode()
    // Offset: 0x19EA404
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
  #pragma pack(pop)
  static check_size<sizeof(AsyncOperationHandle), 16 + sizeof(::Il2CppString*)> __UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandleSizeCheck;
  static_assert(sizeof(AsyncOperationHandle) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, "UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_LocationName
// Il2CppName: get_LocationName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_LocationName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle), "get_LocationName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::set_LocationName
// Il2CppName: set_LocationName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)(::Il2CppString*)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::set_LocationName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle), "set_LocationName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_DebugName
// Il2CppName: get_DebugName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_DebugName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle), "get_DebugName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_InternalOp
// Il2CppName: get_InternalOp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_InternalOp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle), "get_InternalOp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_IsDone
// Il2CppName: get_IsDone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_IsDone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle), "get_IsDone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_OperationException
// Il2CppName: get_OperationException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception* (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_OperationException)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle), "get_OperationException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_PercentComplete
// Il2CppName: get_PercentComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_PercentComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle), "get_PercentComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_ReferenceCount
// Il2CppName: get_ReferenceCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_ReferenceCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle), "get_ReferenceCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_Result
// Il2CppName: get_Result
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_Result)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle), "get_Result", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_Status
// Il2CppName: get_Status
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_Status)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle), "get_Status", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_Task
// Il2CppName: get_Task
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<::Il2CppObject*>* (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_Task)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle), "get_Task", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::add_Completed
// Il2CppName: add_Completed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::add_Completed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle), "add_Completed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::remove_Completed
// Il2CppName: remove_Completed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::remove_Completed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle), "remove_Completed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::add_Destroyed
// Il2CppName: add_Destroyed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::add_Destroyed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle), "add_Destroyed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::remove_Destroyed
// Il2CppName: remove_Destroyed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::remove_Destroyed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle), "remove_Destroyed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::AsyncOperationHandle
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::AsyncOperationHandle
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::AsyncOperationHandle
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::AsyncOperationHandle
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::Acquire
// Il2CppName: Acquire
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::Acquire)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle), "Acquire", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::GetDependencies
// Il2CppName: GetDependencies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::GetDependencies)> {
  static const MethodInfo* get() {
    static auto* deps = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle), "GetDependencies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deps});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::GetDownloadStatus
// Il2CppName: GetDownloadStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::GetDownloadStatus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle), "GetDownloadStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::InternalGetDownloadStatus
// Il2CppName: InternalGetDownloadStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)(System::Collections::Generic::HashSet_1<::Il2CppObject*>*)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::InternalGetDownloadStatus)> {
  static const MethodInfo* get() {
    static auto* visited = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "HashSet`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle), "InternalGetDownloadStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{visited});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::System_Collections_IEnumerator_MoveNext
// Il2CppName: System.Collections.IEnumerator.MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::System_Collections_IEnumerator_MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle), "System.Collections.IEnumerator.MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::WaitForCompletion
// Il2CppName: WaitForCompletion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::WaitForCompletion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle), "WaitForCompletion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OnlineServices
namespace OnlineServices {
  // Forward declaring type: PlatformOnlineServicesAvailabilityModel
  class PlatformOnlineServicesAvailabilityModel;
  // Forward declaring type: LevelScoreResultsData
  struct LevelScoreResultsData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HTTPLeaderboardsModel
  class HTTPLeaderboardsModel;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: OnlineServices
namespace OnlineServices {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: OnlineServices.LevelScoreUploader
  // [TokenAttribute] Offset: FFFFFFFF
  class LevelScoreUploader : public ::Il2CppObject {
    public:
    // Nested type: OnlineServices::LevelScoreUploader::LevelScoreResultsDataUploadInfo
    class LevelScoreResultsDataUploadInfo;
    // Nested type: OnlineServices::LevelScoreUploader::$SendLevelScoreResultAsync$d__13
    struct $SendLevelScoreResultAsync$d__13;
    // private System.Action`1<System.String> scoreForLeaderboardDidUploadEvent
    // Size: 0x8
    // Offset: 0x10
    System::Action_1<::Il2CppString*>* scoreForLeaderboardDidUploadEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<::Il2CppString*>*) == 0x8);
    // private System.Threading.CancellationTokenSource _cancellationTokenSource
    // Size: 0x8
    // Offset: 0x18
    System::Threading::CancellationTokenSource* cancellationTokenSource;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationTokenSource*) == 0x8);
    // private HTTPLeaderboardsModel _leaderboardsModel
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::HTTPLeaderboardsModel* leaderboardsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HTTPLeaderboardsModel*) == 0x8);
    // private System.Collections.Generic.List`1<OnlineServices.LevelScoreUploader/OnlineServices.LevelScoreResultsDataUploadInfo> _unsuccessfullySentLevelScoreResultsDataUploadInfos
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<OnlineServices::LevelScoreUploader::LevelScoreResultsDataUploadInfo*>* unsuccessfullySentLevelScoreResultsDataUploadInfos;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<OnlineServices::LevelScoreUploader::LevelScoreResultsDataUploadInfo*>*) == 0x8);
    // private System.Collections.Generic.List`1<OnlineServices.LevelScoreUploader/OnlineServices.LevelScoreResultsDataUploadInfo> _levelScoreResultsDataUploadInfos
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::List_1<OnlineServices::LevelScoreUploader::LevelScoreResultsDataUploadInfo*>* levelScoreResultsDataUploadInfos;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<OnlineServices::LevelScoreUploader::LevelScoreResultsDataUploadInfo*>*) == 0x8);
    // private OnlineServices.PlatformOnlineServicesAvailabilityModel _platformOnlineServicesAvailabilityModel
    // Size: 0x8
    // Offset: 0x38
    OnlineServices::PlatformOnlineServicesAvailabilityModel* platformOnlineServicesAvailabilityModel;
    // Field size check
    static_assert(sizeof(OnlineServices::PlatformOnlineServicesAvailabilityModel*) == 0x8);
    // Creating value type constructor for type: LevelScoreUploader
    LevelScoreUploader(System::Action_1<::Il2CppString*>* scoreForLeaderboardDidUploadEvent_ = {}, System::Threading::CancellationTokenSource* cancellationTokenSource_ = {}, GlobalNamespace::HTTPLeaderboardsModel* leaderboardsModel_ = {}, System::Collections::Generic::List_1<OnlineServices::LevelScoreUploader::LevelScoreResultsDataUploadInfo*>* unsuccessfullySentLevelScoreResultsDataUploadInfos_ = {}, System::Collections::Generic::List_1<OnlineServices::LevelScoreUploader::LevelScoreResultsDataUploadInfo*>* levelScoreResultsDataUploadInfos_ = {}, OnlineServices::PlatformOnlineServicesAvailabilityModel* platformOnlineServicesAvailabilityModel_ = {}) noexcept : scoreForLeaderboardDidUploadEvent{scoreForLeaderboardDidUploadEvent_}, cancellationTokenSource{cancellationTokenSource_}, leaderboardsModel{leaderboardsModel_}, unsuccessfullySentLevelScoreResultsDataUploadInfos{unsuccessfullySentLevelScoreResultsDataUploadInfos_}, levelScoreResultsDataUploadInfos{levelScoreResultsDataUploadInfos_}, platformOnlineServicesAvailabilityModel{platformOnlineServicesAvailabilityModel_} {}
    // static field const value: static private System.Int32 kMaxUploadAttempts
    static constexpr const int kMaxUploadAttempts = 3;
    // Get static field: static private System.Int32 kMaxUploadAttempts
    static int _get_kMaxUploadAttempts();
    // Set static field: static private System.Int32 kMaxUploadAttempts
    static void _set_kMaxUploadAttempts(int value);
    // Get instance field reference: private System.Action`1<System.String> scoreForLeaderboardDidUploadEvent
    System::Action_1<::Il2CppString*>*& dyn_scoreForLeaderboardDidUploadEvent();
    // Get instance field reference: private System.Threading.CancellationTokenSource _cancellationTokenSource
    System::Threading::CancellationTokenSource*& dyn__cancellationTokenSource();
    // Get instance field reference: private HTTPLeaderboardsModel _leaderboardsModel
    GlobalNamespace::HTTPLeaderboardsModel*& dyn__leaderboardsModel();
    // Get instance field reference: private System.Collections.Generic.List`1<OnlineServices.LevelScoreUploader/OnlineServices.LevelScoreResultsDataUploadInfo> _unsuccessfullySentLevelScoreResultsDataUploadInfos
    System::Collections::Generic::List_1<OnlineServices::LevelScoreUploader::LevelScoreResultsDataUploadInfo*>*& dyn__unsuccessfullySentLevelScoreResultsDataUploadInfos();
    // Get instance field reference: private System.Collections.Generic.List`1<OnlineServices.LevelScoreUploader/OnlineServices.LevelScoreResultsDataUploadInfo> _levelScoreResultsDataUploadInfos
    System::Collections::Generic::List_1<OnlineServices::LevelScoreUploader::LevelScoreResultsDataUploadInfo*>*& dyn__levelScoreResultsDataUploadInfos();
    // Get instance field reference: private OnlineServices.PlatformOnlineServicesAvailabilityModel _platformOnlineServicesAvailabilityModel
    OnlineServices::PlatformOnlineServicesAvailabilityModel*& dyn__platformOnlineServicesAvailabilityModel();
    // public System.Void add_scoreForLeaderboardDidUploadEvent(System.Action`1<System.String> value)
    // Offset: 0x1031398
    void add_scoreForLeaderboardDidUploadEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_scoreForLeaderboardDidUploadEvent(System.Action`1<System.String> value)
    // Offset: 0x103143C
    void remove_scoreForLeaderboardDidUploadEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void .ctor(HTTPLeaderboardsModel leaderboardsModel, OnlineServices.PlatformOnlineServicesAvailabilityModel platformOnlineServicesAvailabilityModel)
    // Offset: 0x10314E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelScoreUploader* New_ctor(GlobalNamespace::HTTPLeaderboardsModel* leaderboardsModel, OnlineServices::PlatformOnlineServicesAvailabilityModel* platformOnlineServicesAvailabilityModel) {
      static auto ___internal__logger = ::Logger::get().WithContext("OnlineServices::LevelScoreUploader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelScoreUploader*, creationType>(leaderboardsModel, platformOnlineServicesAvailabilityModel)));
    }
    // public System.Void SendLevelScoreResult(OnlineServices.LevelScoreResultsData levelScoreResultsData)
    // Offset: 0x103158C
    void SendLevelScoreResult(OnlineServices::LevelScoreResultsData levelScoreResultsData);
    // public System.Void TrySendPreviouslyUnsuccessfullySentResults()
    // Offset: 0x1031754
    void TrySendPreviouslyUnsuccessfullySentResults();
    // private System.Void SendLevelScoreResultAsync()
    // Offset: 0x10316A0
    void SendLevelScoreResultAsync();
    // private System.Void AddUnsuccessfullySentResults()
    // Offset: 0x1031778
    void AddUnsuccessfullySentResults();
    // protected System.Void OnDestroy()
    // Offset: 0x10317EC
    void OnDestroy();
  }; // OnlineServices.LevelScoreUploader
  #pragma pack(pop)
  static check_size<sizeof(LevelScoreUploader), 56 + sizeof(OnlineServices::PlatformOnlineServicesAvailabilityModel*)> __OnlineServices_LevelScoreUploaderSizeCheck;
  static_assert(sizeof(LevelScoreUploader) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::LevelScoreUploader*, "OnlineServices", "LevelScoreUploader");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OnlineServices::LevelScoreUploader::add_scoreForLeaderboardDidUploadEvent
// Il2CppName: add_scoreForLeaderboardDidUploadEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::LevelScoreUploader::*)(System::Action_1<::Il2CppString*>*)>(&OnlineServices::LevelScoreUploader::add_scoreForLeaderboardDidUploadEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::LevelScoreUploader*), "add_scoreForLeaderboardDidUploadEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OnlineServices::LevelScoreUploader::remove_scoreForLeaderboardDidUploadEvent
// Il2CppName: remove_scoreForLeaderboardDidUploadEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::LevelScoreUploader::*)(System::Action_1<::Il2CppString*>*)>(&OnlineServices::LevelScoreUploader::remove_scoreForLeaderboardDidUploadEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::LevelScoreUploader*), "remove_scoreForLeaderboardDidUploadEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OnlineServices::LevelScoreUploader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OnlineServices::LevelScoreUploader::SendLevelScoreResult
// Il2CppName: SendLevelScoreResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::LevelScoreUploader::*)(OnlineServices::LevelScoreResultsData)>(&OnlineServices::LevelScoreUploader::SendLevelScoreResult)> {
  static const MethodInfo* get() {
    static auto* levelScoreResultsData = &::il2cpp_utils::GetClassFromName("OnlineServices", "LevelScoreResultsData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::LevelScoreUploader*), "SendLevelScoreResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelScoreResultsData});
  }
};
// Writing MetadataGetter for method: OnlineServices::LevelScoreUploader::TrySendPreviouslyUnsuccessfullySentResults
// Il2CppName: TrySendPreviouslyUnsuccessfullySentResults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::LevelScoreUploader::*)()>(&OnlineServices::LevelScoreUploader::TrySendPreviouslyUnsuccessfullySentResults)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::LevelScoreUploader*), "TrySendPreviouslyUnsuccessfullySentResults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OnlineServices::LevelScoreUploader::SendLevelScoreResultAsync
// Il2CppName: SendLevelScoreResultAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::LevelScoreUploader::*)()>(&OnlineServices::LevelScoreUploader::SendLevelScoreResultAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::LevelScoreUploader*), "SendLevelScoreResultAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OnlineServices::LevelScoreUploader::AddUnsuccessfullySentResults
// Il2CppName: AddUnsuccessfullySentResults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::LevelScoreUploader::*)()>(&OnlineServices::LevelScoreUploader::AddUnsuccessfullySentResults)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::LevelScoreUploader*), "AddUnsuccessfullySentResults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OnlineServices::LevelScoreUploader::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::LevelScoreUploader::*)()>(&OnlineServices::LevelScoreUploader::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::LevelScoreUploader*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
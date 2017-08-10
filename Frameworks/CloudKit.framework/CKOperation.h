/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKOperation : NSOperation {
    CKOperationMMCSRequestOptions * _MMCSRequestOptions;
    NSDictionary * _additionalRequestHTTPHeaders;
    bool  _allowsBackgroundNetworking;
    NSString * _authPromptReason;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSError * _cancelError;
    NSObject<OS_voucher> * _clientVoucher;
    bool  _clouddConnectionInterrupted;
    CKOperationConfiguration * _configuration;
    id  _context;
    NSString * _deviceIdentifier;
    NSError * _error;
    CKOperationGroup * _group;
    NSObject<OS_os_transaction> * _isExecuting;
    bool  _isFinished;
    bool  _isOutstandingOperation;
    id /* block */  _longLivedOperationWasPersistedBlock;
    CKOperationMetrics * _metrics;
    NSString * _operationID;
    NSObject<OS_os_activity> * _osActivity;
    NSString * _parentSectionID;
    CKPlaceholderOperation * _placeholderOperation;
    bool  _preferAnonymousRequests;
    id /* block */  _requestCompletedBlock;
    CKOperationConfiguration * _resolvedConfiguration;
    NSMutableArray * _savedRequestUUIDs;
    NSMutableDictionary * _savedResponseHTTPHeadersByRequestUUID;
    NSMutableDictionary * _savedW3CNavigationTimingByRequestUUID;
    NSString * _sectionID;
    NSString * _sourceApplicationBundleIdentifier;
    NSString * _sourceApplicationSecondaryIdentifier;
    CKTimeLogger * _timeLogger;
    NSObject<OS_dispatch_source> * _timeoutSource;
    long long  _usesBackgroundSessionOverride;
}

@property (nonatomic, retain) CKOperationMMCSRequestOptions *MMCSRequestOptions;
@property (nonatomic, retain) NSDictionary *additionalRequestHTTPHeaders;
@property (nonatomic) bool allowsBackgroundNetworking;
@property (nonatomic, retain) NSString *authPromptReason;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) NSError *cancelError;
@property (nonatomic, retain) id clientVoucher;
@property (nonatomic) bool clouddConnectionInterrupted;
@property (nonatomic, copy) CKOperationConfiguration *configuration;
@property (nonatomic, readonly) id context;
@property (nonatomic, retain) NSString *deviceIdentifier;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) CKOperationGroup *group;
@property (nonatomic) bool isExecuting;
@property (nonatomic) bool isFinished;
@property (nonatomic) bool isOutstandingOperation;
@property (nonatomic, copy) id /* block */ longLivedOperationWasPersistedBlock;
@property (nonatomic, retain) CKOperationMetrics *metrics;
@property (nonatomic, copy) NSString *operationID;
@property (nonatomic, readonly) CKOperationInfo *operationInfo;
@property (nonatomic, retain) NSObject<OS_os_activity> *osActivity;
@property (nonatomic, readonly) NSString *parentSectionID;
@property (retain) CKPlaceholderOperation *placeholderOperation;
@property (nonatomic) bool preferAnonymousRequests;
@property (nonatomic, copy) id /* block */ requestCompletedBlock;
@property (nonatomic, readonly) NSArray *requestUUIDs;
@property (nonatomic, readonly) CKOperationConfiguration *resolvedConfiguration;
@property (nonatomic, readonly) NSDictionary *responseHTTPHeadersByRequestUUID;
@property (nonatomic, retain) NSMutableArray *savedRequestUUIDs;
@property (nonatomic, retain) NSMutableDictionary *savedResponseHTTPHeadersByRequestUUID;
@property (nonatomic, retain) NSMutableDictionary *savedW3CNavigationTimingByRequestUUID;
@property (nonatomic, retain) NSString *sectionID;
@property (nonatomic, retain) NSString *sourceApplicationBundleIdentifier;
@property (nonatomic, retain) NSString *sourceApplicationSecondaryIdentifier;
@property (nonatomic, retain) CKTimeLogger *timeLogger;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timeoutSource;
@property (nonatomic) bool usesBackgroundSession;
@property (nonatomic) long long usesBackgroundSessionOverride;
@property (nonatomic, readonly) NSDictionary *w3cNavigationTimingByRequestUUID;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (bool)CKOperationShouldRun:(id*)arg1;
- (id)MMCSRequestOptions;
- (id)_findBestThrottleError:(id)arg1;
- (void)_finishInternalOnCallbackQueueWithError:(id)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCheckpointCallback:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)_handleRemoteProxyFailureWithError:(id)arg1;
- (void)_handleStatisticsCallback:(id)arg1;
- (void)_installTimeoutSource;
- (void)_setIsExecuting:(bool)arg1;
- (void)_setIsFinished:(bool)arg1;
- (void)_start;
- (void)_uninstallTimeoutSource;
- (bool)_wantsFlowControl;
- (id)activityCreate;
- (id)additionalRequestHTTPHeaders;
- (bool)allowsBackgroundNetworking;
- (bool)allowsCellularAccess;
- (id)authPromptReason;
- (id)callbackQueue;
- (void)cancel;
- (id)cancelError;
- (void)cancelWithUnderlyingError:(id)arg1;
- (id)clientVoucher;
- (bool)clouddConnectionInterrupted;
- (id)configuration;
- (id)container;
- (id)context;
- (id)daemon;
- (void)dealloc;
- (id)description;
- (id)deviceIdentifier;
- (id)error;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)finishWithError:(id)arg1;
- (id)group;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (bool)isLongLived;
- (bool)isOutstandingOperation;
- (id /* block */)longLivedOperationWasPersistedBlock;
- (void)main;
- (id)metrics;
- (Class)operationClass;
- (id)operationID;
- (id)operationInfo;
- (Class)operationInfoClass;
- (id)osActivity;
- (id)parentSectionID;
- (void)performCKOperation;
- (id)placeholderOperation;
- (bool)preferAnonymousRequests;
- (void)processOperationResult:(id)arg1;
- (long long)qualityOfService;
- (id /* block */)requestCompletedBlock;
- (id)requestUUIDs;
- (id)resolvedConfiguration;
- (id)responseHTTPHeadersByRequestUUID;
- (id)savedRequestUUIDs;
- (id)savedResponseHTTPHeadersByRequestUUID;
- (id)savedW3CNavigationTimingByRequestUUID;
- (id)sectionID;
- (void)setAdditionalRequestHTTPHeaders:(id)arg1;
- (void)setAllowsBackgroundNetworking:(bool)arg1;
- (void)setAllowsCellularAccess:(bool)arg1;
- (void)setAuthPromptReason:(id)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setCancelError:(id)arg1;
- (void)setClientVoucher:(id)arg1;
- (void)setClouddConnectionInterrupted:(bool)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setError:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setIsExecuting:(bool)arg1;
- (void)setIsFinished:(bool)arg1;
- (void)setIsOutstandingOperation:(bool)arg1;
- (void)setLongLived:(bool)arg1;
- (void)setLongLivedOperationWasPersistedBlock:(id /* block */)arg1;
- (void)setMMCSRequestOptions:(id)arg1;
- (void)setMetrics:(id)arg1;
- (void)setOperationID:(id)arg1;
- (void)setOsActivity:(id)arg1;
- (void)setPlaceholderOperation:(id)arg1;
- (void)setPreferAnonymousRequests:(bool)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setRequestCompletedBlock:(id /* block */)arg1;
- (void)setSavedRequestUUIDs:(id)arg1;
- (void)setSavedResponseHTTPHeadersByRequestUUID:(id)arg1;
- (void)setSavedW3CNavigationTimingByRequestUUID:(id)arg1;
- (void)setSectionID:(id)arg1;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setSourceApplicationSecondaryIdentifier:(id)arg1;
- (void)setTimeLogger:(id)arg1;
- (void)setTimeoutIntervalForRequest:(double)arg1;
- (void)setTimeoutIntervalForResource:(double)arg1;
- (void)setTimeoutSource:(id)arg1;
- (void)setUsesBackgroundSession:(bool)arg1;
- (void)setUsesBackgroundSessionOverride:(long long)arg1;
- (id)sourceApplicationBundleIdentifier;
- (id)sourceApplicationSecondaryIdentifier;
- (void)start;
- (id)timeLogger;
- (double)timeoutIntervalForRequest;
- (double)timeoutIntervalForResource;
- (id)timeoutSource;
- (bool)usesBackgroundSession;
- (long long)usesBackgroundSessionOverride;
- (id)w3cNavigationTimingByRequestUUID;

@end

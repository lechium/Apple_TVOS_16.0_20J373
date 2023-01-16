//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADAccount, AFAWDSiriRequestRecord, AFAggregator, AFInstanceContext, NSError, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, SABaseCommand, SASSpeechFailure, SASSpeechRecognized;
@protocol ADSessionManagerDelegate, ADSessionManagerIntercepting, OS_dispatch_queue, OS_dispatch_source;

@interface ADSessionManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    AFInstanceContext *_instanceContext;	// 16 = 0x10
    ADAccount *_account;	// 24 = 0x18
    NSString *_sharedUserIdentifier;	// 32 = 0x20
    NSString *_loggingSharedUserIdentifier;	// 40 = 0x28
    long long _sharedUserIdentifierState;	// 48 = 0x30
    long long _state;	// 56 = 0x38
    _Bool _isRegisteredForSessionDestroyingNotifications;	// 64 = 0x40
    NSString *_connectionMode;	// 72 = 0x48
    NSString *_languageCode;	// 80 = 0x50
    NSMutableArray *_sessions;	// 88 = 0x58
    id <ADSessionManagerDelegate> _delegate;	// 96 = 0x60
    _Bool _callInProcess;	// 104 = 0x68
    _Bool _hasClient;	// 105 = 0x69
    unsigned int _ioConnect;	// 108 = 0x6c
    struct IONotificationPort *_ioNotificationPortRef;	// 112 = 0x70
    unsigned int _ioNotifier;	// 120 = 0x78
    AFAggregator *_aggregator;	// 128 = 0x80
    NSString *_requestId;	// 136 = 0x88
    NSMutableDictionary *_proxiedIdMap;	// 144 = 0x90
    NSMutableDictionary *_reverseProxiedIdMap;	// 152 = 0x98
    NSMutableDictionary *_sessionOriginatedCommandTable;	// 160 = 0xa0
    NSString *_winningSessionId;	// 168 = 0xa8
    NSObject<OS_dispatch_source> *_resultObjectsEvaluationTimer;	// 176 = 0xb0
    _Bool _isQueuingResultsForDelayedEvaluation;	// 184 = 0xb8
    _Bool _timerFiredOnce;	// 185 = 0xb9
    _Bool _continueWithPreviousWinner;	// 186 = 0xba
    NSError *_lastSessionError;	// 192 = 0xc0
    int _preferredSessionType;	// 200 = 0xc8
    int _preferredRemoteSessionType;	// 204 = 0xcc
    SASSpeechRecognized *_savedSasSpeechRecognized;	// 208 = 0xd0
    _Bool _savedSasSpeechRecognizedSubmitted;	// 216 = 0xd8
    SASSpeechFailure *_savedSasSpeechFailure;	// 224 = 0xe0
    unsigned int _serverDrivenResultsHoldTime;	// 232 = 0xe8
    _Bool _serverSpeechRecognitionArrived;	// 236 = 0xec
    _Bool _hasActiveRequest;	// 237 = 0xed
    _Bool _needsResetOnRequestBoundary;	// 238 = 0xee
    NSMutableSet *_assertions;	// 240 = 0xf0
    AFAWDSiriRequestRecord *_awdRequestRecord;	// 248 = 0xf8
    id <ADSessionManagerIntercepting> _interceptor;	// 256 = 0x100
    CDUnknownBlockType _sessionResetOnRequestBoundaryCompletion;	// 264 = 0x108
    SABaseCommand *_currentRequest;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x00200000000cdab3
@property(nonatomic) __weak id <ADSessionManagerIntercepting> interceptor; // @synthesize interceptor=_interceptor;
@property(nonatomic) __weak id <ADSessionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)speechError:(id)arg1;	// IMP=0x00100000000cd5d9
- (void)_propagateCachedSpeechErrorToLocalSessions;	// IMP=0x00100000000cd43a
- (void)_mapAndSendSpeechFailure:(id)arg1 toLocalSession:(id)arg2;	// IMP=0x00100000000cd351
- (void)handleCommandInLocalSession:(id)arg1;	// IMP=0x00100000000ccf93
- (void)sendCommandToLocalSession:(id)arg1;	// IMP=0x00100000000ccea5
- (void)_logContextForWinningSession:(id)arg1 forReason:(id)arg2 forRemoteSessionScore:(long long)arg3 forLocalSessionScore:(long long)arg4;	// IMP=0x00100000000ccc96
- (void)_resetWinningState;	// IMP=0x00100000000ccb80
- (_Bool)_reverseMapSessionRequestIdToADRequestId:(id)arg1 forSession:(id)arg2;	// IMP=0x00100000000cc9a4
- (id)_mapADRequestIdToSessionRequestId:(id)arg1 forSession:(id)arg2;	// IMP=0x00100000000cc93e
- (id)_keyForRequestId:(id)arg1 forSession:(id)arg2;	// IMP=0x00100000000cc893
- (_Bool)_canStartLocalSession;	// IMP=0x00100000000cc88b
- (_Bool)_hasAtleastOneActiveSessionBesides:(id)arg1;	// IMP=0x00100000000cc5bf
- (void)refreshValidationData;	// IMP=0x00100000000cc476
- (void)setHasClient:(_Bool)arg1;	// IMP=0x00100000000cc46d
- (_Bool)hasClient;	// IMP=0x00100000000cc464
- (void)barrier:(CDUnknownBlockType)arg1;	// IMP=0x00100000000cc0f1
- (void)setAWDRequestRecordMetrics:(id)arg1;	// IMP=0x00100000000cbf9c
- (void)_logMetricsForSessionFailure:(id)arg1 withError:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000cb5d9
- (void)_logCommandToMetrics:(id)arg1 forSession:(id)arg2 outbound:(_Bool)arg3;	// IMP=0x00100000000cb2ba
- (void)getConnectionMetrics:(CDUnknownBlockType)arg1;	// IMP=0x00100000000caef0
- (void)updateConnectionSetConnectionType:(unsigned int)arg1;	// IMP=0x00100000000caea4
- (void)updateConnectionDidFailAggdMetrics;	// IMP=0x00100000000cae67
- (void)updateConnectionDidDropAggdMetrics;	// IMP=0x00100000000cae2a
- (id)aggregator;	// IMP=0x00100000000cade3
- (id)sessionRequestIdForRefId:(id)arg1;	// IMP=0x00100000000cac13
- (void)setRequestId:(id)arg1;	// IMP=0x00100000000ca30b
- (void)_resetSessionOnRequestBoundaryIfNeeded;	// IMP=0x00100000000c9f37
- (void)relinquishAssertion:(id)arg1;	// IMP=0x00100000000c9e61
- (id)acquireAssertionForReason:(id)arg1;	// IMP=0x00100000000c9d61
- (void)_clearSessions;	// IMP=0x00100000000c9d44
- (void)_addSession:(id)arg1;	// IMP=0x00100000000c9cea
- (_Bool)hasSessionRequiringServerConnection;	// IMP=0x00100000000c9a72
- (void)setHasActiveRequest:(_Bool)arg1;	// IMP=0x00100000000c97de
- (void)sendRawCommand:(id)arg1 opportunistically:(_Bool)arg2 logEvent:(_Bool)arg3;	// IMP=0x00100000000c97b9
- (void)sendCommand:(id)arg1 opportunistically:(_Bool)arg2 logEvent:(_Bool)arg3;	// IMP=0x00100000000c9791
- (void)setCurrentRequest:(id)arg1;	// IMP=0x00100000000c96c4
- (void)_sendCommand:(id)arg1 opportunistically:(_Bool)arg2 logEvent:(_Bool)arg3 doSendPreProcessing:(_Bool)arg4 doSendPostProcessing:(_Bool)arg5;	// IMP=0x00100000000c88d7
- (void)delegateDidHandleCommand:(id)arg1;	// IMP=0x00100000000c8630
- (void)handleCommand:(id)arg1;	// IMP=0x00100000000c8473
- (void)_convertEmbeddedRequestIds:(id)arg1 originalCommand:(id)arg2 session:(id)arg3;	// IMP=0x00100000000c8393
- (_Bool)_allowWhitelistedCommands:(id)arg1;	// IMP=0x00100000000c82e7
- (_Bool)_filterUnsupportedCommands:(id)arg1 inGroup:(id)arg2 onSession:(id)arg3;	// IMP=0x00100000000c81bd
- (void)assistantSessionConnectionDidClose:(id)arg1;	// IMP=0x00100000000c8186
- (void)assistantSessionRetryingRequest:(id)arg1;	// IMP=0x00100000000c80d2
- (void)assistantSessionDictationHIPAAMDMStatusDidChange;	// IMP=0x00100000000c80c0
- (void)assistantSession:(id)arg1 beginSessionRetryPreferringWWAN:(_Bool)arg2;	// IMP=0x00100000000c7fab
- (void)assistantSession:(id)arg1 willRetryOnError:(id)arg2;	// IMP=0x00100000000c7eda
- (void)assistantSession:(id)arg1 didLoadAssistantSyncRequested:(_Bool)arg2;	// IMP=0x00100000000c7e95
- (void)assistantSessionDidDestroyAssistant:(id)arg1;	// IMP=0x00100000000c7e5f
- (void)assistantSessionDidCreateAssistant:(id)arg1;	// IMP=0x00100000000c7dab
- (void)assistantSession:(id)arg1 didChangeRequestIdFrom:(id)arg2 toId:(id)arg3;	// IMP=0x00100000000c7b1f
- (id)assistantSessionCommandsToRestoreStateOnNewConnection:(id)arg1;	// IMP=0x00100000000c7ad6
- (_Bool)assistantSessionShouldAttemptRetry:(id)arg1;	// IMP=0x00100000000c7a1c
- (void)assistantSessionConnectionDidReset:(id)arg1;	// IMP=0x00100000000c7898
- (_Bool)assistantSessionShouldRestartConnectionOnWiFi:(id)arg1;	// IMP=0x00100000000c7881
- (_Bool)assistantSessionShouldLogVisibleRequestFailure:(id)arg1 forError:(id)arg2;	// IMP=0x00100000000c7784
- (void)assistantSession:(id)arg1 receivedError:(id)arg2 isRetryableError:(_Bool)arg3;	// IMP=0x00100000000c73c2
- (void)assistantSession:(id)arg1 cannotHandleRequest:(id)arg2 error:(id)arg3;	// IMP=0x00100000000c701d
- (void)assistantSession:(id)arg1 receivedCommand:(id)arg2;	// IMP=0x00100000000c6a3d
- (void)assistantSession:(id)arg1 didOpenConnectionWithPolicyId:(id)arg2 routeId:(id)arg3 connectionDelay:(double)arg4;	// IMP=0x00100000000c674a
- (void)assistantSessionWillStartConnection:(id)arg1;	// IMP=0x00100000000c6696
- (_Bool)assistantSessionShouldPrewarmConnetion:(id)arg1;	// IMP=0x00100000000c665b
- (void)sendRemoteGizmoDeviceToServer:(id)arg1;	// IMP=0x00100000000c64fc
- (void)resetSessionsIfRequiredBasedOnOrchestrationMode:(_Bool)arg1;	// IMP=0x00100000000c63b9
- (void)_resetWinningStateAndPurgeRequestMaps;	// IMP=0x00100000000c638b
- (void)resetWinningState;	// IMP=0x00100000000c6372
- (_Bool)hasActiveSessionForSendingMetrics;	// IMP=0x00100000000c6107
- (void)adviseSessionArbiterToContinueWithPreviousWinner:(_Bool)arg1;	// IMP=0x00100000000c60b3
- (void)_pickDefaultWinnerWithDroppingSession:(id)arg1;	// IMP=0x00100000000c5b75
- (void)_cancelOtherSessionRequests:(id)arg1 forRefId:(id)arg2;	// IMP=0x00100000000c56e9
- (_Bool)_haveUsefulness:(id)arg1 usefulnessScore:(id *)arg2;	// IMP=0x00100000000c567c
- (_Bool)_isDestructive:(id)arg1;	// IMP=0x00100000000c52a6
- (void)_queueResultObject:(id)arg1 forSession:(id)arg2;	// IMP=0x00100000000c5053
- (void)_resetResultObjectsTimer;	// IMP=0x00100000000c5014
- (void)_resultObjectsTimerFired:(id)arg1;	// IMP=0x00100000000c4f22
- (void)_startResultObjectsTimer;	// IMP=0x00100000000c4db3
- (unsigned int)_resultObjectsHoldTime;	// IMP=0x00100000000c4d5a
- (_Bool)_evaluateResultObjects;	// IMP=0x00100000000c4427
- (int)_preferredSessionType;	// IMP=0x00100000000c43f8
- (void)updateForCallIsLikelyDueToRequest:(_Bool)arg1;	// IMP=0x00100000000c42c2
- (void)updateForCallState:(_Bool)arg1;	// IMP=0x00100000000c42b4
- (void)_unregisterForSleepNotification;	// IMP=0x00100000000c4243
- (void)_registerForSleepNotification;	// IMP=0x00000000000c4164
- (void)_powerChangedMessageType:(unsigned int)arg1 notificationID:(long long)arg2;	// IMP=0x00100000000c4022
- (void)_languageCodeDidChange:(id)arg1;	// IMP=0x00100000000c3e71
- (void)_enabledBitsChanged:(id)arg1;	// IMP=0x00100000000c3ce2
- (void)_unregisterForPossibleSessionDestroyingNotifications;	// IMP=0x00100000000c3c6d
- (void)_registerForPossibleSessionDestroyingNotifications;	// IMP=0x00100000000c3bf1
- (id)_saConnectionMode;	// IMP=0x00100000000c3b81
- (void)_sharedAssistantdIdentifierDidChange:(id)arg1;	// IMP=0x00100000000c3a5f
- (void)_updateSharedUserIdentifiers;	// IMP=0x00100000000c3990
- (id)languageCode;	// IMP=0x00100000000c397e
- (id)_languageCode;	// IMP=0x00100000000c3905
- (void)_purgeRequestMaps;	// IMP=0x00100000000c3840
- (void)endRetryableRequestForCommand:(id)arg1;	// IMP=0x00100000000c35a9
- (void)resetRetryManager;	// IMP=0x00100000000c3480
- (void)startRetry;	// IMP=0x00100000000c3325
- (void)resetSessionsAtNextRequestBoundaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c314d
- (void)resetSessionsAtNextRequestBoundary;	// IMP=0x00100000000c3139
- (void)resetSessionsAndMakeQuiet:(_Bool)arg1;	// IMP=0x00100000000c3127
- (void)_resetSessionsAndMakeQuiet:(_Bool)arg1;	// IMP=0x00100000000c2d41
- (void)cancelSessions;	// IMP=0x00100000000c2d2f
- (void)cancelSynchronously;	// IMP=0x00100000000c2d05
- (void)cancel;	// IMP=0x00100000000c2c42
- (void)_cancelSynchronously:(_Bool)arg1;	// IMP=0x00100000000c2ab3
- (void)beginUpdatingAssistantData;	// IMP=0x00100000000c296a
- (void)preheatSessions;	// IMP=0x00100000000c2953
- (void)preheatAndMakeQuiet:(_Bool)arg1;	// IMP=0x00100000000c27e4
- (void)_startSession:(int)arg1 makeQuiet:(_Bool)arg2;	// IMP=0x00100000000c25c7
- (void)_startSessions:(_Bool)arg1;	// IMP=0x00100000000c2292
- (void)dealloc;	// IMP=0x00100000000c213b
- (id)initOnQueue:(id)arg1 account:(id)arg2 instanceContext:(id)arg3;	// IMP=0x00100000000c1f34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


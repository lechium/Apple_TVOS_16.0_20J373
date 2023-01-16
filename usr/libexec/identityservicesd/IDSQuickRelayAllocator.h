//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSPushHandler, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_source;

@interface IDSQuickRelayAllocator : NSObject
{
    IDSPushHandler *_pushHandler;	// 8 = 0x8
    NSMutableDictionary *_requestIDToSession;	// 16 = 0x10
    NSMutableDictionary *_sessionToAllocations;	// 24 = 0x18
    NSMutableArray *_sessionInfoRequiredKeys;	// 32 = 0x20
    NSMutableSet *_pendingRecipientsAcceptedSessions;	// 40 = 0x28
    NSMutableDictionary *_initiatorsAcceptedSessionsWithToken;	// 48 = 0x30
    NSMutableDictionary *_requestIDToAllocateTime;	// 56 = 0x38
    NSMutableDictionary *_allocateResponses;	// 64 = 0x40
    NSMutableDictionary *_requestIDToPreferredLocalInterface;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_responseCleanupTimer;	// 80 = 0x50
    struct os_unfair_lock_s _lock;	// 88 = 0x58
    NSMutableDictionary *_sessionToLocalParticipantID;	// 96 = 0x60
    NSMutableDictionary *_pushTokenToURIForGroup;	// 104 = 0x68
    NSMutableDictionary *_idsSessionIDToqrSessionID;	// 112 = 0x70
    NSDate *_timeBase;	// 120 = 0x78
}

+ (id)sharedInstance;	// IMP=0x0020000000474200
- (void).cxx_destruct;	// IMP=0x00200000004aaf70
- (void)setRequestIDToSession:(id)arg1 idsSessionID:(id)arg2;	// IMP=0x00100000004aae50
- (unsigned long long)getCountOfSessionToAllocations;	// IMP=0x00100000004aae20
- (unsigned long long)getCountOfPendingRecipientsAcceptedSessions;	// IMP=0x00100000004aadf0
- (id)_getQuickRelayIPPreference:(unsigned long long)arg1;	// IMP=0x00100000004aad60
- (void)_startCleanupTimer;	// IMP=0x00100000004aaa10
- (void)_cleanupResponses;	// IMP=0x00100000004a9d80
- (void)stopKeepAliveTimer:(id)arg1 relaySessionID:(id)arg2;	// IMP=0x00100000004a9760
- (void)startKeepAliveTimer:(id)arg1 relaySessionID:(id)arg2;	// IMP=0x00100000004a9100
- (id)_getResponse:(id)arg1 relaySessionID:(id)arg2;	// IMP=0x00100000004a8750
- (id)_uuidFromNSStringToNSData:(id)arg1;	// IMP=0x00100000004a85a0
- (id)_getGroupID:(id)arg1;	// IMP=0x00100000004a8150
- (void)handler:(id)arg1 receivedOfflineMessagePendingForTopic:(id)arg2 messageContext:(id)arg3;	// IMP=0x00100000004a7e80
- (void)handler:(id)arg1 didReceiveMessage:(id)arg2 forTopic:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5;	// IMP=0x00100000004a7a00
- (unsigned long long)getLocalParticipantIDForRelaySessionID:(id)arg1;	// IMP=0x00100000004a7970
- (void)enablePushHandler:(_Bool)arg1;	// IMP=0x00100000004a7300
- (id)_parseQuickRelayDefaults:(id)arg1 gropuID:(id)arg2;	// IMP=0x00100000004a5590
- (id)getSessionInfoFromDefaults:(id)arg1 groupID:(id)arg2;	// IMP=0x00100000004a54e0
- (id)_findAllocationForSessionID:(id)arg1 requestIDStr:(id)arg2;	// IMP=0x00100000004a4fa0
- (id)_findAllocationListForSessionID:(id)arg1;	// IMP=0x00100000004a4f00
- (id)_filterSelfAllocationsForSessionID:(id)arg1;	// IMP=0x00100000004a4cd0
- (void)_removeAllAllocationsForSessionID:(id)arg1;	// IMP=0x00100000004a4300
- (void)_discardAllocation:(id)arg1;	// IMP=0x00100000004a3ba0
- (void)_addAllocationForSession:(id)arg1 allocation:(id)arg2;	// IMP=0x00100000004a35c0
- (void)invalidateAllocation:(id)arg1;	// IMP=0x00100000004a33f0
- (void)_invalidateSession:(id)arg1 isExpiryPurging:(_Bool)arg2;	// IMP=0x00100000004a3070
- (void)invalidateSession:(id)arg1 isExpiryPurging:(_Bool)arg2;	// IMP=0x00000000004a2f30
- (void)cleanUpCachedMappings:(id)arg1;	// IMP=0x00100000004a2cf0
- (void)reportAWDAllocatorEvent:(unsigned int)arg1 relayProviderType:(long long)arg2 transport:(long long)arg3 localRAT:(unsigned int)arg4 duration:(unsigned long long)arg5 idsSessionID:(id)arg6 reportingDataBlob:(id)arg7 isInitiator:(_Bool)arg8;	// IMP=0x00100000004a1d80
- (long long)getServerProviderForIDSSessionID:(id)arg1;	// IMP=0x00100000004a1b10
- (void)setInitiatorsAcceptedToken:(id)arg1 pushToken:(id)arg2;	// IMP=0x00100000004a16f0
- (void)requestAllocationForRecipient:(id)arg1;	// IMP=0x00100000004a02f0
- (id)getPushTokenForRelaySessionID:(id)arg1 relaySessionID:(id)arg2;	// IMP=0x001000000049fc00
- (id)getRelaySessionIDForIDSSessionID:(id)arg1 pushToken:(id)arg2;	// IMP=0x001000000049f410
- (id)_uriToParticipantID:(id)arg1;	// IMP=0x001000000049e9a0
- (void)_storeMappingFromPushTokenToURIs:(id)arg1 fromID:(id)arg2 service:(id)arg3 cert:(id)arg4 forGroup:(id)arg5;	// IMP=0x001000000049e2e0
- (void)_startQRConnectionForSession:(id)arg1 isInitiatorsAcceptedSession:(_Bool)arg2 withLocalInterfacePreference:(int)arg3;	// IMP=0x001000000049ca60
- (id)_getStatusMessageFromStatusCode:(unsigned long long)arg1;	// IMP=0x001000000049c8f0
- (void)_sendAWDMetricsForAllocation:(id)arg1 status:(long long)arg2 hasRecipientAccepted:(_Bool)arg3;	// IMP=0x001000000049bd80
- (void)_processAllocationStatusResult:(id)arg1;	// IMP=0x001000000049a9c0
- (unsigned int)_getErrorCodeFromAllocationStatus:(int)arg1;	// IMP=0x001000000049a8a0
- (_Bool)_hasSessionInfoRequiredKeys:(id)arg1;	// IMP=0x001000000049a390
- (void)_setSessionInfoRequiredKeys;	// IMP=0x001000000049a1c0
- (id)_createSessionInfoFromResponsePayload:(id)arg1;	// IMP=0x00100000004965c0
- (id)_getCombinedSoftwareID:(id)arg1;	// IMP=0x0010000000496230
- (void)_processSelfAllocations:(id)arg1 allocation:(id)arg2;	// IMP=0x00100000004955e0
- (_Bool)_isDuplicateResponse:(id)arg1 newResponse:(id)arg2;	// IMP=0x0010000000494fa0
- (void)_handleIncomingAllocateResponse:(id)arg1 isFromCache:(_Bool)arg2 requestOptions:(id)arg3;	// IMP=0x001000000048e1f0
- (id)getAdditionalAllocationForAddress:(id)arg1 selfAddress:(unsigned int)arg2 relaySessionID:(id)arg3 allocateType:(long long)arg4 qrReason:(unsigned short)arg5 previousTime:(unsigned long long)arg6 previousError:(unsigned short)arg7 previousRelayIP:(unsigned int)arg8 previousAccessToken:(id)arg9 requestSelfAllocation:(_Bool)arg10 isSessionIDRemoteDeviceID:(_Bool)arg11 withPreferredRemoteInterface:(int)arg12 withPreferredLocalInterface:(int)arg13;	// IMP=0x001000000048bed0
- (_Bool)isURIAvailabeInAllocateResponse:(id)arg1 uri:(id)arg2;	// IMP=0x001000000048b6d0
- (id)getURIFromParticipantID:(id)arg1 participantID:(id)arg2;	// IMP=0x001000000048a9d0
- (id)getPushTokenFromParticipantID:(id)arg1 participantID:(id)arg2;	// IMP=0x0010000000489ee0
- (id)getPushTokensFromParticipantIDs:(id)arg1 participantIDs:(id)arg2;	// IMP=0x0010000000489220
- (id)_getPushTokenFromParticipantID:(id)arg1 participantID:(id)arg2;	// IMP=0x0010000000488bf0
- (_Bool)_startQRConnectionWithDefaults:(id)arg1;	// IMP=0x0010000000488680
- (id)setupNewAllocation:(id)arg1 sessionID:(id)arg2 fromIdentity:(id)arg3 fromURI:(id)arg4 fromService:(id)arg5 options:(id)arg6 connectReadyHandler:(CDUnknownBlockType)arg7;	// IMP=0x0010000000488470
- (id)_tokenURIForToken:(id)arg1 uri:(id)arg2;	// IMP=0x0010000000488330
- (id)_setupNewAllocation:(id)arg1 sessionID:(id)arg2 isSessionIDRemoteDeviceID:(_Bool)arg3 fromIdentity:(id)arg4 fromURI:(id)arg5 fromService:(id)arg6 options:(id)arg7 connectReadyHandler:(CDUnknownBlockType)arg8 withPreferredLocalInterface:(int)arg9 forAdditionalAllocation:(_Bool)arg10;	// IMP=0x00100000004841c0
- (_Bool)_responseHasCachedURI:(id)arg1 groupID:(id)arg2 sessionID:(id)arg3;	// IMP=0x0010000000483c20
- (void)_sendIDQueryRequest:(id)arg1 fromIdentity:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00100000004838c0
- (id)_getSelfAllocationFromCache:(id)arg1;	// IMP=0x0010000000483220
- (void)_dispatchIncomingAllocateResponse:(id)arg1 isFromCache:(_Bool)arg2 requestOptions:(id)arg3;	// IMP=0x0010000000483070
- (_Bool)invalidateLatestResponse:(id)arg1 qrReason:(unsigned short)arg2 previousError:(unsigned short)arg3;	// IMP=0x0010000000482960
- (_Bool)_addConnectStatus:(id)arg1 relaySessionID:(id)arg2 previousTime:(unsigned long long)arg3 qrReason:(unsigned short)arg4 previousError:(unsigned short)arg5 previousRelayIP:(unsigned int)arg6 previousAccessToken:(id)arg7;	// IMP=0x0010000000481ad0
- (_Bool)_addResponseToCache:(id)arg1 sessionInfo:(id)arg2 modifiedMessage:(id *)arg3;	// IMP=0x001000000047f750
- (void)_notifyURIToParticipantIDMappingChange:(id)arg1;	// IMP=0x001000000047f110
- (void)_notifyParticipantID2PushTokenMappingChange:(id)arg1;	// IMP=0x001000000047eb20
- (id)_mergeParticipantID2PushTokenMapping:(id)arg1 sourceResponse:(id)arg2 mappingChange:(_Bool *)arg3;	// IMP=0x001000000047dc00
- (_Bool)hasParticipantID:(id)arg1 participantID:(id)arg2;	// IMP=0x001000000047d8a0
- (id)_getResponseForQRSessionID:(id)arg1 sessionID:(id)arg2 index:(long long *)arg3;	// IMP=0x001000000047d4c0
- (_Bool)_shouldUseCurrentResponse:(id)arg1 cachedMessage:(id)arg2;	// IMP=0x001000000047c120
- (id)getAllocateResponse:(id)arg1 groupID:(id)arg2;	// IMP=0x001000000047bce0
- (void)_setResponseForQRGroupID:(id)arg1 groupID:(id)arg2;	// IMP=0x001000000047bae0
- (id)_getResponseFromQRGroupID:(id)arg1;	// IMP=0x001000000047b820
- (id)setupNewAllocationToDevice:(id)arg1 options:(id)arg2 connectReadyHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000047a610
- (id)_setupAllocation:(id)arg1 fromURI:(id)arg2 sessionID:(id)arg3 isSessionIDRemoteDeviceID:(_Bool)arg4 options:(id)arg5 prevConnectStatus:(CDStruct_b3ab6eb3 *)arg6 requestUUID:(id)arg7 connectReadyHandler:(CDUnknownBlockType)arg8 withPreferredLocalInterface:(int)arg9;	// IMP=0x00100000004761e0
- (void)_sendAllocateRequest:(id)arg1;	// IMP=0x0010000000475b20
- (_Bool)_sendKeepAliveRequest:(id)arg1;	// IMP=0x00100000004747e0
- (id)_queryPolicy;	// IMP=0x0010000000474760
- (id)_peerIDManager;	// IMP=0x0010000000474730
- (id)_getIDSAWDLoggingInstance;	// IMP=0x0010000000474700
- (void)dealloc;	// IMP=0x0010000000474440
- (id)init;	// IMP=0x00100000004742c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

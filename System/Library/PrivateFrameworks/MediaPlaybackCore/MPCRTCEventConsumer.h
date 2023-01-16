//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlaybackEngineEvent, NSString, RTCReporting;
@protocol MPCPlaybackEngineEventStreamSubscription, MPCRTCEventConsumerTestingDelegate, OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPCRTCEventConsumer : NSObject
{
    NSObject<OS_dispatch_group> *_rtcGroup;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_rtcQueue;	// 16 = 0x10
    MPCPlaybackEngineEvent *_cachedFirstItemAssetLoadEvent;	// 24 = 0x18
    id <MPCRTCEventConsumerTestingDelegate> _testingDelegate;	// 32 = 0x20
    id <MPCPlaybackEngineEventStreamSubscription> _subscription;	// 40 = 0x28
    RTCReporting *_playbackSessionRTCSession;	// 48 = 0x30
    RTCReporting *_playbackQueueRTCSession;	// 56 = 0x38
    RTCReporting *_playbackItemRTCSession;	// 64 = 0x40
}

+ (id)identifier;	// IMP=0x00100000000b542c
+ (id)dateFormatter;	// IMP=0x00100000000b53fc
+ (id)NSStringFromMPCRTCReportingEventCategory:(long long)arg1;	// IMP=0x00100000000b533f
+ (id)rtcIdentifiersFromUniversalIdentifiers:(id)arg1;	// IMP=0x00100000000b5139
+ (id)rtcIdentifiersFromRadioIdentifiers:(id)arg1;	// IMP=0x00100000000b5046
+ (id)playerServiceNameWithPlayerID:(id)arg1;	// IMP=0x00100000000b4fcb
+ (id)identifierStringFromItemIdentifiers:(id)arg1 radioIdentifiers:(id)arg2;	// IMP=0x00100000000b4e8c
- (void).cxx_destruct;	// IMP=0x00000000000b1b29
@property(retain) RTCReporting *playbackItemRTCSession; // @synthesize playbackItemRTCSession=_playbackItemRTCSession;
@property(retain) RTCReporting *playbackQueueRTCSession; // @synthesize playbackQueueRTCSession=_playbackQueueRTCSession;
@property(retain) RTCReporting *playbackSessionRTCSession; // @synthesize playbackSessionRTCSession=_playbackSessionRTCSession;
@property(readonly, nonatomic) id <MPCPlaybackEngineEventStreamSubscription> subscription; // @synthesize subscription=_subscription;
@property(nonatomic) __weak id <MPCRTCEventConsumerTestingDelegate> testingDelegate; // @synthesize testingDelegate=_testingDelegate;
- (void)_sendOneMessageWithToken:(id)arg1 serviceName:(id)arg2 category:(long long)arg3 type:(long long)arg4 payload:(id)arg5;	// IMP=0x00000000000b16db
- (void)_sendReportWithSession:(id)arg1 category:(long long)arg2 type:(long long)arg3 payload:(id)arg4;	// IMP=0x00000000000b15c8
- (id)_rtcUserInfoWithServiceName:(id)arg1;	// IMP=0x00000000000b14c9
- (id)_rtcSessionInfoWithToken:(id)arg1;	// IMP=0x00000000000b12f8
- (void)_generateConfiguredReportingSessionWithToken:(id)arg1 serviceName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b1167
- (void)_updateAssetLoadInfoEvent:(id)arg1 fromAssetLoadEndEvent:(id)arg2 cursor:(id)arg3;	// IMP=0x00000000000b0cc4
- (void)_performABCSnapshotWithPayloadIfNecessary:(id)arg1;	// IMP=0x00000000000b0a83
- (id)_underlyingErrorFromPayload:(id)arg1;	// IMP=0x00000000000b0871
- (_Bool)_itemWasPreviouslyLoaded:(id)arg1 cursor:(id)arg2;	// IMP=0x00000000000b04f7
- (id)_itemAssetTypeFromItemAssetLoadEvent:(id)arg1 cursor:(id)arg2;	// IMP=0x00000000000afc31
- (id)_mediaIdentifierFromItemAssetLoadEndEvent:(id)arg1 cursor:(id)arg2;	// IMP=0x00000000000af81f
- (id)_tapToPlayMetrics:(id)arg1 fromItemStartEvent:(id)arg2;	// IMP=0x00000000000af480
- (id)_accountSnapshotWithCursor:(id)arg1;	// IMP=0x00000000000af2f0
- (id)_itemStartIncitingEvent:(id)arg1 fromItemStartEvent:(id)arg2;	// IMP=0x00000000000af056
- (id)_reasonForEndEvent:(id)arg1 cursor:(id)arg2;	// IMP=0x00000000000aeaa6
- (id)_payloadForItemSummary:(id)arg1 fromItemEvent:(id)arg2;	// IMP=0x00000000000ae430
- (id)_payloadForItemSummary:(id)arg1 fromEvent:(id)arg2;	// IMP=0x00000000000ae2c8
- (id)_payloadForItemAssetLoad:(id)arg1 fromItemEvent:(id)arg2;	// IMP=0x00000000000ad2ae
- (id)_payloadForQueueLoad:(id)arg1 fromQueueLoadEndEvent:(id)arg2;	// IMP=0x00000000000acce9
- (id)_payloadForSessionSummary:(id)arg1 fromEvent:(id)arg2;	// IMP=0x00000000000ac786
- (id)_payloadForSessionStart:(id)arg1 fromEvent:(id)arg2;	// IMP=0x00000000000abb51
- (void)_sendReportForItemSummaryWithEndReason:(id)arg1 cursor:(id)arg2 event:(id)arg3;	// IMP=0x00000000000ab733
- (void)_sendReportForItemSummary:(id)arg1 event:(id)arg2;	// IMP=0x00000000000ab719
- (void)_sendReportForItemAssetLoad:(id)arg1 event:(id)arg2;	// IMP=0x00000000000ab139
- (void)_sendQueueLoadEventIfNeeded:(id)arg1 forItemEvent:(id)arg2;	// IMP=0x00000000000aaab7
- (void)_sendReportForSessionStart:(id)arg1 event:(id)arg2 withType:(long long)arg3;	// IMP=0x00000000000aa4da
- (void)_sendSessionStartIfNeeded:(id)arg1 forItemEvent:(id)arg2;	// IMP=0x00000000000aa3da
- (void)_sendReportForSessionSummary:(id)arg1 event:(id)arg2 withType:(long long)arg3;	// IMP=0x00000000000aa2fe
- (void)_handleReportingForItemStartEvent:(id)arg1 event:(id)arg2;	// IMP=0x00000000000aa265
- (void)unsubscribeFromEventStream:(id)arg1;	// IMP=0x00000000000aa24b
- (void)subscribeToEventStream:(id)arg1;	// IMP=0x00000000000a9f42
- (id)init;	// IMP=0x00000000000a9e39

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


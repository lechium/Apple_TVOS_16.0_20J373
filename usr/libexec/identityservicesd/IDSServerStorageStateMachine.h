//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDeliveryController, IDSServerBag, IMUserDefaults, NSMutableDictionary, NSMutableSet;

@interface IDSServerStorageStateMachine : NSObject
{
    NSMutableDictionary *_currentStorageRetriesPerTopic;	// 8 = 0x8
    NSMutableDictionary *_deathTimerToTopicMap;	// 16 = 0x10
    NSMutableDictionary *_lastReceivedMessageTimePerTopic;	// 24 = 0x18
    NSMutableSet *_inflightStorageRequests;	// 32 = 0x20
    NSMutableSet *_pendingStorageRequests;	// 40 = 0x28
    NSMutableDictionary *_metricCollectors;	// 48 = 0x30
    IDSDeliveryController *_deliveryController;	// 56 = 0x38
    IMUserDefaults *_userDefaults;	// 64 = 0x40
    IDSServerBag *_idsServerBag;	// 72 = 0x48
}

+ (id)sharedInstance;	// IMP=0x004000000035e5b0
- (void).cxx_destruct;	// IMP=0x0020000000362cf0
@property(retain, nonatomic) IDSServerBag *idsServerBag; // @synthesize idsServerBag=_idsServerBag;
@property(retain, nonatomic) IMUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) IDSDeliveryController *deliveryController; // @synthesize deliveryController=_deliveryController;
- (id)_persistedTopics;	// IMP=0x0010000000362b80
- (void)_unpersistTopic:(id)arg1;	// IMP=0x0010000000362a00
- (void)_persistTopic:(id)arg1;	// IMP=0x00100000003628d0
- (id)metricCollectors;	// IMP=0x00100000003628b0
- (void)reissuePersistedRequests;	// IMP=0x00100000003626b0
- (void)_incrementMessagesFromStorageForTopic:(id)arg1;	// IMP=0x0010000000362460
- (void)stopCollectingMetricsForServerStorageStateMachineFor:(id)arg1;	// IMP=0x00100000003621f0
- (void)startCollectingMetricsForServerStorageStateMachineFor:(id)arg1 isPrimary:(_Bool)arg2;	// IMP=0x00100000003620c0
- (id)currentMetricCollectorForTopic:(id)arg1;	// IMP=0x0010000000361ff0
- (id)lastReceivedMessageTimeForTopic:(id)arg1;	// IMP=0x0010000000361f70
- (_Bool)inflightServerStorageStateMachineForTopic:(id)arg1;	// IMP=0x0010000000361f00
- (void)terminateStateMachineForTopic:(id)arg1;	// IMP=0x00100000003618a0
- (void)_sendServerStorageMessageForTopic:(id)arg1 retryCount:(int)arg2;	// IMP=0x0010000000361120
- (void)_stateMachineTimedOut:(id)arg1;	// IMP=0x001000000035fe20
- (void)_submitNoLastFromStorageMetricForService:(id)arg1;	// IMP=0x001000000035fd70
- (void)_startExtendedTimeoutTimerForTopic:(id)arg1;	// IMP=0x001000000035fa80
- (void)_startTimeoutTimerForTopic:(id)arg1;	// IMP=0x001000000035f790
- (void)recievedMessageFromStorageForTopic:(id)arg1;	// IMP=0x001000000035f6e0
- (void)recievedLastMessageFromStorageForTopic:(id)arg1;	// IMP=0x001000000035f4e0
- (void)recievedNoStorageResponseForTopic:(id)arg1 messageContext:(id)arg2;	// IMP=0x001000000035f2b0
- (void)incomingStorageRequestForTopic:(id)arg1 primary:(_Bool)arg2 messageContext:(id)arg3;	// IMP=0x001000000035ea70
- (void)dealloc;	// IMP=0x001000000035e9f0
- (id)initWithDeliveryController:(id)arg1 userDefaults:(id)arg2 idsServerBag:(id)arg3;	// IMP=0x001000000035e760
- (id)init;	// IMP=0x001000000035e670

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPLSyncSessionPrediction, NSMutableDictionary, NSString;
@protocol OS_xpc_object;

@interface CPLCloudKitRescheduler : NSObject
{
    double _startAcquiringActivity;	// 8 = 0x8
    _Bool _acquiringActivity;	// 16 = 0x10
    _Bool _sessionIsDone;	// 17 = 0x11
    _Bool _activityIsDeferred;	// 18 = 0x12
    _Bool _isClosing;	// 19 = 0x13
    NSMutableDictionary *_requests;	// 24 = 0x18
    CDUnknownBlockType _deferBlock;	// 32 = 0x20
    CPLSyncSessionPrediction *_sessionPrediction;	// 40 = 0x28
    NSObject<OS_xpc_object> *_currentActivity;	// 48 = 0x30
    long long _currentType;	// 56 = 0x38
}

+ (id)idleDescriptionForType:(long long)arg1;	// IMP=0x002000000012d3f5
+ (void)dropPersistedInitialSyncSession;	// IMP=0x001000000012aeea
+ (void)findPersistedSyncSession:(CDUnknownBlockType)arg1 forScheduler:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000012abe3
+ (void)_checkinActivityWithScheduler:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000129eaf
+ (_Bool)_unregisterActivityCheckinIfNeeded;	// IMP=0x0010000000129e82
+ (id)_reschedulerWithType:(long long)arg1 activity:(id)arg2 startTime:(double)arg3;	// IMP=0x0010000000129e23
+ (void)unregisterPersistedSyncSessions;	// IMP=0x0010000000129d7d
+ (void)initialize;	// IMP=0x0010000000129bc7
- (void).cxx_destruct;	// IMP=0x002000000012d81c
@property(readonly, nonatomic) long long currentType; // @synthesize currentType=_currentType;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *currentActivity; // @synthesize currentActivity=_currentActivity;
- (void)updateSyncSessionPrediction:(id)arg1;	// IMP=0x001000000012d410
@property(readonly, nonatomic) NSString *goodConditionsDescription;
@property(readonly, nonatomic) _Bool mightNeedForegroundToStart;
- (void)engineIsClosing;	// IMP=0x001000000012d0d9
- (void)sessionWontHappen;	// IMP=0x001000000012ced6
- (void)sessionIsDone;	// IMP=0x001000000012cc22
- (void)deferWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000012c980
@property(readonly, nonatomic) _Bool shouldDefer;
- (void)dropActivityRequest:(id)arg1;	// IMP=0x001000000012c59a
- (id)acquireActivityWithType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000012c162
- (void)_reacquireActivityIfNecessary;	// IMP=0x001000000012c03e
- (void)_unregisterPendingActivityRequest;	// IMP=0x001000000012c029
- (_Bool)_hasAcquiredActivityOfType:(long long)arg1;	// IMP=0x001000000012c001
- (_Bool)_isActivity:(id)arg1 matchingRequestedType:(long long)arg2;	// IMP=0x001000000012bfb5
- (void)_acquireActivity;	// IMP=0x001000000012bb10
- (void)_acquiredActivity:(id)arg1 identifier:(const char *)arg2 type:(long long)arg3 expectedSequenceNumber:(unsigned long long)arg4;	// IMP=0x001000000012b1dc
- (id)_criteriaForType:(long long)arg1;	// IMP=0x001000000012b0bf
- (id)init;	// IMP=0x0010000000129d27

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


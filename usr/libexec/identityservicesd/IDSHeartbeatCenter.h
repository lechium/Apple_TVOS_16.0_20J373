//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUTDeferredTaskQueue, IMTimer, NSDate, NSMutableArray;

@interface IDSHeartbeatCenter : NSObject
{
    NSMutableArray *_registrations;	// 8 = 0x8
    NSDate *_registrationHeartbeatDate;	// 16 = 0x10
    IMTimer *_registrationHeartbeatTimer;	// 24 = 0x18
    double _baseRegistrationHBI;	// 32 = 0x20
    _Bool _pendingHeartbeat;	// 40 = 0x28
    _Bool _listeningForRegStateChanges;	// 41 = 0x29
    CUTDeferredTaskQueue *_reallyUpdateRegistrationHeartbeatTask;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x0020000000073eb0
- (void).cxx_destruct;	// IMP=0x0020000000076f80
@property(readonly, nonatomic) CUTDeferredTaskQueue *reallyUpdateRegistrationHeartbeatTask; // @synthesize reallyUpdateRegistrationHeartbeatTask=_reallyUpdateRegistrationHeartbeatTask;
- (void)systemDidWake;	// IMP=0x0010000000076f30
- (void)removeRegistrationInfo:(id)arg1;	// IMP=0x0010000000076da0
- (void)addRegistrationInfo:(id)arg1;	// IMP=0x0010000000076c10
@property(readonly, nonatomic) double registrationHBI;
- (void)_bagReloaded:(id)arg1;	// IMP=0x00100000000769d0
- (void)noteRegistrationStateChanged;	// IMP=0x00100000000768f0
- (void)updateHeartbeat;	// IMP=0x00100000000767e0
- (void)checkHeartbeat;	// IMP=0x00100000000766e0
- (void)_stopRegistrationHeartbeat;	// IMP=0x0010000000076590
- (void)_serverHeartBeatTimerHitOnMain:(id)arg1;	// IMP=0x0010000000076460
- (void)_startRegistrationHeartbeat;	// IMP=0x0010000000075f50
- (void)_updateRegistrationHeartbeat;	// IMP=0x0010000000075e40
- (void)__reallyUpdateRegistrationHeartbeat;	// IMP=0x0010000000075d70
- (id)_registrationsPendingHeartbeat;	// IMP=0x0010000000075730
- (double)_nextRegistrationHeartbeatTime;	// IMP=0x0010000000075190
- (_Bool)_registration:(id)arg1 needsRenewal:(double *)arg2;	// IMP=0x0010000000074b20
- (void)_serverHeartBeatTimerHit:(id)arg1;	// IMP=0x0010000000074a10
- (void)_serverHeartBeat:(id)arg1;	// IMP=0x00100000000740f0
- (id)init;	// IMP=0x0010000000073f70

@end


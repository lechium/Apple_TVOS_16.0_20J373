//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CMMotionAlarmManagerInternal : NSObject
{
    void *fLocationdConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *fInternalQueue;	// 16 = 0x10
    NSMutableDictionary *fAlarms;	// 24 = 0x18
    _Bool fListening;	// 32 = 0x20
}

+ (id)instance;	// IMP=0x0060000000163045
- (void)_handleAlarmFire:(id)arg1;	// IMP=0x0000000000165995
- (_Bool)_launchRemoteAppWithError:(id *)arg1 delegate:(id)arg2;	// IMP=0x00000000001655ba
- (_Bool)_acknowledgeAlarm:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000164dd9
- (_Bool)_unregisterAlarm:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000164271
- (_Bool)_registerAlarm:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000163782
- (void)_stopListeners;	// IMP=0x00000000001634fe
- (void)_startListeners;	// IMP=0x0000000000163201
- (void)_teardown;	// IMP=0x00000000001630f8
- (void)dealloc;	// IMP=0x00000000001630ba
- (id)init;	// IMP=0x0000000000162c2a

@end


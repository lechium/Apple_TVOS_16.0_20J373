//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSString;

@interface CLPredictedWalkDistanceServiceWatch : CLIntersiloService
{
    struct unique_ptr<CLMotionStateMediator_Type::Client, std::default_delete<CLMotionStateMediator_Type::Client>> fMotionStateMediatorClient;	// 8 = 0x8
    struct unique_ptr<CLStepCountNotifier_Type::Client, std::default_delete<CLStepCountNotifier_Type::Client>> fStepCountClient;	// 16 = 0x10
    struct unique_ptr<CLNatalimetryNotifier_Type::Client, std::default_delete<CLNatalimetryNotifier_Type::Client>> fUserInfoClient;	// 24 = 0x18
    struct unique_ptr<CLPredictedWalkDistanceBoutDetector, std::default_delete<CLPredictedWalkDistanceBoutDetector>> fBoutDetector;	// 32 = 0x20
}

+ (_Bool)isSupported;	// IMP=0x00200000003474f3
+ (id)getSilo;	// IMP=0x001000000034745a
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000347441
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000003473e4
- (id).cxx_construct;	// IMP=0x0020000000347d3b
- (void).cxx_destruct;	// IMP=0x0010000000347cba
- (void)onUserInfoUpdate:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x0010000000347acd
- (void)onAddBout:(struct CLPredictedWalkDistanceBoutEntry)arg1;	// IMP=0x0010000000347948
- (void)onStepCountNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x00100000003478fd
- (void)onMotionStateMediatorNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x00100000003478ae
- (void)endService;	// IMP=0x001000000034784a
- (void)beginService;	// IMP=0x00100000003474fb
- (id)init;	// IMP=0x00100000003474b6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end


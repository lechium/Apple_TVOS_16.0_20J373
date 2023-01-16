//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BacklightServicesHost/BLSHOSTimerProviding-Protocol.h>

@class BLSHSuppressionEvent, NSString, SWSystemSleepMonitor;
@protocol BLSHFlipbook, BLSHWatchdogDelegate, BSInvalidatable;

@protocol BLSHOSInterfaceProviding <BLSHOSTimerProviding>
@property(readonly, nonatomic) BLSHSuppressionEvent *lastSuppressionEvent;
@property(readonly, nonatomic, getter=isSuppressionServiceActive) _Bool suppressionServiceActive;
@property(readonly, nonatomic) _Bool deviceSupportsAlwaysOn;
- (void)didDetectSignificantUserInteraction;
- (void)endSuppressionService;
- (void)startSuppressionServiceWithHandler:(void (^)(BLSHSuppressionEvent *))arg1;
- (id <BSInvalidatable>)observeSignificantTimeChangeWithIdentifier:(NSString *)arg1 handler:(void (^)(void))arg2;
- (SWSystemSleepMonitor *)systemSleepMonitor;
- (id <BLSHFlipbook>)createFlipbook;
- (id <BSInvalidatable>)acquireSystemActivityAssertionWithIdentifier:(NSString *)arg1 timeout:(double)arg2 handler:(void (^)(_Bool, NSError *, id <SWSystemActivityAcquisitionDetails>))arg3;
- (id <BSInvalidatable>)acquirePowerAssertionWithIdentifier:(NSString *)arg1 timeout:(double)arg2;
- (id <BSInvalidatable>)scheduleWatchdogWithDelegate:(id <BLSHWatchdogDelegate>)arg1 explanation:(NSString *)arg2 timeout:(double)arg3;
@end

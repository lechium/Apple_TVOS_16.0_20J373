//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSPreventSystemSleepPowerAssertion;

@interface CSDarwinPreventSystemSleepManager : NSObject
{
    double _assertionTimeoutInterval;	// 8 = 0x8
    CSPreventSystemSleepPowerAssertion *_preventSystemSleepPowerAssertion;	// 16 = 0x10
    long long _currentState;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000e30a1
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) CSPreventSystemSleepPowerAssertion *preventSystemSleepPowerAssertion; // @synthesize preventSystemSleepPowerAssertion=_preventSystemSleepPowerAssertion;
@property(readonly, nonatomic) double assertionTimeoutInterval; // @synthesize assertionTimeoutInterval=_assertionTimeoutInterval;
- (void)dealloc;	// IMP=0x00100000000e3029
- (void)acquireAssertionForIdleUser;	// IMP=0x00100000000e2d00
- (void)acquireAssertionForActiveUser;	// IMP=0x00100000000e2bfb
- (void)acquireAssertion;	// IMP=0x00100000000e2ba2
- (void)releasePreventSystemSleepAssertion;	// IMP=0x00100000000e2b70
- (void)_acquirePreventSystemSleepAssertionWithTimeout:(id)arg1;	// IMP=0x00100000000e2a59
- (id)initWithTimeout:(double)arg1;	// IMP=0x00100000000e2a16

@end

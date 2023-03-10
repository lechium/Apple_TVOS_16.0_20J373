//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CSBiometricMatchMonitorDelegate;

@interface CSBiometricMatchMonitor
{
    id <CSBiometricMatchMonitorDelegate> _delegate;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000000517c2
- (void).cxx_destruct;	// IMP=0x002000000005180d
@property(nonatomic) __weak id <CSBiometricMatchMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)getBiometricMatchResultForTriggerTimeStamp:(unsigned long long)arg1;	// IMP=0x00100000000517d8
- (_Bool)getLastBiometricMatchEvent:(_Bool *)arg1 atTime:(unsigned long long *)arg2;	// IMP=0x00100000000517d0
- (void)startObserving;	// IMP=0x00100000000517ca

@end


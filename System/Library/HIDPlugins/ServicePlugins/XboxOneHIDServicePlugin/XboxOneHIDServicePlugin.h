//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface XboxOneHIDServicePlugin
{
    CDStruct_b8f12d32 _batteryStats;	// 8 = 0x8
    _Bool _haveReportedBatteryOnce;	// 9 = 0x9
    _Bool _isAndroidProfile;	// 10 = 0xa
    _Bool _buttonHomeSeparateReport;	// 11 = 0xb
    _Bool _viewInDigitalButtonsField;	// 12 = 0xc
    _Bool _shareButtonPresent;	// 13 = 0xd
    long long _type;	// 16 = 0x10
    unsigned char _profile;	// 24 = 0x18
}

+ (_Bool)matchService:(unsigned int)arg1 options:(id)arg2 score:(long long *)arg3;	// IMP=0x00100000000026ed
- (float)defaultRightThumbstickNoiseBuffer;	// IMP=0x0000000000003d56
- (float)defaultLeftThumbstickNoiseBuffer;	// IMP=0x0000000000003d48
- (float)defaultRightThumbstickDeadzoneRadius;	// IMP=0x0000000000003d3a
- (float)defaultLeftThumbstickDeadzoneRadius;	// IMP=0x0000000000003d2c
- (float)defaultHapticDispatchFrequency;	// IMP=0x0000000000003d1e
- (id)defaultHapticMotors;	// IMP=0x0000000000003bc3
- (void)dispatchHapticEvent;	// IMP=0x0000000000003942
- (unsigned int)numberOfTimesToSendZeroHapticReport;	// IMP=0x0000000000003937
@property(readonly, copy) NSString *description;
- (_Bool)shouldCreateBatteryDevice;	// IMP=0x0000000000003915
- (void)updateBatteryStats:(CDStruct_b8f12d32)arg1;	// IMP=0x00000000000037c0
- (void)setupRawReportHandling;	// IMP=0x0000000000002f40
- (void)dispatchAlternateHomeButtonEventWithValue:(_Bool)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x0000000000002e5e
- (id)initWithService:(unsigned int)arg1;	// IMP=0x000000000000284f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


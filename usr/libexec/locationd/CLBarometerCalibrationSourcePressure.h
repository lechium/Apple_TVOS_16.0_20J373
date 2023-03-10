//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CLBarometerCalibrationSourcePressure
{
    struct unique_ptr<CLMotionNotifier::SiloDispatcher<CLBarometerCalibration_Types::CMKFFilteredPressureSample>, std::default_delete<CLMotionNotifier::SiloDispatcher<CLBarometerCalibration_Types::CMKFFilteredPressureSample>>> _kfFilteredPressureDispatcher;	// 32 = 0x20
    double _lastPressureBufferTimestamp;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x0020000000a68a00
- (void).cxx_destruct;	// IMP=0x0010000000a689d8
- (void)onKFFilteredPressure:(const struct CMKFFilteredPressureSample *)arg1;	// IMP=0x0010000000a6859b
- (void)disableSource;	// IMP=0x0010000000a6854b
- (void)enableSource;	// IMP=0x0010000000a684f3
- (void)dealloc;	// IMP=0x0010000000a684a4
- (id)initWithUniverse:(id)arg1 delegate:(id)arg2;	// IMP=0x0010000000a683c0

@end


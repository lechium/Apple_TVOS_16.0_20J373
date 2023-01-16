//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CLBarometerCalibrationSourceLocation
{
    struct unique_ptr<CLLocationController_Type::Client, std::default_delete<CLLocationController_Type::Client>> fLocationControllerClient;	// 32 = 0x20
    _Bool _currentUnderDEM;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x0020000000325d1b
- (void).cxx_destruct;	// IMP=0x0010000000325cf3
- (void)onLocationNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x0010000000325430
- (void)disableSource;	// IMP=0x00100000003253b7
- (void)enableSource;	// IMP=0x0010000000325338
- (id)initWithUniverse:(id)arg1 delegate:(id)arg2;	// IMP=0x00100000003251ee

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SATimerDismiss.h>

@interface SATimerDismiss (ADTimerTransformer)
- (id)_ad_timerResponseForResponse:(id)arg1;	// IMP=0x001000000007f6a0
- (id)_ad_timerRequestRepresentation;	// IMP=0x001000000007f687
- (id)ad_executionDeviceForDeviceContextTuples:(id)arg1 executionContext:(id)arg2 proximityMap:(id)arg3 sharedUserID:(id)arg4 localDeviceIsFollower:(_Bool)arg5;	// IMP=0x001000000008f427
- (_Bool)ad_requiresProximityInformationForDeviceContextTuples:(id)arg1;	// IMP=0x001000000008f41f
- (_Bool)ad_requiresDeviceContext;	// IMP=0x001000000008f417
@end


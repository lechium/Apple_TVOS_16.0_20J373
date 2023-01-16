//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SPOwner/NSObject-Protocol.h>

@class NSUUID;

@protocol SPLocalBeaconManagerXPCProtocol <NSObject>
- (void)setSuppressLPEMBeaconing:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)setUserHasAcknowledgedFindMy:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)userHasAcknowledgeFindMyWithCompletion:(void (^)(_Bool))arg1;
- (void)isLPEMModeSupportedWithCompletion:(void (^)(_Bool))arg1;
- (void)poisonBeaconIdentifier:(NSUUID *)arg1 completion:(void (^)(void))arg2;
- (void)offlineAdvertisingKeysForReason:(long long)arg1 completion:(void (^)(NSArray *))arg2;
- (void)bluetoothPowerStateUpdated:(long long)arg1;
- (void)getMacBeaconConfigWithCompletion:(void (^)(SPMacBeaconConfig *, NSError *))arg1;
- (void)beaconingKeysOfType:(long long)arg1 withCompletion:(void (^)(NSArray *))arg2;
- (void)beaconingStateWithCompletion:(void (^)(long long))arg1;
@end


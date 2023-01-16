//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMImmutableSettingValue, NSString, NSUUID;

@protocol HMDCompositeSettingsSiriEndpointProfileBridge
- (long long)siriEndpointCertificationReasonForAccessoryUUID:(NSUUID *)arg1 homeUUID:(NSUUID *)arg2 error:(id *)arg3;
- (void)writeSettingValue:(HMImmutableSettingValue *)arg1 accessoryUUID:(NSUUID *)arg2 homeUUID:(NSUUID *)arg3 forKeyPath:(NSString *)arg4 completionHandler:(void (^)(NSError *))arg5;
- (HMImmutableSettingValue *)readValueValueForAccessoryUUID:(NSUUID *)arg1 homeUUID:(NSUUID *)arg2 forKeyPath:(NSString *)arg3;
@end

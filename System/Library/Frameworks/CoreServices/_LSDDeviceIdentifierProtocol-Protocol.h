//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@protocol _LSDDeviceIdentifierProtocol
- (void)clearAllIdentifiersOfType:(long long)arg1;
- (void)clearIdentifiersForUninstallationWithVendorName:(NSString *)arg1 bundleIdentifier:(NSString *)arg2;
- (void)generateIdentifiersWithVendorName:(NSString *)arg1 bundleIdentifier:(NSString *)arg2;
- (void)getIdentifierOfType:(long long)arg1 vendorName:(NSString *)arg2 bundleIdentifier:(NSString *)arg3 completionHandler:(void (^)(NSUUID *))arg4;
- (void)getIdentifierOfType:(long long)arg1 completionHandler:(void (^)(NSUUID *))arg2;
@end


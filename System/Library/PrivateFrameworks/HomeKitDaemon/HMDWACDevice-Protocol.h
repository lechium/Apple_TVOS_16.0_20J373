//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSUUID;

@protocol HMDWACDevice
@property(readonly, nonatomic) id underlyingDevice;
@property(readonly, nonatomic) _Bool supportsAirPlay2;
@property(readonly, nonatomic) _Bool isConfigured;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *ssid;
@property(readonly, nonatomic) NSString *deviceID;
@property(readonly, nonatomic) NSUUID *identifier;
- (void)cancelConfigurationWithCompletionHandler:(void (^)(void))arg1;
- (void)startConfigurationWithCompletionHandler:(void (^)(NSError *))arg1;
@end


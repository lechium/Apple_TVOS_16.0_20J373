//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/NSObject-Protocol.h>

@class HKHealthStoreConfiguration;

@protocol HDHealthStoreEndpointInterface <NSObject>
- (void)remote_serverForConfiguration:(HKHealthStoreConfiguration *)arg1 completion:(void (^)(id <HDHealthStoreServerInterface>, NSError *))arg2;
@end


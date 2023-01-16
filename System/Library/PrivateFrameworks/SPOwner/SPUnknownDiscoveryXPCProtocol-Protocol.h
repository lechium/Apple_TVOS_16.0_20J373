//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SPOwner/NSObject-Protocol.h>

@class SPUnknownBeacon;

@protocol SPUnknownDiscoveryXPCProtocol <NSObject>
- (void)fetchEncryptedPayloadForUnknownBeacon:(SPUnknownBeacon *)arg1 completion:(void (^)(NSURL *))arg2;
- (void)stopUnknownDiscoveryWithCompletion:(void (^)(NSError *))arg1;
- (void)startDiscoveryWithScanRate:(long long)arg1 timeout:(double)arg2 completion:(void (^)(NSError *))arg3;
- (void)startUnknownDiscoveryWithCompletion:(void (^)(NSError *))arg1;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/NSObject-Protocol.h>

@protocol HAPAccessoryReachabilityDelegate, HAPAccessoryReachabilityProfile;

@protocol HAPAccessoryReachabilityClient <NSObject>
@property(copy, nonatomic) id <HAPAccessoryReachabilityProfile> profile;
@property(nonatomic) __weak id <HAPAccessoryReachabilityDelegate> delegate;
- (void)kick;
- (void)confirm;
- (_Bool)isRunning;
- (void)stopWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)startWithCompletionHandler:(void (^)(NSError *))arg1;
@end


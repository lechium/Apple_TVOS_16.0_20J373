//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSString;

@protocol SNOperator
- (void)processTerminationWithOptionalError:(NSError *)arg1 portID:(NSString *)arg2 downstreamHandler:(void (^)(NSString *, id, NSError *))arg3;
- (void)processInput:(id)arg1 portID:(NSString *)arg2 downstreamHandler:(void (^)(NSString *, id, NSError *))arg3;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeStreams/BMFileServer-Protocol.h>

@class NSString;

@protocol BMStreamsAccessRequestProtocol <BMFileServer>
- (void)requestBiomeEndpoint:(_Bool)arg1 reply:(void (^)(NSXPCListenerEndpoint *, NSError *))arg2;
- (void)requestAccessToFlexibleStorageWithReply:(void (^)(NSData *, NSError *))arg1;
- (void)requestAccess:(unsigned long long)arg1 streamIdentifier:(NSString *)arg2 streamType:(unsigned long long)arg3 reply:(void (^)(NSData *, NSError *))arg4;
@end


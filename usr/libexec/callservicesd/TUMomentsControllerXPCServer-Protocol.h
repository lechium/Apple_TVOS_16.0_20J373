//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;
@protocol TUMomentsControllerXPCClient;

@protocol TUMomentsControllerXPCServer <NSObject>
- (void)unregisterClient:(id <TUMomentsControllerXPCClient>)arg1;
- (void)registerClient:(id <TUMomentsControllerXPCClient>)arg1;
- (oneway void)endRequestWithTransactionID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (oneway void)startRequestWithMediaType:(int)arg1 forStreamToken:(long long)arg2 requesteeID:(NSString *)arg3 reply:(void (^)(NSString *, NSError *))arg4;
- (oneway void)unregisterStreamToken:(long long)arg1 reply:(void (^)(NSError *))arg2;
- (oneway void)registerStreamToken:(long long)arg1 requesterID:(NSString *)arg2 remoteIDSDestinations:(NSDictionary *)arg3 remoteMomentsAvailable:(_Bool)arg4 reply:(void (^)(TUMomentsCapabilities *, NSError *))arg5;
- (oneway void)registerXPCClientWithReply:(void (^)(void))arg1;
@end


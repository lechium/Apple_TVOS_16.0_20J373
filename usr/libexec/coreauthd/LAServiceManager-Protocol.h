//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString, NSXPCConnection;

@protocol LAServiceManager <NSObject>
- (void)shutdownSessionsWithMatchingID:(NSString *)arg1;
- (void)bootstrapSessionServiceType:(NSString *)arg1 clientID:(NSString *)arg2 completionHandler:(void (^)(NSXPCListenerEndpoint *, NSError *))arg3;
- (void)bootstrapSessionServiceType:(NSString *)arg1 clientID:(NSString *)arg2 clientConnection:(NSXPCConnection *)arg3 completionHandler:(void (^)(NSXPCListenerEndpoint *, NSError *))arg4;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSData, UVPropertyList;

@protocol UVDaemonServiceProtocol <NSObject>
- (oneway void)grantExecutePermissionToAgentIdentifierPayload:(UVPropertyList *)arg1 usingData:(NSData *)arg2 replyHandler:(void (^)(NSError *))arg3;
- (oneway void)copyURLToAgentIdentifierPayload:(UVPropertyList *)arg1 usingData:(NSData *)arg2 replyHandler:(void (^)(NSString *, NSError *))arg3;
- (oneway void)sendPreviewServiceMessage:(UVPropertyList *)arg1 replyHandler:(void (^)(UVPropertyList *, NSError *))arg2;
@end


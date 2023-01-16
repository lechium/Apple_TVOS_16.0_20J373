//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GPUToolsTransport/GTXPCDispatcher-Protocol.h>

@class NSObject;
@protocol GTXPCConnection, OS_xpc_object;

@protocol GTDataProviderServiceXPCDispatcher <GTXPCDispatcher>
- (void)getData_:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;
- (void)uploadFragment_forHandle_completionHandler_:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;
@end

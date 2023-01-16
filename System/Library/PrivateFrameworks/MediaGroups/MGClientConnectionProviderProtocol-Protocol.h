//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaGroups/NSObject-Protocol.h>

@class NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@protocol MGClientConnectionProviderProtocol <NSObject>
- (NSXPCConnection *)serviceConnection;
- (NSObject<OS_dispatch_queue> *)dispatchQueue;
- (NSString *)serviceName;
@end


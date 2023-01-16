//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PDS/NSObject-Protocol.h>

@protocol PDSRemote, PDSRemoteInternal;

@protocol PDSRemoteVendor <NSObject>
- (id <PDSRemoteInternal>)internalRemoteObjectProxyWithError:(id *)arg1;
- (id <PDSRemoteInternal>)synchronousInternalRemoteObjectProxyWithErrorHandler:(void (^)(NSError *))arg1;
- (id <PDSRemote>)remoteObjectProxyWithError:(id *)arg1;
- (id <PDSRemote>)synchronousRemoteObjectProxyWithErrorHandler:(void (^)(NSError *))arg1;
- (_Bool)validateConnectionWithError:(id *)arg1;
@end


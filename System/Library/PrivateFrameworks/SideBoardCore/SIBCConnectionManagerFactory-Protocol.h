//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMConnectivityNetworkConnection, NSObject, NSString, NSUUID, SIBCConnection;
@protocol OS_dispatch_queue;

@protocol SIBCConnectionManagerFactory
- (SIBCConnection *)createConnectionWithNwConnection:(HMConnectivityNetworkConnection *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 endpointIdentifier:(NSUUID *)arg3 applicationName:(NSString *)arg4;
@end


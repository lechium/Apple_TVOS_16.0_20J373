//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMFDumpState-Protocol.h>
#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMDDevice, HMDRemoteMessage, HMDRemoteMessageTransport, HMFMessage;
@protocol HMFMessageTransportDelegate;

@protocol HMDSecureRemoteSession <NSObject, HMFDumpState>
@property __weak id <HMFMessageTransportDelegate> delegate;
@property(readonly) HMDDevice *device;
- (void)receivedSecureMessage:(HMDRemoteMessage *)arg1 fromDevice:(HMDDevice *)arg2 fromTransport:(HMDRemoteMessageTransport *)arg3;
- (void)sendMessage:(HMFMessage *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)close;
- (void)openWithCompletionHandler:(void (^)(NSError *))arg1;
@end

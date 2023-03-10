//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ICExternalSharedListeningConnectionController
{
    NSXPCConnection *_xpcConnection;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001a2774
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)receiveMessageData:(id)arg1;	// IMP=0x00000000001a25f0
- (void)receiveFatalError:(id)arg1;	// IMP=0x00000000001a24ee
- (void)receiveConnectionError:(id)arg1;	// IMP=0x00000000001a23ec
- (void)receiveStartWithSessionIdentifier:(id)arg1 sessionToken:(id)arg2 inviteURLString:(id)arg3;	// IMP=0x00000000001a2293
- (void)sendMessage:(id)arg1;	// IMP=0x00000000001a21ac
- (void)stop;	// IMP=0x00000000001a210c
- (void)start;	// IMP=0x00000000001a1fda
- (void)_initializeConnectionIfNeeded;	// IMP=0x00000000001a1be9
- (void)dealloc;	// IMP=0x00000000001a1b7e
- (id)initWithSessionIdentifier:(id)arg1 identity:(id)arg2 bundleID:(id)arg3;	// IMP=0x00000000001a1af5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


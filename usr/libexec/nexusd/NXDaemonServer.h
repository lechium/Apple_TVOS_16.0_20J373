//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CULiveAudioServer, NSMutableArray, NSMutableSet;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface NXDaemonServer : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    CULiveAudioServer *_liveAudioServer;	// 16 = 0x10
    NSMutableSet *_xpcConnections;	// 24 = 0x18
    NSObject<OS_xpc_object> *_xpcListener;	// 32 = 0x20
    _Bool _xpcLiveAudioRegistered;	// 40 = 0x28
    _Bool _xpcLiveAudioBusy;	// 41 = 0x29
    NSMutableArray *_xpcLiveAudioRequests;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000002512
@property(retain, nonatomic) NSMutableArray *xpcLiveAudioRequests; // @synthesize xpcLiveAudioRequests=_xpcLiveAudioRequests;
@property(nonatomic) _Bool xpcLiveAudioBusy; // @synthesize xpcLiveAudioBusy=_xpcLiveAudioBusy;
- (void)_xpcLiveActionProcessPending;	// IMP=0x0010000000002406
- (void)xpcConnectionInvalidated:(id)arg1;	// IMP=0x0010000000002367
- (void)_xpcConnectionAccept:(id)arg1;	// IMP=0x00100000000021cf
- (void)_xpcListenerEvent:(id)arg1;	// IMP=0x00100000000020c7
- (void)_liveAudioEnsureStopped;	// IMP=0x001000000000203f
- (void)_liveAudioEnsureStarted:(id)arg1;	// IMP=0x0010000000001ed2
- (void)invalidate;	// IMP=0x0010000000001ce2
- (void)activate;	// IMP=0x0010000000001bbd
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x001000000000195c
- (id)description;	// IMP=0x0010000000001945
- (id)init;	// IMP=0x00100000000018b1

@end


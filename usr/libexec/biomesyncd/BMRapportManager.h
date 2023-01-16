//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, RPCompanionLinkClient;
@protocol BMRapportManagerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface BMRapportManager : NSObject
{
    RPCompanionLinkClient *_discoveryClient;	// 8 = 0x8
    unsigned long long _discoveryClientState;	// 16 = 0x10
    NSMutableDictionary *_devices;	// 24 = 0x18
    NSMutableDictionary *_unsupportedDevices;	// 32 = 0x20
    _Bool _sharedUse;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_sigtermSource;	// 48 = 0x30
    id <BMRapportManagerDelegate> _delegate;	// 56 = 0x38
    NSMutableDictionary *_registeredRequests;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000001bf26
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *registeredRequests; // @synthesize registeredRequests=_registeredRequests;
@property(nonatomic) __weak id <BMRapportManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)localDeviceUpdated:(id)arg1;	// IMP=0x001000000001be40
- (void)didLoseDevice:(id)arg1;	// IMP=0x001000000001bc42
- (void)didDiscoverDevice:(id)arg1;	// IMP=0x001000000001b674
- (void)device:(id)arg1 didChange:(unsigned int)arg2;	// IMP=0x001000000001aebd
- (void)finishedSendingRequestsToDevice:(id)arg1;	// IMP=0x001000000001ada8
- (void)sendNextRequestToDevice:(id)arg1;	// IMP=0x001000000001a7ad
- (void)handleInterruptionForDevice:(id)arg1;	// IMP=0x001000000001a6aa
- (void)handleActivationForDevice:(id)arg1 error:(id)arg2;	// IMP=0x001000000001a3a7
- (void)invalidateDirectLinkToDevice:(id)arg1;	// IMP=0x001000000001a390
- (void)activateDirectLinkToDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000019e47
- (void)sendEvent:(id)arg1 event:(id)arg2 toDevice:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000199da
- (void)sendRequest:(id)arg1 request:(id)arg2 device:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000191b9
- (void)sendRequest:(id)arg1 request:(id)arg2 toDevice:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000019197
- (void)stop;	// IMP=0x0010000000018fb1
- (id)deviceWithIdentifier:(id)arg1;	// IMP=0x0010000000018d52
- (id)localDevice;	// IMP=0x0010000000018cdf
- (id)discoveredDevices;	// IMP=0x0010000000018cb6
- (void)start;	// IMP=0x0010000000018c81
- (void)registerEventID:(id)arg1 eventHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000018b6a
- (void)registerRequestID:(id)arg1 requestHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000018a88
- (void)handleDiscoveryClientInvalidation;	// IMP=0x00100000000187ee
- (void)handleDiscoveryClientActivationOrError:(id)arg1;	// IMP=0x00100000000185e4
- (void)activateDiscoveryClientWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000182b9
- (void)activateDiscoveryLinkWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000018255
- (void)createDiscoveryClientWithControlFlags:(unsigned long long)arg1;	// IMP=0x0010000000017dc0
- (void)createSharedDiscoveryClientIfNotExists;	// IMP=0x0010000000017d78
- (void)createDiscoveryClientIfNotExists;	// IMP=0x0010000000017cb6
- (void)registerForSigterm;	// IMP=0x0010000000017b9c
- (id)initWithQueue:(id)arg1 forSharedUse:(_Bool)arg2;	// IMP=0x0010000000017a6c

@end

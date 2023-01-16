//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/MRAVRoutingDiscoverySession.h>

@class IDSService, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MRDIDSDiscoverySession : MRAVRoutingDiscoverySession
{
    unsigned int _discoveryMode;	// 8 = 0x8
    _Bool _reloadScheduled;	// 12 = 0xc
    IDSService *_idsService;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workerQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000002fc24
@property(nonatomic) _Bool reloadScheduled; // @synthesize reloadScheduled=_reloadScheduled;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
@property(retain, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
- (void)_onWorkerQueue_scheduleReload;	// IMP=0x001000000002fb14
- (void)_onWorkerQueue_reload;	// IMP=0x001000000002fa65
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;	// IMP=0x001000000002fa53
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x001000000002fa41
- (id)availableOutputDevices;	// IMP=0x001000000002fa2f
- (unsigned int)discoveryMode;	// IMP=0x001000000002f9f3
- (void)setDiscoveryMode:(unsigned int)arg1;	// IMP=0x001000000002f8bd
@property(readonly, copy) NSString *debugDescription;
- (id)init;	// IMP=0x001000000002f631

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SFXPCClient.h"

@class NSHashTable, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface SFContinuityScanManager : SFXPCClient
{
    NSMutableSet *_foundDevices;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
    unsigned long long _scanTypes;	// 24 = 0x18
}

+ (id)sharedManager;	// IMP=0x0010000000047cfb
- (void).cxx_destruct;	// IMP=0x00000000000490c5
@property unsigned long long scanTypes; // @synthesize scanTypes=_scanTypes;
@property(retain) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain) NSMutableSet *foundDevices; // @synthesize foundDevices=_foundDevices;
- (_Bool)shouldEscapeXpcTryCatch;	// IMP=0x000000000004904d
- (id)remoteObjectInterface;	// IMP=0x000000000004902d
- (id)exportedInterface;	// IMP=0x0000000000048eae
- (id)machServiceName;	// IMP=0x0000000000048ea1
- (void)pairedDevicesChanged:(id)arg1;	// IMP=0x0000000000048d0c
- (void)lostDeviceWithDevice:(id)arg1;	// IMP=0x0000000000048a9d
- (void)foundDeviceWithDevice:(id)arg1;	// IMP=0x000000000004882e
- (void)receivedAdvertisement:(id)arg1;	// IMP=0x00000000000485b7
- (void)onqueue_connectionInterrupted;	// IMP=0x000000000004840d
- (void)onqueue_connectionEstablished;	// IMP=0x00000000000483a8
- (void)activityPayloadFromDeviceUniqueID:(id)arg1 forAdvertisementPayload:(id)arg2 command:(id)arg3 timeout:(long long)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000480f0
- (void)scanForTypes:(unsigned long long)arg1;	// IMP=0x0000000000047f6c
- (void)_getRemoteObjectProxyOnQueue:(CDUnknownBlockType)arg1;	// IMP=0x0000000000047f5a
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000047e8a
- (void)addObserver:(id)arg1;	// IMP=0x0000000000047e26
- (id)init;	// IMP=0x0000000000047d5d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


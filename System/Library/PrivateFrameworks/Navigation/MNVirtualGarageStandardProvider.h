//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSTimer, VGVirtualGarage;
@protocol MNVirtualGarageProviderDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MNVirtualGarageStandardProvider : NSObject
{
    id <MNVirtualGarageProviderDelegate> _delegate;	// 8 = 0x8
    _Bool _isStarted;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_updateQueue;	// 24 = 0x18
    NSTimer *_forceUpdateTimer;	// 32 = 0x20
    double _forcePeriodicUpdateInterval;	// 40 = 0x28
    VGVirtualGarage *_garage;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000efd95
@property(nonatomic) __weak id <MNVirtualGarageProviderDelegate> virtualGarageDelegate; // @synthesize virtualGarageDelegate=_delegate;
- (void)virtualGarageDidUpdate:(id)arg1;	// IMP=0x00000000000efcf9
- (void)_sendVirtualGarageUpdateForSelectedVehicle:(id)arg1;	// IMP=0x00000000000efa0f
- (void)_forceVirtualGarageSyncWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ef994
@property(readonly, nonatomic) _Bool assumesFullCharge;
@property(readonly, nonatomic) unsigned long long vehiclesCount;
- (void)updatedVehicleStateWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ef91d
- (void)stopVirtualGarageUpdates;	// IMP=0x00000000000ef917
- (void)startVirtualGarageUpdates;	// IMP=0x00000000000ef911
- (void)dealloc;	// IMP=0x00000000000ef8ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


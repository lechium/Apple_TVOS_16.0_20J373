//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPAVRoute, MPAVRoutingController, MPAVRoutingControllerSelection, MSVTimer, NSMapTable, NSMutableArray, NSMutableSet, NSSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPAVRoutingControllerSelectionQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSMutableArray *_selectionsEnqueued;	// 16 = 0x10
    MPAVRoutingControllerSelection *_selectionInProgress;	// 24 = 0x18
    NSMutableSet *_pendingRoutes;	// 32 = 0x20
    MSVTimer *_selectionInProgressTimer;	// 40 = 0x28
    NSMapTable *_pendingSelectionTimers;	// 48 = 0x30
    _Bool _hasPendingPickedRoutes;	// 56 = 0x38
    MPAVRoutingController *_routingController;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000765ae
@property(readonly, nonatomic) _Bool hasPendingPickedRoutes; // @synthesize hasPendingPickedRoutes=_hasPendingPickedRoutes;
@property(readonly, nonatomic) __weak MPAVRoutingController *routingController; // @synthesize routingController=_routingController;
- (void)_processSelection:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000075da6
- (void)_dequeue;	// IMP=0x0000000000075bfa
- (void)_dequeueSelectionWhenPossible;	// IMP=0x0000000000075baf
- (void)_enqueue:(id)arg1;	// IMP=0x000000000007535d
- (void)removePendingRoutes:(id)arg1 withError:(_Bool)arg2;	// IMP=0x000000000007505b
- (void)removePendingRoutes:(id)arg1;	// IMP=0x0000000000075044
- (void)removeAllPendingRoutes;	// IMP=0x0000000000074ff4
- (void)addPendingRoutes:(id)arg1;	// IMP=0x0000000000074cb6
- (_Bool)routeIsPendingPick:(id)arg1;	// IMP=0x0000000000074be8
@property(readonly, nonatomic) NSSet *pendingPickedRoutes;
@property(readonly, nonatomic) MPAVRoute *pendingPickedRoute;
- (void)pickedRouteDidChange;	// IMP=0x0000000000074a19
- (_Bool)hasPendingRoutes;	// IMP=0x000000000007498b
- (void)enqueueSelectionOperation:(long long)arg1 forRoutes:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000748e4
- (void)cancelInProgressSelectionForRoute:(id)arg1;	// IMP=0x00000000000745cf
- (id)initWithRoutingController:(id)arg1;	// IMP=0x00000000000744cc

@end


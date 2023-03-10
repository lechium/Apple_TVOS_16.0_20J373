//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPAVRoutingController, NSArray, NSMutableArray, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface AVSpeakerManager : NSObject
{
    _Bool _fetchingRoutes;	// 8 = 0x8
    MPAVRoutingController *_routingController;	// 16 = 0x10
    NSArray *_routes;	// 24 = 0x18
    NSMutableArray *_selectedAppleTVRouteUIDs;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000012a141
@property(retain, nonatomic) NSMutableArray *selectedAppleTVRouteUIDs; // @synthesize selectedAppleTVRouteUIDs=_selectedAppleTVRouteUIDs;
@property(readonly, copy, nonatomic) NSArray *routes; // @synthesize routes=_routes;
- (void)_updateAvailableRoutes;	// IMP=0x000000000012a05a
- (void)routingController:(id)arg1 didFailToPickRouteWithError:(id)arg2;	// IMP=0x0000000000129f9e
- (void)routingController:(id)arg1 pickedRouteDidChange:(id)arg2;	// IMP=0x0000000000129f8c
- (void)routingController:(id)arg1 pickedRoutesDidChange:(id)arg2;	// IMP=0x0000000000129f7a
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;	// IMP=0x0000000000129f1b
- (long long)compareRoute:(id)arg1 toRoute:(id)arg2;	// IMP=0x0000000000129e3f
- (void)clearPreviouslySelectedAppleTVs;	// IMP=0x0000000000129e0e
- (void)selectRoute:(id)arg1 withPassword:(id)arg2 replacingSelection:(_Bool)arg3;	// IMP=0x0000000000129b37
@property(readonly, nonatomic) NSSet *pendingRoutes;
@property(readonly, nonatomic) NSSet *selectedRoutes;
@property(readonly, nonatomic) _Bool supportsMultipleRouteSelection;
- (void)dealloc;	// IMP=0x00000000001299e8
- (id)init;	// IMP=0x0000000000129848

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


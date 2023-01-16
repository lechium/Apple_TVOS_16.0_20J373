//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSSet, NSString;
@protocol HHAEndpointFactory, HHAEndpointObserver, HHAEndpointTraitInformer, HHSiriEndpointSessionStatusProvider, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HHAEndpointMonitor : NSObject
{
    NSMutableDictionary *_endpointList;	// 8 = 0x8
    id <HHSiriEndpointSessionStatusProvider> _statusProvider;	// 16 = 0x10
    id <HHAEndpointTraitInformer> _traitInformer;	// 24 = 0x18
    id <HHAEndpointObserver> _observer;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    id <HHAEndpointFactory> _endpointFactory;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001db4a
@property(readonly, nonatomic) id <HHAEndpointFactory> endpointFactory; // @synthesize endpointFactory=_endpointFactory;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) __weak id <HHAEndpointObserver> observer; // @synthesize observer=_observer;
@property(readonly, nonatomic) __weak id <HHAEndpointTraitInformer> traitInformer; // @synthesize traitInformer=_traitInformer;
@property(readonly, nonatomic) __weak id <HHSiriEndpointSessionStatusProvider> statusProvider; // @synthesize statusProvider=_statusProvider;
@property(readonly, nonatomic) NSMutableDictionary *endpointList; // @synthesize endpointList=_endpointList;
- (void)_processEndpointStatus:(id)arg1;	// IMP=0x000000000001d7da
- (void)updateEndpointIdleStatus:(id)arg1;	// IMP=0x000000000001d5f1
@property(readonly, nonatomic) double longestTimeRequesting;
@property(readonly, nonatomic) NSSet *disabledEndpoints;
@property(readonly, nonatomic) NSSet *activeEndpoints;
@property(readonly, nonatomic) NSSet *starvingEndpoints;
@property(readonly, nonatomic) NSArray *inactiveEndpointDescriptions;
- (void)provider:(id)arg1 didUpdateEndpointWithStatus:(id)arg2;	// IMP=0x000000000001d03f
- (void)provider:(id)arg1 didRemoveEndpointWithIdentifier:(id)arg2;	// IMP=0x000000000001cf11
- (void)informer:(id)arg1 didUpdateEndpointTrait:(id)arg2;	// IMP=0x000000000001cde1
@property(readonly, nonatomic) NSSet *inactiveEndpoints;
@property(readonly, nonatomic) NSSet *unassignedEndpoints;
- (id)endpointsNotAssignedToPreferredHubs:(id)arg1;	// IMP=0x000000000001cac0
@property(readonly, nonatomic) NSSet *endpointsRequestingAssignment;
@property(readonly, nonatomic) NSSet *allEndpoints;
- (id)endpointsAssignedToHub:(id)arg1;	// IMP=0x000000000001c931
- (id)_endpointsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x000000000001c753
- (void)_requestTraitsForEndpoint:(id)arg1;	// IMP=0x000000000001c2bc
- (void)receivedTraits:(id)arg1 forEndpoint:(id)arg2;	// IMP=0x000000000001c16e
@property(readonly, nonatomic) NSArray *endpointAssignmentStatuses;
- (void)dealloc;	// IMP=0x000000000001bf97
- (void)stopMonitor;	// IMP=0x000000000001bef3
- (void)startMonitorWithObserver:(id)arg1 statusProvider:(id)arg2 traitInformer:(id)arg3 endpoints:(id)arg4;	// IMP=0x000000000001bce9
- (void)_clearEndpointList;	// IMP=0x000000000001bb99
- (id)initWithQueue:(id)arg1 endpointFactory:(id)arg2;	// IMP=0x000000000001bae6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NWConcrete_nw_endpoint_handler;
@protocol OS_nw_array, OS_nw_dictionary, OS_nw_endpoint, OS_nw_resolver;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_endpoint_resolver : NSObject
{
    NSObject<OS_nw_resolver> *resolver;	// 8 = 0x8
    int last_resolver_status;	// 16 = 0x10
    unsigned int next_child_endpoint_index;	// 20 = 0x14
    unsigned int transport_finished:1;	// 24 = 0x18
    unsigned int failed_to_start_next_child:1;	// 24 = 0x18
    unsigned int started_desperate_ivan:1;	// 24 = 0x18
    unsigned int waiting_for_desperate_ivan:1;	// 24 = 0x18
    NWConcrete_nw_endpoint_handler *connected_child;	// 32 = 0x20
    NSObject<OS_nw_array> *child_endpoint_handlers;	// 40 = 0x28
    NSObject<OS_nw_array> *failed_child_endpoint_handlers;	// 48 = 0x30
    void *child_timer;	// 56 = 0x38
    void *trigger_agent_timer;	// 64 = 0x40
    void *desperate_ivan_timer;	// 72 = 0x48
    NSObject<OS_nw_dictionary> *resolve_flow_registrations;	// 80 = 0x50
    NSObject<OS_nw_array> *path_resolved_endpoints;	// 88 = 0x58
    NSObject<OS_nw_array> *resolver_resolved_endpoints;	// 96 = 0x60
    NSObject<OS_nw_endpoint> *modified_endpoint;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000353e60
- (_Bool)applyWithHandler:(id)arg1 toChildren:(CDUnknownBlockType)arg2;	// IMP=0x0000000000353690
- (void)updatePathWithHandler:(id)arg1;	// IMP=0x00000000003530b0
- (void)cancelWithHandler:(id)arg1 forced:(_Bool)arg2;	// IMP=0x0000000000352a00
- (void)startWithHandler:(id)arg1;	// IMP=0x0000000000351f00
- (void)dealloc;	// IMP=0x0000000000351ed0
- (id)init;	// IMP=0x0000000000351be0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


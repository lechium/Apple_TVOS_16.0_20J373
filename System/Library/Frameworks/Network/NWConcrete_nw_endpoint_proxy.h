//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NWConcrete_nw_endpoint_handler;
@protocol OS_nw_array, OS_nw_error;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_endpoint_proxy : NSObject
{
    NSObject<OS_nw_array> *child_endpoint_handlers;	// 8 = 0x8
    NSObject<OS_nw_array> *failed_child_endpoint_handlers;	// 16 = 0x10
    unsigned int next_child_endpoint_index;	// 24 = 0x18
    NWConcrete_nw_endpoint_handler *connected_child;	// 32 = 0x20
    NSObject<OS_nw_array> *proxy_configs;	// 40 = 0x28
    NSObject<OS_nw_array> *parsed_proxy_configs;	// 48 = 0x30
    struct __CFURL *url;	// 56 = 0x38
    NSObject<OS_nw_array> *pac_resolvers;	// 64 = 0x40
    NSObject<OS_nw_error> *child_error;	// 72 = 0x48
    void *child_timer;	// 80 = 0x50
    unsigned int has_privacy_proxy:1;	// 88 = 0x58
    unsigned int privacy_proxy_fail_closed:1;	// 88 = 0x58
    unsigned int privacy_proxy_fail_closed_for_unreachable_hosts:1;	// 88 = 0x58
    unsigned int allow_non_privacy_proxy_children:1;	// 88 = 0x58
    unsigned int direct_prohibited:1;	// 88 = 0x58
    unsigned int synthesized_url:1;	// 88 = 0x58
    unsigned int pac_failed_missing_url:1;	// 88 = 0x58
    unsigned int overrode_to_https:1;	// 88 = 0x58
    unsigned int has_pac:1;	// 89 = 0x59
    unsigned int transport_finished:1;	// 89 = 0x59
    unsigned int proxy_flow_finished:1;	// 89 = 0x59
    unsigned int is_known_tracker:1;	// 89 = 0x59
    unsigned int is_custom_proxy:1;	// 89 = 0x59
    unsigned int is_pac_connection:1;	// 89 = 0x59
    unsigned int is_http_scheme:1;	// 89 = 0x59
    unsigned int is_https_scheme:1;	// 89 = 0x59
}

- (void).cxx_destruct;	// IMP=0x000000000030aec0
- (_Bool)applyWithHandler:(id)arg1 toChildren:(CDUnknownBlockType)arg2;	// IMP=0x000000000030a6f0
- (void)updatePathWithHandler:(id)arg1;	// IMP=0x00000000003094c0
- (void)cancelWithHandler:(id)arg1 forced:(_Bool)arg2;	// IMP=0x0000000000308b10
- (void)startWithHandler:(id)arg1;	// IMP=0x0000000000307ad0
- (void)dealloc;	// IMP=0x0000000000307aa0
- (id)init;	// IMP=0x00000000003077b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

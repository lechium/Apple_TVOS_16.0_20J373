//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_nw_agent, OS_nw_authentication_credential, OS_nw_dictionary, OS_nw_endpoint, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_proxy_config : NSObject
{
    NSObject<OS_nw_dictionary> *stacks;	// 8 = 0x8
    NSObject<OS_xpc_object> *proxied_transports;	// 16 = 0x10
    NSObject<OS_xpc_object> *required_protocols;	// 24 = 0x18
    NSObject<OS_xpc_object> *remove_protocols;	// 32 = 0x20
    NSObject<OS_nw_endpoint> *endpoint;	// 40 = 0x28
    unsigned char identifier[16];	// 48 = 0x30
    unsigned char fallback_agent_uuid[16];	// 64 = 0x40
    NSObject<OS_nw_agent> *agent;	// 80 = 0x50
    NSObject<OS_nw_authentication_credential> *credential;	// 88 = 0x58
    NSObject<OS_xpc_object> *pac_script;	// 96 = 0x60
    NSObject<OS_xpc_object> *exceptions;	// 104 = 0x68
    int mode;	// 112 = 0x70
    int type;	// 116 = 0x74
    int multipath_service;	// 120 = 0x78
    unsigned int generation;	// 124 = 0x7c
    unsigned int is_privacy_proxy:1;	// 128 = 0x80
    unsigned int privacy_proxy_fail_open:1;	// 128 = 0x80
    unsigned int prohibit_direct:1;	// 128 = 0x80
    unsigned int supports_bonjour:1;	// 128 = 0x80
    unsigned int match_address_family:1;	// 128 = 0x80
    unsigned int prohibit_unsatisfied_paths:1;	// 128 = 0x80
    unsigned int exclude_simple_hostnames:1;	// 128 = 0x80
    unsigned int force_tfo:1;	// 128 = 0x80
    unsigned int force_multipath:1;	// 129 = 0x81
    unsigned int apply_tfo:1;	// 129 = 0x81
    unsigned int disable_tfo_cookie:1;	// 129 = 0x81
    unsigned int override_opaque_https:1;	// 129 = 0x81
    unsigned int is_fallback:1;	// 129 = 0x81
}

- (void).cxx_destruct;	// IMP=0x0000000000448170
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000447f80
- (id)init;	// IMP=0x0000000000447c90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


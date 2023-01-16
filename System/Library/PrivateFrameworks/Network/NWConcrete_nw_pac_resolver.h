//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_nw_context;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_pac_resolver : NSObject
{
    CDUnknownBlockType result_block;	// 8 = 0x8
    NSObject<OS_nw_context> *context;	// 16 = 0x10
    struct __CFURL *endpointURL;	// 24 = 0x18
    struct __CFURL *pacURL;	// 32 = 0x20
    struct __CFString *pacScript;	// 40 = 0x28
    struct __CFData *auditToken;	// 48 = 0x30
    struct __CFString *bundleIdentifier;	// 56 = 0x38
    char logging_id_str[75];	// 64 = 0x40
    unsigned int https_is_opaque:1;	// 139 = 0x8b
    unsigned int use_tls:1;	// 139 = 0x8b
    unsigned int should_trust_invalid_certs:1;	// 139 = 0x8b
    unsigned int is_dry_run:1;	// 139 = 0x8b
}

- (void).cxx_destruct;	// IMP=0x000000000037f5f0
- (void)dealloc;	// IMP=0x000000000037f560
- (id)init;	// IMP=0x000000000037f270

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


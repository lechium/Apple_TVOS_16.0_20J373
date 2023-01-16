//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_nw_array, OS_nw_endpoint, OS_nw_txt_record;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_browse_result : NSObject
{
    NSObject<OS_nw_endpoint> *endpoint;	// 8 = 0x8
    NSObject<OS_nw_array> *interfaces;	// 16 = 0x10
    NSObject<OS_nw_txt_record> *txt_record;	// 24 = 0x18
    char *description;	// 32 = 0x20
    char *logging_description;	// 40 = 0x28
    struct os_unfair_lock_s lock;	// 48 = 0x30
    unsigned int immutable:1;	// 52 = 0x34
    unsigned int discovered_from_path:1;	// 52 = 0x34
    unsigned int __pad_bits:6;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x000000000000dad0
- (id)redactedDescription;	// IMP=0x000000000000da90
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000000d9c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


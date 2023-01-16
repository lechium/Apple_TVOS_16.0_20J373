//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_txt_record : NSObject
{
    char *buffer;	// 8 = 0x8
    unsigned long long data_len;	// 16 = 0x10
    unsigned long long max_data_len;	// 24 = 0x18
    struct os_unfair_lock_s lock;	// 32 = 0x20
    unsigned int is_dictionary:1;	// 36 = 0x24
    unsigned int __pad_bits:7;	// 36 = 0x24
}

@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000062b5b0
- (id)init;	// IMP=0x000000000062b2b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


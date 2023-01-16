//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_nw_array, OS_nw_error;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_content_context : NSObject
{
    unsigned char packet_id[16];	// 8 = 0x8
    char identifier[32];	// 24 = 0x18
    NWConcrete_nw_content_context *antecedent;	// 56 = 0x38
    unsigned long long expiration_milliseconds;	// 64 = 0x40
    unsigned long long enqueue_time;	// 72 = 0x48
    double relative_priority;	// 80 = 0x50
    NSObject<OS_nw_array> *protocol_metadatas;	// 88 = 0x58
    NSObject<OS_nw_error> *error;	// 96 = 0x60
    NSObject<OS_nw_array> *connection_group_info;	// 104 = 0x68
    struct os_unfair_lock_s lock;	// 112 = 0x70
    unsigned char app_type;	// 116 = 0x74
    unsigned char app_metadata;	// 117 = 0x75
    unsigned int is_final:1;	// 118 = 0x76
    unsigned int expiration_checked:1;	// 118 = 0x76
    unsigned int completed_send:1;	// 118 = 0x76
    unsigned int has_packet_id:1;	// 118 = 0x76
    unsigned int connection_group_connection:1;	// 118 = 0x76
    unsigned int connection_group_multicast:1;	// 118 = 0x76
    unsigned int supports_replies:1;	// 118 = 0x76
    unsigned int is_wake_packet:1;	// 118 = 0x76
    unsigned int has_app_metadata:1;	// 119 = 0x77
}

- (void).cxx_destruct;	// IMP=0x00000000004c78a0
- (id)redactedDescription;	// IMP=0x00000000004c7880
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000004c7800

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


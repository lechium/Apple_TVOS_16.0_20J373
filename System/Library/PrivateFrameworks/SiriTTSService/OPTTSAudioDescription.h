//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OPTTSAudioDescription : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct AudioDescription *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001ed83
- (id)flatbuffData;	// IMP=0x000000000001ec41
- (Offset_407e0587)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000001eabf
@property(readonly, nonatomic) unsigned int reserved;
@property(readonly, nonatomic) unsigned int bits_per_channel;
@property(readonly, nonatomic) unsigned int channels_per_frame;
@property(readonly, nonatomic) unsigned int bytes_per_frame;
@property(readonly, nonatomic) unsigned int frames_per_packet;
@property(readonly, nonatomic) unsigned int bytes_per_packet;
@property(readonly, nonatomic) unsigned int format_flags;
@property(readonly, nonatomic) unsigned int format_id;
@property(readonly, nonatomic) double sample_rate;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001e92e
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AudioDescription *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000001e751
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AudioDescription *)arg2;	// IMP=0x000000000001e73b
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000001e720
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000001e708
- (struct AudioStreamBasicDescription)audioStreamBasicDescription;	// IMP=0x000000000002a143

@end


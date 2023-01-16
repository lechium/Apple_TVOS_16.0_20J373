//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCAudioCaptionsBufferInfo : NSObject
{
    struct AudioStreamBasicDescription _format;	// 8 = 0x8
    struct opaqueVCAudioBufferList *_buffer;	// 48 = 0x30
    unsigned char _priority;	// 56 = 0x38
    unsigned int _countOfLowPrioritySamples;	// 60 = 0x3c
    long long _token;	// 64 = 0x40
}

@property(readonly, nonatomic) struct AudioStreamBasicDescription format; // @synthesize format=_format;
@property(readonly, nonatomic) unsigned int countOfLowPrioritySamples; // @synthesize countOfLowPrioritySamples=_countOfLowPrioritySamples;
@property(readonly, nonatomic) unsigned char priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) long long token; // @synthesize token=_token;
- (unsigned long long)hash;	// IMP=0x000000000024e5ab
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000024e516
- (id)description;	// IMP=0x000000000024e4c1
- (void)dealloc;	// IMP=0x000000000024e45d
- (id)initWithStreamToken:(long long)arg1 format:(struct AudioStreamBasicDescription)arg2 bufferLength:(double)arg3;	// IMP=0x000000000024e22a

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIOldCGImageDecompressor;

__attribute__((visibility("hidden")))
@interface _UIImageAsyncCGImageContent
{
    long long _orientation;	// 48 = 0x30
    _Bool _finishedDecompressing;	// 56 = 0x38
    _UIOldCGImageDecompressor *_decompressor;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000005bb7cf
@property _Bool finishedDecompressing; // @synthesize finishedDecompressing=_finishedDecompressing;
@property(readonly) long long orientation;
- (struct CGImage *)CGImage;	// IMP=0x00000000005bb6a0
- (_Bool)isDecompressing;	// IMP=0x00000000005bb67a
- (unsigned long long)hash;	// IMP=0x00000000005bb600
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005bb456
- (id)description;	// IMP=0x00000000005bb388
- (id)initWithData:(id)arg1 immediateLoadWithMaxSize:(struct CGSize)arg2 scale:(double)arg3 renderingIntent:(unsigned long long)arg4 cache:(_Bool)arg5;	// IMP=0x00000000005bb262

@end


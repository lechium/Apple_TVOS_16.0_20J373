//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage;

__attribute__((visibility("hidden")))
@interface _UIImageCIImageContent
{
    CIImage *_ciImage;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000005bbd4a
- (void)_drawWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3 effect:(id)arg4;	// IMP=0x00000000005bbab9
- (void)_prepareForDrawingWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3;	// IMP=0x00000000005bba87
- (id)description;	// IMP=0x00000000005bba57
- (unsigned long long)hash;	// IMP=0x00000000005bba3a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005bb9ce
- (struct CGSize)sizeInPixels;	// IMP=0x00000000005bb97e
- (_Bool)canEmitDrawingCommands;	// IMP=0x00000000005bb976
- (_Bool)canScaleImageToTargetResolution;	// IMP=0x00000000005bb96e
- (_Bool)isCIImage;	// IMP=0x00000000005bb966
- (id)CIImage;	// IMP=0x00000000005bb951
- (id)initWithScale:(double)arg1;	// IMP=0x00000000005bb8ca
- (id)initWithCIImage:(id)arg1 scale:(double)arg2;	// IMP=0x00000000005bb7e2

@end

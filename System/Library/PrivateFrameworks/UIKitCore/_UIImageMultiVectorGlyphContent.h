//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIImageMultiVectorGlyphContent
{
    NSArray *_glyphs;	// 40 = 0x28
    NSArray *_colors;	// 48 = 0x30
    NSArray *_offsets;	// 56 = 0x38
    NSArray *_scaleFactors;	// 64 = 0x40
    struct CGSize _sizeInPixels;	// 72 = 0x48
    struct CGPoint _anchorPoint;	// 88 = 0x58
    struct CGImage *_imageRef;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000005bf794
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005bf646
- (id)description;	// IMP=0x00000000005bf3b8
- (void)_drawWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3 effect:(id)arg4;	// IMP=0x00000000005bed3e
- (void)_prepareForDrawingWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3;	// IMP=0x00000000005beca2
- (struct CGImage *)CGImage;	// IMP=0x00000000005beaba
- (double)vectorScale;	// IMP=0x00000000005beaac
- (struct CGSize)sizeInPixels;	// IMP=0x00000000005bea94
- (_Bool)containsNamedColorStyles;	// IMP=0x00000000005bea8c
- (_Bool)isVectorGlyph;	// IMP=0x00000000005bea84
- (_Bool)canEmitDrawingCommands;	// IMP=0x00000000005bea7c
- (_Bool)canScaleImageToTargetResolution;	// IMP=0x00000000005bea74
- (_Bool)canDrawImage;	// IMP=0x00000000005bea6c
- (_Bool)isCGImage;	// IMP=0x00000000005bea64
- (void)dealloc;	// IMP=0x00000000005bea1e
- (id)initWithScale:(double)arg1;	// IMP=0x00000000005be997
- (id)initWithSize:(struct CGSize)arg1 glyphs:(id)arg2 colors:(id)arg3 offsets:(id)arg4 scaleFactors:(id)arg5 anchorPoint:(struct CGPoint)arg6;	// IMP=0x00000000005be725

@end

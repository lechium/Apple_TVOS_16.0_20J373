//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CUINamedVectorGlyph, _UIImageContent;

__attribute__((visibility("hidden")))
@interface _UIImageCUIVectorGlyphContent
{
    CUINamedVectorGlyph *_vectorGlyph;	// 40 = 0x28
    _UIImageContent *_vectorContent;	// 48 = 0x30
    double _glyphScaleFactor;	// 56 = 0x38
    double _vectorScale;	// 64 = 0x40
    struct CGSize _sizeInPixels;	// 72 = 0x48
    struct CGImage *_overrideImageRef;	// 88 = 0x58
    _Atomic id _isMultiColor;	// 96 = 0x60
    _Atomic id _numberOfHierarchyLayers;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000005be63d
@property(nonatomic) double glyphScaleFactor; // @synthesize glyphScaleFactor=_glyphScaleFactor;
- (void)dealloc;	// IMP=0x00000000005be5e5
- (void)_drawVectorGlyphWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3 paletteColors:(id)arg4;	// IMP=0x00000000005be3ee
- (struct CGImage *)_provideVectorGlyphCGImageWithSize:(struct CGSize)arg1 scale:(double)arg2 paletteColors:(id)arg3;	// IMP=0x00000000005be23f
- (void)_drawVectorGlyphWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3 hierarchicalColorResolver:(CDUnknownBlockType)arg4;	// IMP=0x00000000005bdfea
- (struct CGImage *)_provideVectorGlyphCGImageWithSize:(struct CGSize)arg1 scale:(double)arg2 hierarchicalColorResolver:(CDUnknownBlockType)arg3;	// IMP=0x00000000005bddf1
- (void)_drawVectorGlyphWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3 namedColorResolver:(CDUnknownBlockType)arg4;	// IMP=0x00000000005bdb89
- (struct CGImage *)_provideVectorGlyphCGImageWithSize:(struct CGSize)arg1 scale:(double)arg2 namedColorResolver:(CDUnknownBlockType)arg3;	// IMP=0x00000000005bd97d
- (struct CGImage *)_provideCGImageWithSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x00000000005bd899
- (void)_drawWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3 effect:(id)arg4;	// IMP=0x00000000005bd86a
- (void)_prepareForDrawingWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3;	// IMP=0x00000000005bd7f6
- (struct CGSize)sizeInPixels;	// IMP=0x00000000005bd7de
- (id)_automaticSymbolConfiguration;	// IMP=0x00000000005bd615
- (double)variableValue;	// IMP=0x00000000005bd5f8
- (unsigned long long)numberOfHierarchyLayers;	// IMP=0x00000000005bd552
- (_Bool)containsNamedColorStyle:(id)arg1;	// IMP=0x00000000005bd514
- (_Bool)containsNamedColorStyles;	// IMP=0x00000000005bd46d
- (id)contentWithVariableValue:(double)arg1;	// IMP=0x00000000005bd369
- (id)contentWithCGImage:(struct CGImage *)arg1;	// IMP=0x00000000005bd2eb
- (id)vectorGlyph;	// IMP=0x00000000005bd2d6
- (_Bool)isVectorGlyph;	// IMP=0x00000000005bd2c1
- (struct CGImage *)CGImage;	// IMP=0x00000000005bd292
- (_Bool)_canProvideCGImageDirectly;	// IMP=0x00000000005bd28a
- (_Bool)canEmitDrawingCommands;	// IMP=0x00000000005bd282
- (_Bool)canScaleImageToTargetResolution;	// IMP=0x00000000005bd27a
- (_Bool)canDrawImage;	// IMP=0x00000000005bd272
- (_Bool)isCGImage;	// IMP=0x00000000005bd26a
- (id)description;	// IMP=0x00000000005bd1da
- (unsigned long long)hash;	// IMP=0x00000000005bd1bd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005bd106
- (id)outlinePath;	// IMP=0x00000000005bd0b9
- (double)vectorScale;	// IMP=0x00000000005bd0ab
- (id)initWithScale:(double)arg1;	// IMP=0x00000000005bd012
- (id)initWithCUIVectorGlyph:(id)arg1 scale:(double)arg2;	// IMP=0x00000000005bce86

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CUINamedVectorGlyph.h"

@class CUIVectorGlyphGraphicVariantOptions;

__attribute__((visibility("hidden")))
@interface _CUIGraphicVariantVectorGlyph : CUINamedVectorGlyph
{
    CUIVectorGlyphGraphicVariantOptions *_options;	// 184 = 0xb8
}

@property(retain, nonatomic) CUIVectorGlyphGraphicVariantOptions *options; // @synthesize options=_options;
- (id)_createShapeEffectsForTargetSize:(struct CGSize)arg1 scale:(double *)arg2;	// IMP=0x000000000001fcf6
- (id)_createContentEffectsForTargetSize:(struct CGSize)arg1 scale:(double *)arg2;	// IMP=0x000000000001fb77
- (void)_drawBackgroundShapeInContext:(struct CGContext *)arg1 targetSize:(struct CGSize)arg2 scale:(double)arg3;	// IMP=0x000000000001f58d
- (struct CGRect)_backgroundShapeBoundsForTargetSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x000000000001f461
- (struct CGGradient *)_createBackgroundGradientWithColors:(id)arg1;	// IMP=0x000000000001f070
- (struct CGPath *)_createBackgroundShapeInRect:(struct CGRect)arg1 scale:(double)arg2;	// IMP=0x000000000001ef23
- (struct CGImage *)_createBackgroundImageOfSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x000000000001edc1
- (struct CGImage *)_createGraphicVariantImageAtScale:(double)arg1 backgroundImage:(struct CGImage *)arg2 symbolImage:(struct CGImage *)arg3 destinationRect:(struct CGRect)arg4 disableColorFill:(_Bool)arg5 outputScale:(double)arg6;	// IMP=0x000000000001ea74
- (struct CGRect)_scaledContentRectForBackgroundSize:(struct CGSize)arg1 safeContentArea:(struct CGRect)arg2;	// IMP=0x000000000001e4a3
- (struct CGRect)_safeContentAreaBoundsForBackgroundSize:(struct CGSize)arg1;	// IMP=0x000000000001e3a4
- (long long)_effectiveCenteringStyle;	// IMP=0x000000000001e356
- (struct CGRect)_safeContentAreaBounds;	// IMP=0x000000000001e30c
- (struct CGSize)_sizeOfBackgroundShape;	// IMP=0x000000000001e258
- (void)drawInContext:(struct CGContext *)arg1 withPaletteColors:(id)arg2;	// IMP=0x000000000001e170
- (struct CGImage *)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(struct CGSize)arg2 withPaletteColors:(id)arg3;	// IMP=0x000000000001df0a
- (struct CGImage *)imageWithPaletteColors:(id)arg1;	// IMP=0x000000000001deaa
- (void)drawPaletteLayerAtIndex:(unsigned long long)arg1 inContext:(struct CGContext *)arg2 withColorResolver:(CDUnknownBlockType)arg3;	// IMP=0x000000000001ddc2
- (struct CGImage *)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(struct CGSize)arg2 withPaletteColorResolver:(CDUnknownBlockType)arg3;	// IMP=0x000000000001dc27
- (struct CGImage *)imageWithPaletteColorResolver:(CDUnknownBlockType)arg1;	// IMP=0x000000000001dbc7
- (void)drawHierarchyLayerAtIndex:(unsigned long long)arg1 inContext:(struct CGContext *)arg2 withColorResolver:(CDUnknownBlockType)arg3;	// IMP=0x000000000001dadf
- (unsigned long long)numberOfHierarchyLayers;	// IMP=0x000000000001dad4
- (struct CGImage *)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(struct CGSize)arg2 withHierarchyColorResolver:(CDUnknownBlockType)arg3;	// IMP=0x000000000001d93c
- (struct CGImage *)imageWithHierarchyColorResolver:(CDUnknownBlockType)arg1;	// IMP=0x000000000001d8dc
- (void)drawMulticolorLayerAtIndex:(unsigned long long)arg1 inContext:(struct CGContext *)arg2 withColorResolver:(CDUnknownBlockType)arg3;	// IMP=0x000000000001d7f4
- (unsigned long long)numberOfMulticolorLayers;	// IMP=0x000000000001d7e9
- (struct CGImage *)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(struct CGSize)arg2 withColorResolver:(CDUnknownBlockType)arg3;	// IMP=0x000000000001d64e
- (struct CGImage *)imageWithColorResolver:(CDUnknownBlockType)arg1;	// IMP=0x000000000001d5ee
- (void)drawInContext:(struct CGContext *)arg1;	// IMP=0x000000000001d511
- (struct CGImage *)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(struct CGSize)arg2;	// IMP=0x000000000001d38a
- (struct CGImage *)image;	// IMP=0x000000000001d32b
- (const struct CGPath *)CGPath;	// IMP=0x000000000001d01f
- (_Bool)_containsWideGamutColor;	// IMP=0x000000000001cedc
- (struct CGRect)interiorAlignmentRectForTargetSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x000000000001cde9
- (struct CGRect)interiorAlignmentRectUnrounded;	// IMP=0x000000000001cd97
- (struct CGRect)interiorAlignmentRect;	// IMP=0x000000000001ccb5
- (struct CGRect)contentBounds;	// IMP=0x000000000001cc18
- (struct CGRect)contentBoundsUnrounded;	// IMP=0x000000000001cbd9
- (struct CGRect)alignmentRectForTargetSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x000000000001cb2f
- (struct CGRect)alignmentRectUnrounded;	// IMP=0x000000000001cadd
- (struct CGRect)alignmentRect;	// IMP=0x000000000001c9fb
- (double)baselineOffset;	// IMP=0x000000000001c9a5
- (double)baselineOffsetUnrounded;	// IMP=0x000000000001c924
- (id)graphicVariantWithOptions:(id)arg1;	// IMP=0x000000000001c8a5
- (void)dealloc;	// IMP=0x000000000001c863
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001c7f2
- (id)_initWithBaseGlyph:(id)arg1 options:(id)arg2;	// IMP=0x000000000001c5a8

@end

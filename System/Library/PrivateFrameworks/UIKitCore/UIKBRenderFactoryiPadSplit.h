//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIKBRenderFactoryiPadSplit
{
}

- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;	// IMP=0x00000000008fa179
- (void)_customizeSymbolStyle:(id)arg1 forKey:(id)arg2 contents:(id)arg3;	// IMP=0x00000000008f9fe9
- (id)variantGeometriesForGeometry:(id)arg1 variantCount:(unsigned long long)arg2 rowLimit:(long long)arg3 annotationIndex:(unsigned long long)arg4;	// IMP=0x00000000008f9d7a
- (void)_customizeGeometry:(id)arg1 forKey:(id)arg2 contents:(id)arg3;	// IMP=0x00000000008f9c6a
- (double)_row4ControlSegmentWidthLeft;	// IMP=0x00000000008f9c5c
- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4;	// IMP=0x00000000008f9b09
- (double)keyInsetBottom;	// IMP=0x00000000008f9ac8
- (double)symbolFrameInset;	// IMP=0x00000000008f9aba
- (double)defaultPathWeight;	// IMP=0x00000000008f9aac
- (id)backgroundTraitsForKeyplane:(id)arg1;	// IMP=0x00000000008f9906
- (_Bool)supportsInputTraits:(id)arg1 forKeyplane:(id)arg2;	// IMP=0x00000000008f98fe
- (double)variantAnnotationTextFontSize;	// IMP=0x00000000008f98f0
- (struct CGPoint)variantAnnotationTextOffset;	// IMP=0x00000000008f98df
- (double)skinnyKeyThreshold;	// IMP=0x00000000008f98d1
- (double)symbolImageControlKeyFontSize;	// IMP=0x00000000008f98c3
- (double)keyCornerRadius;	// IMP=0x00000000008f98b5
- (id)muttitapReverseKeyImageName;	// IMP=0x00000000008f987c
- (id)multitapCompleteKeyImageName;	// IMP=0x00000000008f9843
- (struct CGPoint)shiftKeyOffset;	// IMP=0x00000000008f980f
- (struct CGPoint)deleteKeyOffset;	// IMP=0x00000000008f97db
- (struct CGPoint)dismissKeyOffset;	// IMP=0x00000000008f97af
- (struct CGPoint)internationalKeyOffset;	// IMP=0x00000000008f9783

@end

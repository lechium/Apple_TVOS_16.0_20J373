//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIBoundingPathBitmap;

__attribute__((visibility("hidden")))
@interface _UIComplexBoundingPath
{
    double _scale;	// 8 = 0x8
    long long _orientation;	// 16 = 0x10
    _UIBoundingPathBitmap *_bitmap;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000007b3e64
- (void).cxx_destruct;	// IMP=0x00000000007bb152
- (id)_imageRepresentation;	// IMP=0x00000000007bad75
- (id)description;	// IMP=0x00000000007bac99
- (struct UIEdgeInsets)_centerEdgeInsetsOfBoundingPathAndRect:(struct CGRect)arg1;	// IMP=0x00000000007ba9a5
- (struct CGRect)_rectTuckedAgainstEdge:(unsigned long long)arg1 ofBoundingPathAndRect:(struct CGRect)arg2 withSize:(double)arg3 cornerRadii:(struct UIRectCornerRadii)arg4 minimumPadding:(double)arg5;	// IMP=0x00000000007ba39c
- (struct CGRect)_portaitPixelRectWithPixelMinimumPaddingFromBoundingPath:(double)arg1 againstPortraitEdge:(unsigned long long)arg2 fromPortraitPixelRect:(struct CGRect)arg3 withPortraitPixelCornerRadii:(struct _UIIntegralCornerRadii)arg4;	// IMP=0x00000000007b8cc1
- (struct CGRect)_rectTuckedInCorner:(unsigned long long)arg1 ofBoundingPathAndRect:(struct CGRect)arg2 withSize:(struct CGSize)arg3 cornerRadii:(struct UIRectCornerRadii)arg4 minimumPadding:(double)arg5;	// IMP=0x00000000007b86a8
- (struct CGRect)_portaitPixelRectWithPixelMinimumPaddingFromBoundingPath:(double)arg1 inPortaitCorner:(unsigned long long)arg2 fromPortraitPixelRect:(struct CGRect)arg3 withPortraitPixelCornerRadii:(struct _UIIntegralCornerRadii)arg4;	// IMP=0x00000000007b718d
- (struct CGRect)_largestInscribedRectInBoundingPathAndRect:(struct CGRect)arg1 withCenter:(struct CGPoint)arg2 aspectRatio:(double)arg3;	// IMP=0x00000000007b6c4c
- (struct CGRect)_largestInscribedPortraitPixelRectInBoundingPathWithPortraitPixelRect:(struct CGRect)arg1 portraitAspectRatio:(double)arg2;	// IMP=0x00000000007b63a3
- (struct CGRect)_inscribedRectInBoundingPathAndRect:(struct CGRect)arg1 byInsettingRect:(struct CGRect)arg2 onEdges:(unsigned long long)arg3 withOptions:(unsigned long long)arg4;	// IMP=0x00000000007b5cfa
- (struct _UIIntegralRect)_rectByVerticallyInsettingPortraitPixelRect:(struct _UIIntegralRect)arg1 onPortraitEdges:(unsigned long long)arg2 performCompleteTest:(_Bool)arg3;	// IMP=0x00000000007b5912
- (struct _UIIntegralRect)_rectByHorizontallyInsettingPortraitPixelRect:(struct _UIIntegralRect)arg1 onPortraitEdges:(unsigned long long)arg2 performCompleteTest:(_Bool)arg3;	// IMP=0x00000000007b5353
- (_Bool)isNonRectangular;	// IMP=0x00000000007b534b
- (void)setCoordinateSpace:(id)arg1;	// IMP=0x00000000007b52aa
- (_Bool)validateForCoordinateSpace;	// IMP=0x00000000007b521f
- (_Bool)_validateBitmap:(id)arg1 withOrientation:(long long)arg2 scale:(double)arg3 forCoordinateSpace:(id)arg4;	// IMP=0x00000000007b4bb5
- (id)boundingPathForCoordinateSpace:(id)arg1 withCornerRadii:(struct UIRectCornerRadii)arg2 orientation:(long long)arg3 scale:(double)arg4;	// IMP=0x00000000007b45ce
- (id)boundingPathForCoordinateSpace:(id)arg1;	// IMP=0x00000000007b4580
- (id)initWithRectangularCoordinateSpace:(id)arg1 orientation:(long long)arg2 scale:(double)arg3;	// IMP=0x00000000007b43a8
- (id)initWithCoordinateSpace:(id)arg1 orientation:(long long)arg2 scale:(double)arg3 boundingPathBitmap:(id)arg4;	// IMP=0x00000000007b4165
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000007b3f2d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000007b3e6c

@end


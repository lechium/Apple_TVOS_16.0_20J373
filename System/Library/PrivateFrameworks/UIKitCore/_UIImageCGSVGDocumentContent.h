//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIImageCGSVGDocumentContent
{
    struct CGSVGDocument *_svgDocumentRef;	// 40 = 0x28
}

- (void)_drawWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3 effect:(id)arg4;	// IMP=0x00000000005bc7cd
- (void)_prepareForDrawingWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3;	// IMP=0x00000000005bc755
- (id)description;	// IMP=0x00000000005bc725
- (unsigned long long)hash;	// IMP=0x00000000005bc714
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005bc6a8
- (struct CGSize)sizeInPixels;	// IMP=0x00000000005bc693
- (struct CGSVGDocument *)CGSVGDocument;	// IMP=0x00000000005bc682
- (_Bool)isCGSVGDocument;	// IMP=0x00000000005bc67a
- (_Bool)canEmitDrawingCommands;	// IMP=0x00000000005bc672
- (_Bool)canScaleImageToTargetResolution;	// IMP=0x00000000005bc66a
- (void)dealloc;	// IMP=0x00000000005bc629
- (id)initWithScale:(double)arg1;	// IMP=0x00000000005bc5a2
- (id)initWithCGSVGDocument:(struct CGSVGDocument *)arg1 scale:(double)arg2;	// IMP=0x00000000005bc459

@end


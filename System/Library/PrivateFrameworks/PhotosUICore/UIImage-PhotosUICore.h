//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@interface UIImage (PhotosUICore)
+ (id)px_roundedCornerMaskImage:(CDStruct_c2259bfa)arg1 size:(struct CGSize)arg2;	// IMP=0x002000000060c9b0
+ (id)_px_createOverlayImageWithGlyphStyle:(unsigned long long)arg1 backgroundWhite:(double)arg2 backgroundAlpha:(double)arg3 glyphAlpha:(double)arg4;	// IMP=0x002000000060c83c
+ (void)px_preloadPlayOverlayGlyphsIfNeeded;	// IMP=0x002000000060c818
+ (id)px_playOverlayImage:(unsigned long long)arg1;	// IMP=0x002000000060c53b
+ (id)px_imageFromSolidColor:(id)arg1;	// IMP=0x002000000060c486
+ (id)px_systemImageNamed:(id)arg1;	// IMP=0x002000000060c46d
+ (id)px_imageNamed:(id)arg1;	// IMP=0x002000000060c3df
- (id)px_predrawnImage;	// IMP=0x001000000060bc63
- (id)px_backdropImageWithStyle:(long long)arg1;	// IMP=0x001000000060bb5b
- (id)px_debugImageWithStrokeRect:(struct CGRect)arg1 color:(id)arg2 text:(id)arg3;	// IMP=0x001000000060b8db
- (id)px_debugImageWithStrokeRect:(struct CGRect)arg1 color:(id)arg2;	// IMP=0x001000000060b8c7
- (id)px_ASTCCompressedImageWithBlockSize:(unsigned int)arg1;	// IMP=0x001000000060b81a
- (id)px_extractPlayOverlayBackgroundImageFromLocation:(struct CGPoint)arg1 inViewportWithSize:(struct CGSize)arg2 contentMode:(long long)arg3 contentsRect:(struct CGRect)arg4 asynchronously:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x001000000060b5c7
- (void)px_drawInRect:(struct CGRect)arg1 withContentMode:(long long)arg2;	// IMP=0x001000000060b370
- (id)px_imageByCroppingRect:(struct CGRect)arg1 pixelTargetSize:(struct CGSize)arg2 cornerRadius:(double)arg3;	// IMP=0x001000000060b0b7
- (id)px_imageByCroppingRect:(struct CGRect)arg1;	// IMP=0x001000000060b012
- (id)px_imageByCroppingEdgeInsets:(struct UIEdgeInsets)arg1;	// IMP=0x001000000060af8d
- (id)px_imageWithDebugRect:(struct CGRect)arg1;	// IMP=0x001000000060aec3
- (id)px_tintedCircularImageWithColor:(id)arg1 backgroundColor:(id)arg2;	// IMP=0x001000000060ad16
- (id)px_imageByApplyingAlpha:(double)arg1;	// IMP=0x001000000060ac5e
- (id)px_tintedImageWithColor:(id)arg1;	// IMP=0x001000000060ab62
- (_Bool)px_isLargerThan:(id)arg1;	// IMP=0x001000000060aad6
@property(readonly, nonatomic) struct CGSize px_pixelSize;
@end


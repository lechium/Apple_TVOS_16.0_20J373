//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIKBRenderFactory;

__attribute__((visibility("hidden")))
@interface UIKBRenderFactory_Composite
{
    UIKBRenderFactory *_overlayFactory;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000090bf48
- (_Bool)isTallPopup;	// IMP=0x000000000090bf0f
- (double)popupFontSize;	// IMP=0x000000000090bed6
- (struct CGPoint)popupSymbolTextOffset;	// IMP=0x000000000090be9d
- (struct CGPoint)variantAnnotationTextOffset;	// IMP=0x000000000090be64
- (struct CGPoint)variantSymbolTextOffset;	// IMP=0x000000000090be2b
- (struct UIEdgeInsets)variantSymbolFrameInsets;	// IMP=0x000000000090bddc
- (struct UIEdgeInsets)variantPaddedFrameInsets;	// IMP=0x000000000090bd8d
- (struct UIEdgeInsets)wideShadowPopupMenuInsets;	// IMP=0x000000000090bd3e
- (struct UIEdgeInsets)wideShadowPaddleInsets;	// IMP=0x000000000090bcef
- (id)initWithRenderingContext:(id)arg1 skipLayoutSegments:(_Bool)arg2;	// IMP=0x000000000090bc41
- (Class)_overlayFactoryClass;	// IMP=0x000000000090bc39

@end

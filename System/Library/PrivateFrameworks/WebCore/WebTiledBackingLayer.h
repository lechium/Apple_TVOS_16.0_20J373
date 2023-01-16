//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface WebTiledBackingLayer : CALayer
{
    struct unique_ptr<WebCore::TileController, std::default_delete<WebCore::TileController>> _tileController;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000000a4bc20
- (void).cxx_destruct;	// IMP=0x0000000000a4bbe0
- (void)setBorderWidth:(double)arg1;	// IMP=0x0000000000a4bba0
- (void)setBorderColor:(struct CGColor *)arg1;	// IMP=0x0000000000a4baf0
- (void)invalidate;	// IMP=0x0000000000a4bab0
- (struct TiledBacking *)tiledBacking;	// IMP=0x0000000000a4ba90
- (double)contentsScale;	// IMP=0x0000000000a4ba50
- (void)setContentsScale:(double)arg1;	// IMP=0x0000000000a4ba30
- (_Bool)supportsSubpixelAntialiasedText;	// IMP=0x0000000000a4ba10
- (void)setSupportsSubpixelAntialiasedText:(_Bool)arg1;	// IMP=0x0000000000a4b9e0
- (_Bool)wantsDeepColorBackingStore;	// IMP=0x0000000000a4b9c0
- (void)setWantsDeepColorBackingStore:(_Bool)arg1;	// IMP=0x0000000000a4b990
- (_Bool)drawsAsynchronously;	// IMP=0x0000000000a4b960
- (void)setDrawsAsynchronously:(_Bool)arg1;	// IMP=0x0000000000a4b930
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;	// IMP=0x0000000000a4b810
- (void)setNeedsDisplay;	// IMP=0x0000000000a4b7c0
- (_Bool)isOpaque;	// IMP=0x0000000000a4b790
- (void)setOpaque:(_Bool)arg1;	// IMP=0x0000000000a4b760
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000a4b670
- (id)actionForKey:(id)arg1;	// IMP=0x0000000000a4b660
- (void *)createTileController:(void *)arg1;	// IMP=0x0000000000a4b600
- (void)dealloc;	// IMP=0x0000000000a4b5d0
- (id)init;	// IMP=0x0000000000a4b5a0

@end

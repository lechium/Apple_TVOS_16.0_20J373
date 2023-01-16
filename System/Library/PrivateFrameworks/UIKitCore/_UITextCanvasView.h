//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSMutableSet, NSString, _UISceneDisplayLink, _UITextTiledLayer;
@protocol _UITextKit1CanvasContext;

__attribute__((visibility("hidden")))
@interface _UITextCanvasView : UIView
{
    NSMutableSet *_ghostedRanges;	// 176 = 0xb0
    NSMutableSet *_invisibleRanges;	// 184 = 0xb8
    NSArray *_maskedRects;	// 192 = 0xc0
    _UISceneDisplayLink *_sceneDisplayLink;	// 200 = 0xc8
    id <_UITextKit1CanvasContext> _context;	// 208 = 0xd0
}

+ (Class)layerClass;	// IMP=0x0010000000f59c9f
- (void).cxx_destruct;	// IMP=0x0000000000f5b211
@property(nonatomic) __weak id <_UITextKit1CanvasContext> context; // @synthesize context=_context;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000f5b0b0
- (void)drawTextInRect:(struct CGRect)arg1;	// IMP=0x0000000000f5b0aa
- (void)updateContentSizeIfNeeded;	// IMP=0x0000000000f5b0a4
- (void)viewportBoundsDidChange;	// IMP=0x0000000000f5b09e
- (void)setNeedsLayout;	// IMP=0x0000000000f5b054
- (void)removeInvisibleRange:(struct _NSRange)arg1;	// IMP=0x0000000000f5afbb
- (void)addInvisibleRange:(struct _NSRange)arg1;	// IMP=0x0000000000f5af0a
- (void)removeAllGhostedRanges;	// IMP=0x0000000000f5aeb6
- (void)addGhostedRange:(struct _NSRange)arg1;	// IMP=0x0000000000f5ae05
- (id)_textTiledLayer:(id)arg1 maskedRectsInVisibleRect:(struct CGRect)arg2;	// IMP=0x0000000000f5a434
@property(nonatomic, setter=_setDrawsDebugBaselines:) _Bool _drawsDebugBaselines;
- (void)resumeTiling;	// IMP=0x0000000000f5a2f4
- (void)suspendTiling;	// IMP=0x0000000000f5a2b7
@property(nonatomic) double maxTileHeight;
@property(nonatomic, getter=isTilingEnabled) _Bool tilingEnabled;
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000f5a136
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000f5a0e4
- (void)_updateTilingViewportLayer;	// IMP=0x0000000000f5a055
- (void)_updateTilingViewportBookkeeping;	// IMP=0x0000000000f59f0f
- (void)_windowDidMoveToScreen;	// IMP=0x0000000000f59efd
- (void)didMoveToWindow;	// IMP=0x0000000000f59ebc
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000f59d84
- (_Bool)_enableAutoConstraining;	// IMP=0x0000000000f59d7c
- (void)dealloc;	// IMP=0x0000000000f59ce8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000f59c26

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _UITextTiledLayer *layer; // @dynamic layer;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSMapTable, NSMutableSet, NSString, NSTextContainer, NSTextLayoutManager, NSTextViewportLayoutController;
@protocol _UITextCanvasContext;

__attribute__((visibility("hidden")))
@interface _UITextLayoutCanvasView : UIView
{
    NSTextViewportLayoutController *_viewportLayoutController;	// 176 = 0xb0
    NSMutableSet *_viewportElementsToRemove;	// 184 = 0xb8
    NSMapTable *_viewportElementViews;	// 192 = 0xc0
    NSMutableSet *_textAttachmentViews;	// 200 = 0xc8
    NSMutableSet *_newTextAttachmentViews;	// 208 = 0xd0
    unsigned long long _textContainerIndex;	// 216 = 0xd8
    struct CGSize _contentSize;	// 224 = 0xe0
    _Bool _inLayout;	// 240 = 0xf0
    NSTextLayoutManager *_textLayoutManager;	// 248 = 0xf8
    id <_UITextCanvasContext> _context;	// 256 = 0x100
    NSTextContainer *_textContainer;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x0000000000693b7e
@property(readonly, nonatomic) NSTextContainer *textContainer; // @synthesize textContainer=_textContainer;
@property(nonatomic) __weak id <_UITextCanvasContext> context; // @synthesize context=_context;
@property(readonly, nonatomic) NSTextLayoutManager *textLayoutManager; // @synthesize textLayoutManager=_textLayoutManager;
- (void)updateContentSizeIfNeeded;	// IMP=0x0000000000693a44
- (void)viewportBoundsDidChange;	// IMP=0x0000000000693a32
- (void)drawTextInRect:(struct CGRect)arg1;	// IMP=0x0000000000693920
- (void)textViewportLayoutController:(id)arg1 configureRenderingSurfaceForTextLayoutFragment:(id)arg2;	// IMP=0x000000000069331c
- (struct CGRect)viewportBoundsForTextViewportLayoutController:(id)arg1;	// IMP=0x00000000006931f5
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000693198
- (void)layoutSubviews;	// IMP=0x00000000006930bd
- (void)setNeedsDisplay;	// IMP=0x000000000069307c
- (id)textRangeForBounds:(struct CGRect)arg1 layoutIfNeeded:(_Bool)arg2;	// IMP=0x0000000000692e35
- (id)textRangeAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000692e18
- (void)_viewportDidLayout;	// IMP=0x0000000000692af1
- (void)_viewportWillLayout;	// IMP=0x0000000000692999
- (id)initWithTextLayoutManager:(id)arg1 textContainer:(id)arg2;	// IMP=0x00000000006927c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, NSTextLayoutFragment;

__attribute__((visibility("hidden")))
@interface _UITextLayoutFragmentView : UIView
{
    NSTextLayoutFragment *_layoutFragment;	// 8 = 0x8
    struct CGPoint _containerOrigin;	// 16 = 0x10
    struct CGSize _containerSize;	// 32 = 0x20
    struct CGRect _clipRect;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000d91cc
@property(nonatomic) struct CGRect clipRect; // @synthesize clipRect=_clipRect;
@property(nonatomic) struct CGSize containerSize; // @synthesize containerSize=_containerSize;
@property(nonatomic) struct CGPoint containerOrigin; // @synthesize containerOrigin=_containerOrigin;
@property(readonly, nonatomic) NSTextLayoutFragment *layoutFragment; // @synthesize layoutFragment=_layoutFragment;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000d90c0
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000000d8fa8
- (void)layoutSubviews;	// IMP=0x00000000000d8ea2
- (void)enumerateTextAttachmentViewsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d8cf0
@property(readonly, nonatomic) struct CGRect clipFrame;
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d8c1a
- (void)_updateGeometry;	// IMP=0x00000000000d8a10
- (id)initWithLayoutFragment:(id)arg1 containerOrigin:(struct CGPoint)arg2 containerSize:(struct CGSize)arg3 clipRect:(struct CGRect)arg4;	// IMP=0x00000000000d879d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


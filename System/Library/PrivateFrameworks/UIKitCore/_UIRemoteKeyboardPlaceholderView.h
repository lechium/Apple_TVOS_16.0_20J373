//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIWindowScene;

__attribute__((visibility("hidden")))
@interface _UIRemoteKeyboardPlaceholderView : UIView
{
    UIView *_mirroredView;	// 8 = 0x8
    struct CGSize _fixedSize;	// 16 = 0x10
    CDUnknownBlockType _sizeBlock;	// 32 = 0x20
    UIWindowScene *_sceneForHeight;	// 40 = 0x28
    _Bool _isLocalMinimumHeight;	// 48 = 0x30
    UIView *_fallbackView;	// 56 = 0x38
    UIView *_associatedView;	// 64 = 0x40
}

+ (id)placeholderWithWidthSizer:(CDUnknownBlockType)arg1 heightWithScene:(id)arg2;	// IMP=0x0010000000ac1aba
+ (id)placeholderWithWidth:(double)arg1 height:(double)arg2;	// IMP=0x0010000000ac1a75
+ (id)placeholderForView:(id)arg1;	// IMP=0x0010000000ac19c6
- (void).cxx_destruct;	// IMP=0x0000000000ac23a1
@property(retain, nonatomic) UIView *associatedView; // @synthesize associatedView=_associatedView;
@property(retain, nonatomic) UIView *fallbackView; // @synthesize fallbackView=_fallbackView;
@property(readonly, nonatomic) _Bool isLocalMinimumHeightPlaceholder;
- (void)_isPlaceholderViewSelector;	// IMP=0x0000000000ac2341
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ac212b
@property(readonly, copy) NSString *description;
@property(nonatomic) struct CGSize fixedSize;
- (_Bool)refreshPlaceholder;	// IMP=0x0000000000ac1d61
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000ac1d59
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000ac1be8
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000ac1bae
@property(readonly) UIView *placeheldView;
- (id)initWithSize:(struct CGSize)arg1;	// IMP=0x0000000000ac1952
- (void)_setProgress:(double)arg1 boundedBy:(double)arg2;	// IMP=0x0000000000ac24b3
- (void)_endSplitTransitionIfNeeded:(_Bool)arg1;	// IMP=0x0000000000ac24ad
- (struct CGSize)rightContentViewSize;	// IMP=0x0000000000ac2497
- (struct CGSize)leftContentViewSize;	// IMP=0x0000000000ac2481
- (void)_beginSplitTransitionIfNeeded:(double)arg1 gapWidth:(double)arg2;	// IMP=0x0000000000ac247b
- (void)_setLeftOffset:(double)arg1 gapWidth:(double)arg2;	// IMP=0x0000000000ac2475
- (struct CGRect)_compatibleBounds;	// IMP=0x0000000000ac2429
- (void)didEndSplitTransition;	// IMP=0x0000000000ac2423
- (void)willBeginSplitTransition;	// IMP=0x0000000000ac241d
- (void)updateSplitSubviewContraintsWithLeftContentSize:(struct CGSize)arg1 rightContentSize:(struct CGSize)arg2;	// IMP=0x0000000000ac2417
- (void)layoutSplitSubviewsWithLeftContentSize:(struct CGSize)arg1 rightContentSize:(struct CGSize)arg2;	// IMP=0x0000000000ac2411
- (void)updateMergedSubviewConstraints;	// IMP=0x0000000000ac240b
- (void)layoutMergedSubviews;	// IMP=0x0000000000ac2405

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UICollectionView.h"

@class NSMutableArray, UIKeyboardEmojiGraphicsTraits, UIResponder;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCollectionView : UICollectionView
{
    UIKeyboardEmojiGraphicsTraits *_emojiGraphicsTraits;	// 8 = 0x8
    NSMutableArray *_gestureRecognizersToEnable;	// 16 = 0x10
    _Bool _isInSearchPopover;	// 24 = 0x18
    UIResponder *_hitTestResponder;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000009d7d62
@property(nonatomic) _Bool isInSearchPopover; // @synthesize isInSearchPopover=_isInSearchPopover;
@property(nonatomic) __weak UIResponder *hitTestResponder; // @synthesize hitTestResponder=_hitTestResponder;
@property(readonly) UIKeyboardEmojiGraphicsTraits *emojiGraphicsTraits; // @synthesize emojiGraphicsTraits=_emojiGraphicsTraits;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000009d7c3d
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000009d7b7b
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000009d7add
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000009d7855
- (void)enableConflictingGestureRecognizers;	// IMP=0x00000000009d76fa
- (void)disableConflictingGestureRecognizers;	// IMP=0x00000000009d74bc
- (id)closestCellForPoint:(struct CGPoint)arg1;	// IMP=0x00000000009d6d6e
- (id)backgroundColor;	// IMP=0x00000000009d6d55
- (double)_currentScreenScale;	// IMP=0x00000000009d6d43
- (void)layoutSubviews;	// IMP=0x00000000009d6c91
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2 emojiGraphicsTraits:(id)arg3;	// IMP=0x00000000009d6be7

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIKeyboardLayout.h"

@class UIKBBackgroundView, UIKBTree;

__attribute__((visibility("hidden")))
@interface UIKeyboardLayoutDictation : UIKeyboardLayout
{
    UIKBBackgroundView *_backgroundView;	// 72 = 0x48
    UIKBTree *_keyplane;	// 80 = 0x50
}

+ (struct CGSize)keyboardSizeForInputMode:(id)arg1 screenTraits:(id)arg2 keyboardType:(long long)arg3;	// IMP=0x00600000009c1dd8
+ (_Bool)keyboardInputMode:(id)arg1 supportsResizingOffsetForScreenTraits:(id)arg2;	// IMP=0x00600000009c1cce
+ (id)activeInstance;	// IMP=0x00600000009c1c3a
- (void).cxx_destruct;	// IMP=0x00000000009c25de
- (void)_moveWithEvent:(id)arg1;	// IMP=0x00000000009c25d8
- (struct CGRect)dragGestureRectInView:(id)arg1;	// IMP=0x00000000009c25ba
- (_Bool)usesAutoShift;	// IMP=0x00000000009c25b2
- (id)currentKeyplane;	// IMP=0x00000000009c259d
- (struct CGSize)splitLeftSize;	// IMP=0x00000000009c2543
- (_Bool)shouldFadeToLayout;	// IMP=0x00000000009c253b
- (_Bool)shouldFadeFromLayout;	// IMP=0x00000000009c2533
- (void)layoutSubviews;	// IMP=0x00000000009c2413
- (void)setRenderConfig:(id)arg1;	// IMP=0x00000000009c2313
- (void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3;	// IMP=0x00000000009c1f91
- (void)setupBackgroundViewForNewSplitTraits:(id)arg1;	// IMP=0x00000000009c1f8b
- (unsigned long long)_clipCornersOfView:(id)arg1;	// IMP=0x00000000009c1f72
- (_Bool)visible;	// IMP=0x00000000009c1f3f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000009c1c4b

@end


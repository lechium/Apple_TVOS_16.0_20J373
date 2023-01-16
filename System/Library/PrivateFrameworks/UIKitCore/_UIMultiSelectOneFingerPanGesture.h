//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIPanGestureRecognizer.h"

@class UIEvent, UITouch;
@protocol _UIMultiSelectOneFingerPanGestureDelegate;

__attribute__((visibility("hidden")))
@interface _UIMultiSelectOneFingerPanGesture : UIPanGestureRecognizer
{
    UITouch *_activeTouch;	// 136 = 0x88
    UIEvent *_activeEvent;	// 144 = 0x90
    id <_UIMultiSelectOneFingerPanGestureDelegate> _oneFingerPanDelegate;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x000000000123f6e1
@property(nonatomic) __weak id <_UIMultiSelectOneFingerPanGestureDelegate> oneFingerPanDelegate; // @synthesize oneFingerPanDelegate=_oneFingerPanDelegate;
@property(readonly, nonatomic) UIEvent *activeEvent; // @synthesize activeEvent=_activeEvent;
@property(readonly, nonatomic) UITouch *activeTouch; // @synthesize activeTouch=_activeTouch;
- (_Bool)_affectedByGesture:(id)arg1;	// IMP=0x000000000123f68a
- (_Bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;	// IMP=0x000000000123f682
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;	// IMP=0x000000000123f67a
- (_Bool)canPreventGestureRecognizer:(id)arg1;	// IMP=0x000000000123f5a2
- (_Bool)_preventsDragInteractionGestures;	// IMP=0x000000000123f55f
- (void)reset;	// IMP=0x000000000123f518
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000123f417

@end

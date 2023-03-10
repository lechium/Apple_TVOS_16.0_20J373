//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIWindow;

__attribute__((visibility("hidden")))
@interface UIEditingOverlayGestureView : UIView
{
    UIWindow *_previousWindow;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000f1e286
@property(nonatomic) __weak UIWindow *previousWindow; // @synthesize previousWindow=_previousWindow;
- (_Bool)_isTransparentFocusRegion;	// IMP=0x0000000000f1e251
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000f1e1eb
- (id)_gestureRecognizersForEvent:(id)arg1;	// IMP=0x0000000000f1dd84
- (void)didMoveToWindow;	// IMP=0x0000000000f1dc44
- (int)textEffectsVisibilityLevel;	// IMP=0x0000000000f1dc39

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


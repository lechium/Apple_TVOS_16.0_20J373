//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIScrollView.h"

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface UITableViewWrapperView : UIScrollView
{
    NSMutableArray *_stuckToBackViews;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x0000000000e3c9b6
@property(readonly, nonatomic) NSArray *stuckToBackViews; // @synthesize stuckToBackViews=_stuckToBackViews;
- (unsigned long long)_focusPrimaryScrollableAxis;	// IMP=0x0000000000e3c99a
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000e3c93d
- (_Bool)_forwardsToParentScroller;	// IMP=0x0000000000e3c935
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000e3c768
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000e3c6d1
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000e3c63a
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000e3c5a3
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000e3c50c
- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;	// IMP=0x0000000000e3c4dd
- (void)sendSubviewToBack:(id)arg1;	// IMP=0x0000000000e3c4ae
- (void)bringSubviewToFront:(id)arg1;	// IMP=0x0000000000e3c47f
- (void)willRemoveSubview:(id)arg1;	// IMP=0x0000000000e3c462
- (void)_unstickView:(id)arg1;	// IMP=0x0000000000e3c36d
- (void)_stickViewToBack:(id)arg1;	// IMP=0x0000000000e3c2c2
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000e3c224
- (void)dealloc;	// IMP=0x0000000000e3c1da
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000e3c19a

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIScrollView.h"

@class _UIAlertControllerGradientView;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerShadowedScrollView : UIScrollView
{
    _UIAlertControllerGradientView *_shadowView;	// 8 = 0x8
    _Bool _shouldPinToBottomOnResize;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006083d
@property(nonatomic) _Bool shouldPinToBottomOnResize; // @synthesize shouldPinToBottomOnResize=_shouldPinToBottomOnResize;
- (void)_updateScrollabilityAndShadow;	// IMP=0x0000000000060301
- (void)setContentSize:(struct CGSize)arg1;	// IMP=0x00000000000602c0
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000060216
- (struct CGRect)_boundsForPinningToBottomWithNewBounds:(struct CGRect)arg1;	// IMP=0x000000000006014f

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

__attribute__((visibility("hidden")))
@interface _UIBackdropContentView : UIView
{
    _Bool _isForcingLayout;	// 176 = 0xb0
}

- (void)didMoveToWindow;	// IMP=0x00000000000b804c
- (void)_monitoredView:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;	// IMP=0x00000000000b7f9e
- (void)_monitoredView:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;	// IMP=0x00000000000b7eca
- (void)recursivelyRemoveBackdropMaskViewsForView:(id)arg1;	// IMP=0x00000000000b7d5d
- (void)backdropView:(id)arg1 recursivelyUpdateMaskViewsForView:(id)arg2;	// IMP=0x00000000000b7b89
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000b7b1c

@end

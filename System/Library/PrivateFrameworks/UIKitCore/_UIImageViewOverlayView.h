//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@protocol _UIImageViewOverlayViewDelegate;

__attribute__((visibility("hidden")))
@interface _UIImageViewOverlayView : UIView
{
    id <_UIImageViewOverlayViewDelegate> _overlayViewDelegate;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0000000001134f56
@property(nonatomic) __weak id <_UIImageViewOverlayViewDelegate> overlayViewDelegate; // @synthesize overlayViewDelegate=_overlayViewDelegate;
- (void)setClipsToBounds:(_Bool)arg1;	// IMP=0x0000000001134eae

@end


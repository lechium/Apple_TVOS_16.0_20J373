//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSTimer, UILabel, _UIBackdropView;

__attribute__((visibility("hidden")))
@interface UIWebPDFLabelView : UIView
{
    UILabel *_label;	// 176 = 0xb0
    _UIBackdropView *_backdropView;	// 184 = 0xb8
    NSTimer *_timer;	// 192 = 0xc0
    unsigned long long currentPageIndex;	// 200 = 0xc8
}

@property(nonatomic) unsigned long long currentPageIndex; // @synthesize currentPageIndex;
- (void)_makeRoundedCorners;	// IMP=0x000000000122d7ee
- (void)fadeOut;	// IMP=0x000000000122d6fb
- (void)_fadeOutAnimationDidStop;	// IMP=0x000000000122d6d6
- (void)showNowInSuperView:(id)arg1 atOrigin:(struct CGPoint)arg2 withText:(id)arg3 animated:(_Bool)arg4;	// IMP=0x000000000122d50d
- (double)_fadeOutDuration;	// IMP=0x000000000122d4ff
- (double)_fadeOutDelay;	// IMP=0x000000000122d4f1
@property(readonly, nonatomic, getter=isTimerInstalled) _Bool timerInstalled;
- (void)setText:(id)arg1;	// IMP=0x000000000122d4a3
- (void)sizeToFit;	// IMP=0x000000000122d3d9
- (void)dealloc;	// IMP=0x000000000122d374
- (void)clearTimer;	// IMP=0x000000000122d33b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000122d12d

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface TVPSpinnerView : UIView
{
    _Bool _shouldResumeAnimation;	// 8 = 0x8
    UIView *_spinnerContainer;	// 16 = 0x10
    UIView *_spinnerOverlayContainer;	// 24 = 0x18
    UIColor *_color;	// 32 = 0x20
    _Bool _animating;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000006b34c
@property(readonly, nonatomic) UIColor *color; // @synthesize color=_color;
@property(readonly, nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
- (void)_removeAnimations;	// IMP=0x000000000006b234
- (void)_addAnimations;	// IMP=0x000000000006ade1
- (void)_updateImagesForTraitCollection:(id)arg1;	// IMP=0x000000000006ac67
- (id)_spinnerImageForTraitCollection:(id)arg1 size:(struct CGSize)arg2 alpha:(double)arg3;	// IMP=0x000000000006ab93
- (void)stopAnimating;	// IMP=0x000000000006ab6e
- (void)startAnimating;	// IMP=0x000000000006aaf6
- (void)_applicationWillResignActiveNotification:(id)arg1;	// IMP=0x000000000006aa97
- (void)_applicationDidBecomeActiveNotification:(id)arg1;	// IMP=0x000000000006aa41
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000006a888
- (void)didMoveToWindow;	// IMP=0x000000000006a80d
- (void)willMoveToWindow:(id)arg1;	// IMP=0x000000000006a7aa
- (void)dealloc;	// IMP=0x000000000006a708
- (id)initWithFrame:(struct CGRect)arg1 color:(id)arg2;	// IMP=0x0000000000069ebc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000069ea8

@end


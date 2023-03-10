//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface HBUITopShelfParadeButtonIndeterminateProgressView : UIView
{
    _Bool _animating;	// 8 = 0x8
}

@property(readonly, nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
- (void)_applicationWillEnterForeground;	// IMP=0x00000000000094c6
- (void)_applicationDidEnterBackground;	// IMP=0x00000000000094b4
- (void)_removeRotationAnimation;	// IMP=0x0000000000009470
- (void)_addRotationAnimationIfNeeded;	// IMP=0x0000000000009350
- (struct CGRect)_contentRect;	// IMP=0x00000000000092a6
- (void)stopAnimating;	// IMP=0x0000000000009289
- (void)startAnimating;	// IMP=0x000000000000926c
- (void)didMoveToWindow;	// IMP=0x000000000000922b
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00000000000091ea
- (void)tintColorDidChange;	// IMP=0x00000000000091a9
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000009046
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000008f2b

@end


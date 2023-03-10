//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSTransaction.h>

@class UIViewController;

__attribute__((visibility("hidden")))
@interface HBUITopShelfHostAnimationTransaction : BSTransaction
{
    _Bool _backgroundUpdate;	// 8 = 0x8
    UIViewController *_containerViewController;	// 16 = 0x10
    UIViewController *_fromViewController;	// 24 = 0x18
    UIViewController *_toViewController;	// 32 = 0x20
    long long _animationDirection;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000028e94
@property(readonly, nonatomic, getter=isBackgroundUpdate) _Bool backgroundUpdate; // @synthesize backgroundUpdate=_backgroundUpdate;
@property(readonly, nonatomic) long long animationDirection; // @synthesize animationDirection=_animationDirection;
@property(readonly, nonatomic) UIViewController *toViewController; // @synthesize toViewController=_toViewController;
@property(readonly, nonatomic) UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
@property(readonly, nonatomic) __weak UIViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
- (void)_addTransformAnimations;	// IMP=0x00000000000289f2
- (void)_addFadeAnimations;	// IMP=0x00000000000286aa
- (void)_prepareForTransition;	// IMP=0x00000000000284b4
- (void)_addAnimations;	// IMP=0x0000000000028459
- (void)_didComplete;	// IMP=0x0000000000028343
- (void)_begin;	// IMP=0x00000000000282ed
- (id)debugDescription;	// IMP=0x000000000002818d
- (id)initWithContainerViewController:(id)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 animationDirection:(long long)arg4 isBackgroundUpdate:(_Bool)arg5;	// IMP=0x0000000000027f5c

@end


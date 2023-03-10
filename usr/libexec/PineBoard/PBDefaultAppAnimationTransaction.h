//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSTransaction.h>

@class PBAppCrossFadeAnimationTransaction, UIViewPropertyAnimator;

@interface PBDefaultAppAnimationTransaction : BSTransaction
{
    UIViewPropertyAnimator *_scalePropertyAnimator;	// 8 = 0x8
    UIViewPropertyAnimator *_fadePropertyAnimator;	// 16 = 0x10
    PBAppCrossFadeAnimationTransaction *_crossFadeTransaction;	// 24 = 0x18
    CDStruct_821c97ab _context;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000015e8c9
@property(readonly, nonatomic) PBAppCrossFadeAnimationTransaction *crossFadeTransaction; // @synthesize crossFadeTransaction=_crossFadeTransaction;
@property(readonly, nonatomic) UIViewPropertyAnimator *fadePropertyAnimator; // @synthesize fadePropertyAnimator=_fadePropertyAnimator;
@property(readonly, nonatomic) UIViewPropertyAnimator *scalePropertyAnimator; // @synthesize scalePropertyAnimator=_scalePropertyAnimator;
@property(readonly, nonatomic) CDStruct_821c97ab context; // @synthesize context=_context;
- (void)_startFadeAnimation;	// IMP=0x001000000015e584
- (void)_startScaleAnimation;	// IMP=0x001000000015e1d4
- (void)_startCoordinatedAnimation;	// IMP=0x001000000015e0fa
- (void)_startReduceMotionAnimation;	// IMP=0x001000000015e087
- (void)_didComplete;	// IMP=0x001000000015df98
- (void)_willFailWithReason:(id)arg1;	// IMP=0x001000000015de8d
- (void)_willInterruptWithReason:(id)arg1;	// IMP=0x001000000015dd82
- (void)_begin;	// IMP=0x001000000015dc9e
- (_Bool)_canBeInterrupted;	// IMP=0x001000000015dc96
- (id)initWithSceneLayoutViewController:(id)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 isResigning:(_Bool)arg4;	// IMP=0x001000000015dbc7

@end


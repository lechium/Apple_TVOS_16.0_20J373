//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSTransaction, PBPIPContainerViewControllerLayout, UIView;
@protocol BSInvalidatable;

@interface PBPIPSwapAnimator : NSObject
{
    UIView *_containingView;	// 8 = 0x8
    PBPIPContainerViewControllerLayout *_goingFullScreenLayout;	// 16 = 0x10
    PBPIPContainerViewControllerLayout *_goingToPIPLayout;	// 24 = 0x18
    long long _quadrant;	// 32 = 0x20
    BSTransaction<BSInvalidatable> *_animationTransaction;	// 40 = 0x28
    struct UIEdgeInsets _currentPIPInsets;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000007f27
@property(readonly, nonatomic) BSTransaction<BSInvalidatable> *animationTransaction; // @synthesize animationTransaction=_animationTransaction;
@property(readonly, nonatomic) struct UIEdgeInsets currentPIPInsets; // @synthesize currentPIPInsets=_currentPIPInsets;
@property(readonly, nonatomic) long long quadrant; // @synthesize quadrant=_quadrant;
@property(readonly, nonatomic) PBPIPContainerViewControllerLayout *goingToPIPLayout; // @synthesize goingToPIPLayout=_goingToPIPLayout;
@property(readonly, nonatomic) PBPIPContainerViewControllerLayout *goingFullScreenLayout; // @synthesize goingFullScreenLayout=_goingFullScreenLayout;
@property(readonly, nonatomic) UIView *containingView; // @synthesize containingView=_containingView;
- (id)_createAnimationTransaction;	// IMP=0x0010000000007e68
- (void)animateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000007bb6
- (id)initWithContainingView:(id)arg1 goingFullScreenLayout:(id)arg2 goingToPIPLayout:(id)arg3 quadrant:(long long)arg4 currentPIPInsets:(struct UIEdgeInsets)arg5;	// IMP=0x0010000000007ade

@end


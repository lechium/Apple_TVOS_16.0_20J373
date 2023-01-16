//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UINavigationControllerVisualStyle.h"

@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;

__attribute__((visibility("hidden")))
@interface _UINavigationControllerVisualStyleWatchOS : _UINavigationControllerVisualStyle
{
    id <UIViewControllerAnimatedTransitioning> _transitionController;	// 8 = 0x8
    id <UIViewControllerInteractiveTransitioning> _interactionController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000077da77
- (_Bool)isUsingParallaxTransition;	// IMP=0x000000000077da6f
- (void)setInteractionController:(id)arg1;	// IMP=0x000000000077da5b
- (void)setTransitionController:(id)arg1;	// IMP=0x000000000077da47
- (id)interactionController;	// IMP=0x000000000077da32
- (id)transitionController;	// IMP=0x000000000077da1d

@end

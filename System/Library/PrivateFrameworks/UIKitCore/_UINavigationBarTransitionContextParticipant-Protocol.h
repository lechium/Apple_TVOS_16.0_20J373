//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class _UINavigationBarTransitionContext;

@protocol _UINavigationBarTransitionContextParticipant <NSObject>
- (void)finalizeStateFromTransition:(_UINavigationBarTransitionContext *)arg1;
- (void)ensureBackButtonTruncationOccursWithContext:(_UINavigationBarTransitionContext *)arg1;
- (void)recordToStateForTransition:(_UINavigationBarTransitionContext *)arg1;
- (void)prepareToRecordToState:(_UINavigationBarTransitionContext *)arg1;
- (void)recordFromStateForTransition:(_UINavigationBarTransitionContext *)arg1;
@end


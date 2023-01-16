//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXGEffect, PXStoryClipLayout;

@protocol PXStoryTransitionSource
@property(readonly, nonatomic) struct CGRect transitionViewport;
- (void)applyTransitionEffectAlpha:(double)arg1 auxiliaryEffectAlpha:(double)arg2;
- (void)didEndTransitionWithEffect:(PXGEffect *)arg1 auxiliaryEffect:(PXGEffect *)arg2;
- (void)didBeginTransitionWithEffect:(PXGEffect *)arg1 auxiliaryEffect:(PXGEffect *)arg2;
- (PXStoryClipLayout *)layoutForClipWithIdentifier:(long long)arg1;
@end


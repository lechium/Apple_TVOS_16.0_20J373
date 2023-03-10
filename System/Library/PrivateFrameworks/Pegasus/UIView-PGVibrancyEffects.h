//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface UIView (PGVibrancyEffects)
+ (void)PG_animateUsingDefaultDampedSpringWithInitialSpringVelocity:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x002000000003027b
+ (void)PG_animateUsingDefaultTimingWithOptions:(unsigned long long)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0020000000030160
+ (void)PG_animateUsingDefaultTimingWithAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0020000000030146
+ (void)PG_performWithoutRetargetingAnimation:(CDUnknownBlockType)arg1;	// IMP=0x0020000000030054
+ (void)PG_performWithoutAnimation:(CDUnknownBlockType)arg1;	// IMP=0x002000000002ff60
- (void)PG_recursivelyDisallowGroupBlending;	// IMP=0x0010000000001bff
- (void)PG_removeVibrancyEffect;	// IMP=0x0010000000001b34
- (void)PG_updateVibrancyEffectForTintColor;	// IMP=0x0010000000001a19
- (_Bool)PG_preferredVisibilityForView:(id)arg1;	// IMP=0x00100000000134d0
- (id)PG_backdropGroupLeader;	// IMP=0x0010000000013480
- (id)PG_acquireAssertionToPreventAutoHideOfControlsWithReason:(id)arg1;	// IMP=0x00100000000303a2
- (_Bool)PG_disablesLayerCloning;	// IMP=0x001000000002ff1a
- (double)PG_cornerRadius;	// IMP=0x001000000002feb5
@property(retain, nonatomic, setter=PG_setCompositingFilter:) id PG_compositingFilter;
@property(nonatomic, setter=PG_setAnchorPoint:) struct CGPoint PG_anchorPoint;
@property(nonatomic, setter=PG_setAllowsGroupBlending:) _Bool PG_allowsGroupBlending;
@property(nonatomic, setter=PG_setAllowsEdgeAntialiasing:) _Bool PG_allowsEdgeAntialiasing;
@end


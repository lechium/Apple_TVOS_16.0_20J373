//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@interface CALayer (PKCAUtilities)
- (double)pkui_animateToOpacity:(double)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00600000000772dd
- (id)_pkui_createNextAdditiveAnimationKeyWithKeyPath:(id)arg1;	// IMP=0x006000000007706e
- (id)pkui_addAdditiveAnimation:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x0060000000076ff6
- (id)pkui_addAdditiveAnimation:(id)arg1;	// IMP=0x0060000000076fe2
- (id)pkui_additiveAnimationKeyPrefixForKeyPath:(id)arg1;	// IMP=0x0060000000076f6a
- (_Bool)pkui_hasAdditiveAnimationForKeyPath:(id)arg1;	// IMP=0x0060000000076de7
- (double)pkui_remainingDurationForAnimation:(id)arg1;	// IMP=0x0060000000076d6f
- (double)pkui_remainingDurationForAnimationWithKey:(id)arg1;	// IMP=0x0060000000076d18
- (double)pkui_elapsedDurationForAnimation:(id)arg1;	// IMP=0x0060000000076ca3
- (double)pkui_elapsedDurationForAnimationWithKey:(id)arg1;	// IMP=0x0060000000076c4c
@end


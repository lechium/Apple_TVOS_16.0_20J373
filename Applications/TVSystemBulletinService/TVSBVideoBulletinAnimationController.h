//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TVSBVideoBulletinAnimationContext;

@interface TVSBVideoBulletinAnimationController : NSObject
{
    TVSBVideoBulletinAnimationContext *_animationContext;	// 8 = 0x8
}

+ (id)_frameDismissalSpringTimingParameters;	// IMP=0x00200000000102f0
+ (id)_framePresentationSpringTimingParameters;	// IMP=0x0010000000010240
+ (id)_frameSpringTimingParametersForTransition:(unsigned long long)arg1;	// IMP=0x00100000000101a0
+ (id)animationSettingsForTransition:(unsigned long long)arg1;	// IMP=0x0010000000010090
- (void).cxx_destruct;	// IMP=0x0020000000013680
@property(retain, nonatomic) TVSBVideoBulletinAnimationContext *animationContext; // @synthesize animationContext=_animationContext;
- (CDStruct_a28bf200)labelTransformsWithRegularLabelFrame:(struct CGRect)arg1 fullScreenLabelFrame:(struct CGRect)arg2;	// IMP=0x00100000000132c0
- (void)animateTransition:(id)arg1;	// IMP=0x00100000000103c0
- (double)transitionDuration:(id)arg1;	// IMP=0x0010000000010370

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


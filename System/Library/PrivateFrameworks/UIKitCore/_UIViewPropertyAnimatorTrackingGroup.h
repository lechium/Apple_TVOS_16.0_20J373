//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _UIViewPropertyAnimatorTrackingGroup : NSObject
{
    NSArray *_trackingAnimators;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000a0bf9
@property(readonly, nonatomic) NSArray *trackingAnimators; // @synthesize trackingAnimators=_trackingAnimators;
- (void)finishAnimationAtPosition:(long long)arg1;	// IMP=0x00000000000a0b80
- (void)stopAnimation:(_Bool)arg1;	// IMP=0x00000000000a0b12
- (void)pauseAnimation;	// IMP=0x00000000000a0ae0
- (void)startAnimationAfterDelay:(double)arg1;	// IMP=0x00000000000a0a72
- (void)startAnimation;	// IMP=0x00000000000a0a40
@property(nonatomic) double fractionComplete;
@property(nonatomic, getter=isReversed) _Bool reversed;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
@property(readonly, nonatomic) long long state;
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a07c5
- (void)continueAnimationWithTimingParameters:(id)arg1 durationFactor:(double)arg2;	// IMP=0x00000000000a0701
- (id)initWithAnimators:(id)arg1;	// IMP=0x00000000000a0696

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


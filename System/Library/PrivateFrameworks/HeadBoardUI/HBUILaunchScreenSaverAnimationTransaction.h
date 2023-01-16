//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSTransaction.h>

@class BKSAnimationFenceHandle, HBUILaunchAnimationContext, HBUILaunchScreenSaverAnimationDescription, NSHashTable;

__attribute__((visibility("hidden")))
@interface HBUILaunchScreenSaverAnimationTransaction : BSTransaction
{
    BKSAnimationFenceHandle *_animationDidCompleteFence;	// 8 = 0x8
    HBUILaunchAnimationContext *_context;	// 16 = 0x10
    HBUILaunchScreenSaverAnimationDescription *_topShelfAnimation;	// 24 = 0x18
    HBUILaunchScreenSaverAnimationDescription *_appGridAnimation;	// 32 = 0x20
    NSHashTable *_appGridViewsToRestore;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000002d46a
@property(readonly, nonatomic) NSHashTable *appGridViewsToRestore; // @synthesize appGridViewsToRestore=_appGridViewsToRestore;
@property(readonly, nonatomic) HBUILaunchScreenSaverAnimationDescription *appGridAnimation; // @synthesize appGridAnimation=_appGridAnimation;
@property(readonly, nonatomic) HBUILaunchScreenSaverAnimationDescription *topShelfAnimation; // @synthesize topShelfAnimation=_topShelfAnimation;
@property(readonly, nonatomic) HBUILaunchAnimationContext *context; // @synthesize context=_context;
@property(retain, nonatomic) BKSAnimationFenceHandle *animationDidCompleteFence; // @synthesize animationDidCompleteFence=_animationDidCompleteFence;
- (void)willInterruptTransaction:(id)arg1;	// IMP=0x000000000002d255
- (_Bool)_canBeInterrupted;	// IMP=0x000000000002d238
- (void)_didComplete;	// IMP=0x000000000002cdc2
- (void)_begin;	// IMP=0x000000000002c32b
- (id)debugDescription;	// IMP=0x000000000002c244
- (id)initWithContext:(id)arg1 topShelfAnimation:(id)arg2 appGridAnimation:(id)arg3;	// IMP=0x000000000002bf2b

@end


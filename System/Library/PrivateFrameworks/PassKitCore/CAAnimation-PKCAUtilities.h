//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CAAnimation.h>

@interface CAAnimation (PKCAUtilities)
+ (id)pkui_shakeAnimationWithInitalOffest:(double)arg1 springStiffness:(double)arg2 springDamping:(double)arg3;	// IMP=0x0050000000077457
+ (id)pkui_smallShakeAnimation;	// IMP=0x005000000007742d
+ (id)pkui_shakeAnimation;	// IMP=0x0050000000077403
- (void)pkui_setCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000077942
- (CDUnknownBlockType)pkui_completionHandler;	// IMP=0x00100000000778b7
- (void)pkui_setDidStartHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000007780a
- (CDUnknownBlockType)pkui_didStartHandler;	// IMP=0x001000000007777f
@end

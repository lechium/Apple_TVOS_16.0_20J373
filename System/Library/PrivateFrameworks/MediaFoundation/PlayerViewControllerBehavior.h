//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/AVMusicAppBehavior.h>

@class MISSING_TYPE;

@interface PlayerViewControllerBehavior : AVMusicAppBehavior
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *onGoingJumpToTimeInfo;	// 24 = 0x18
    MISSING_TYPE *reporter;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000022490
- (id)init;	// IMP=0x0000000000022430
- (void)willMoveToContext:(id)arg1;	// IMP=0x000000000001f000
- (void)contextWillHandleUserAction:(long long)arg1;	// IMP=0x000000000001efc0
- (void)skipToNextItem;	// IMP=0x000000000001e5e0
- (void)skipToPreviousItem;	// IMP=0x000000000001e5b0

@end


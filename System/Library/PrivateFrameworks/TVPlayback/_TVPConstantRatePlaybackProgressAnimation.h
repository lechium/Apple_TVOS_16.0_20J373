//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol TVConstantRatePlaybackProgressAnimationDelegate;

__attribute__((visibility("hidden")))
@interface _TVPConstantRatePlaybackProgressAnimation
{
    id <TVConstantRatePlaybackProgressAnimationDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000163ad
@property(nonatomic) __weak id <TVConstantRatePlaybackProgressAnimationDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isFinished;	// IMP=0x0000000000016331
- (double)currentPlaybackTime;	// IMP=0x00000000000162b3

@end


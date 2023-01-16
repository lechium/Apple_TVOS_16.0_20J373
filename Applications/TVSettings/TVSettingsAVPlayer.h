//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class AVPlayerItem, AVPlayerLooper, AVQueuePlayer, NSArray, NSURL;

@interface TVSettingsAVPlayer : UIView
{
    float _playRate;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    AVQueuePlayer *_queuePlayer;	// 24 = 0x18
    AVPlayerItem *_playerItem;	// 32 = 0x20
    AVPlayerLooper *_looper;	// 40 = 0x28
    UIView *_fadeView;	// 48 = 0x30
    double _fadeDuration;	// 56 = 0x38
    NSArray *_observerTokens;	// 64 = 0x40
}

+ (Class)layerClass;	// IMP=0x00400000000c97e1
- (void).cxx_destruct;	// IMP=0x00200000000ca4cc
@property(readonly, nonatomic) NSArray *observerTokens; // @synthesize observerTokens=_observerTokens;
@property(readonly, nonatomic) float playRate; // @synthesize playRate=_playRate;
@property(readonly, nonatomic) double fadeDuration; // @synthesize fadeDuration=_fadeDuration;
@property(readonly, nonatomic) UIView *fadeView; // @synthesize fadeView=_fadeView;
@property(readonly, nonatomic) AVPlayerLooper *looper; // @synthesize looper=_looper;
@property(readonly, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(readonly, nonatomic) AVQueuePlayer *queuePlayer; // @synthesize queuePlayer=_queuePlayer;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)_removeBoundaryTimeObservers;	// IMP=0x00100000000ca3c4
- (void)_addBoundaryTimeObservers;	// IMP=0x00100000000c9c88
- (void)playInLoopWithRate:(float)arg1 crossfadeDuration:(double)arg2;	// IMP=0x00100000000c9ac9
- (void)dealloc;	// IMP=0x00100000000c97f2

@end


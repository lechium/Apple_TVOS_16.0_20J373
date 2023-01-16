//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVPlaybackSpeedCollection, AVPlayerController, NSArray;

__attribute__((visibility("hidden")))
@interface AVUnifiedPlayerPlaybackSpeedMenuProvider
{
    NSArray *_children;	// 8 = 0x8
    AVPlaybackSpeedCollection *_playbackSpeedCollection;	// 16 = 0x10
    AVPlayerController *_playerController;	// 24 = 0x18
}

+ (id)playbackSpeedMenuProvider;	// IMP=0x00600000000ffa3a
- (void).cxx_destruct;	// IMP=0x00000000000ff997
@property(retain, nonatomic) AVPlayerController *playerController; // @synthesize playerController=_playerController;
@property(retain, nonatomic) AVPlaybackSpeedCollection *playbackSpeedCollection; // @synthesize playbackSpeedCollection=_playbackSpeedCollection;
- (void)_action:(id)arg1 didSelectPlaybackSpeed:(id)arg2 atIndex:(long long)arg3;	// IMP=0x00000000000ff83b
- (id)_actionForPlaybackSpeed:(id)arg1 atIndex:(long long)arg2;	// IMP=0x00000000000ff6a0
- (id)children;	// IMP=0x00000000000ff48b
- (void)_updateActionStates;	// IMP=0x00000000000ff1fc
- (void)prepareForDisplay;	// IMP=0x00000000000ff1b2

@end


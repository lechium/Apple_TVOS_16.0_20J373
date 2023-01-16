//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class AVDelegateManager, AVKeyValueObserverCollection, AVPlayerController;

__attribute__((visibility("hidden")))
@interface AVPlaybackControlsViewController : UIViewController
{
    _Bool _playing;	// 8 = 0x8
    _Bool _scrubberEnabled;	// 9 = 0x9
    _Bool _playPauseButtonEnabled;	// 10 = 0xa
    _Bool _showsStreamingControls;	// 11 = 0xb
    _Bool _showsLoadingIndicator;	// 12 = 0xc
    _Bool _viewHasAppeared;	// 13 = 0xd
    float _playbackRate;	// 16 = 0x10
    AVPlayerController *_playerController;	// 24 = 0x18
    AVDelegateManager *_delegateManager;	// 32 = 0x20
    AVKeyValueObserverCollection *_keyValueObservers;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000044b94
@property(nonatomic) _Bool viewHasAppeared; // @synthesize viewHasAppeared=_viewHasAppeared;
@property(readonly) AVKeyValueObserverCollection *keyValueObservers; // @synthesize keyValueObservers=_keyValueObservers;
@property(nonatomic) _Bool showsLoadingIndicator; // @synthesize showsLoadingIndicator=_showsLoadingIndicator;
@property(nonatomic) _Bool showsStreamingControls; // @synthesize showsStreamingControls=_showsStreamingControls;
@property(nonatomic, getter=isPlayPauseButtonEnabled) _Bool playPauseButtonEnabled; // @synthesize playPauseButtonEnabled=_playPauseButtonEnabled;
@property(nonatomic, getter=isScrubberEnabled) _Bool scrubberEnabled; // @synthesize scrubberEnabled=_scrubberEnabled;
@property(nonatomic) float playbackRate; // @synthesize playbackRate=_playbackRate;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(retain, nonatomic) AVDelegateManager *delegateManager; // @synthesize delegateManager=_delegateManager;
@property(retain, nonatomic) AVPlayerController *playerController; // @synthesize playerController=_playerController;
- (_Bool)forwardMethodToPlayerViewController:(SEL)arg1 sender:(id)arg2;	// IMP=0x00000000000449a6
- (void)didChangePlayerController;	// IMP=0x00000000000449a0
- (void)_didChangePlayerControllerFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000000004498e
- (void)cancelScanning;	// IMP=0x0000000000044988
- (void)skipToPreviousFrame;	// IMP=0x0000000000044982
- (void)skipToNextFrame;	// IMP=0x000000000004497c
- (void)downToNextNavigationMode;	// IMP=0x0000000000044976
- (void)upToNextNavigationMode;	// IMP=0x0000000000044970
- (void)setControlsVisible:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000044892
@property(readonly, nonatomic, getter=areControlsVisible) _Bool controlsVisible;
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000044796
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000044706
- (void)viewDidLoad;	// IMP=0x00000000000446c5
- (void)_endObservations;	// IMP=0x0000000000044660
- (void)_beginObservations;	// IMP=0x000000000004452b
- (void)dealloc;	// IMP=0x000000000004441e
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000443ef

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol ISLivePhotoPlaybackBehaviorDelegate;

__attribute__((visibility("hidden")))
@interface ISLivePhotoPlaybackBehavior
{
    struct {
        _Bool respondsToDidFinish;
        _Bool respondsToDidBeginPlaying;
    } _delegateFlags;	// 8 = 0x8
    _Bool _immediatelyShowsPhotoWhenPlaybackEnds;	// 10 = 0xa
    _Bool _hasBlurryTransition;	// 11 = 0xb
    _Bool _isTransitioningToPhoto;	// 12 = 0xc
    _Bool __videoReadyToPlay;	// 13 = 0xd
    _Bool __preparing;	// 14 = 0xe
    double _photoTransitionDuration;	// 16 = 0x10
    long long __currentPlaybackID;	// 24 = 0x18
    long long __readyToPlayPlaybackID;	// 32 = 0x20
    CDStruct_1b6d18a9 _keyTime;	// 40 = 0x28
    CDStruct_e83c9415 _playbackTimeRange;	// 64 = 0x40
}

@property(nonatomic, getter=_isPreparing, setter=_setPreparing:) _Bool _preparing; // @synthesize _preparing=__preparing;
@property(nonatomic, getter=_isVideoReadyToPlay, setter=_setVideoReadyToPlay:) _Bool _videoReadyToPlay; // @synthesize _videoReadyToPlay=__videoReadyToPlay;
@property(nonatomic, setter=_setReadyToPlayPlaybackID:) long long _readyToPlayPlaybackID; // @synthesize _readyToPlayPlaybackID=__readyToPlayPlaybackID;
@property(nonatomic, setter=_setCurrentPlaybackID:) long long _currentPlaybackID; // @synthesize _currentPlaybackID=__currentPlaybackID;
@property(readonly, nonatomic) _Bool isTransitioningToPhoto; // @synthesize isTransitioningToPhoto=_isTransitioningToPhoto;
@property(readonly, nonatomic) _Bool hasBlurryTransition; // @synthesize hasBlurryTransition=_hasBlurryTransition;
@property(readonly, nonatomic) _Bool immediatelyShowsPhotoWhenPlaybackEnds; // @synthesize immediatelyShowsPhotoWhenPlaybackEnds=_immediatelyShowsPhotoWhenPlaybackEnds;
@property(readonly, nonatomic) double photoTransitionDuration; // @synthesize photoTransitionDuration=_photoTransitionDuration;
@property(readonly, nonatomic) CDStruct_e83c9415 playbackTimeRange; // @synthesize playbackTimeRange=_playbackTimeRange;
@property(readonly, nonatomic) CDStruct_1b6d18a9 keyTime; // @synthesize keyTime=_keyTime;
- (void)_showVideoWithPlaybackID:(long long)arg1;	// IMP=0x000000000000d7a7
- (void)_transitionToVideoWithPlaybackID:(long long)arg1;	// IMP=0x000000000000d713
- (void)_startPlaybackWithPlaybackID:(long long)arg1;	// IMP=0x000000000000d6b4
- (void)_didFinishPreparing;	// IMP=0x000000000000d662
- (void)_handleDidFinishPreroll;	// IMP=0x000000000000d650
- (void)_prerollWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000d56e
- (void)_handleDidSeekToBeginning;	// IMP=0x000000000000d4ca
- (void)_prepareVideoForPlaybackIfNeeded;	// IMP=0x000000000000d281
- (void)startPlayback;	// IMP=0x000000000000d1f6
- (void)activeDidChange;	// IMP=0x000000000000d176
- (void)videoDidPlayToEnd;	// IMP=0x000000000000d132
- (void)_handleDidFinish;	// IMP=0x000000000000d0c3
- (void)videoWillPlayToEnd;	// IMP=0x000000000000cf3e
- (long long)behaviorType;	// IMP=0x000000000000cf33
@property(nonatomic) __weak id <ISLivePhotoPlaybackBehaviorDelegate> delegate; // @dynamic delegate;
- (id)initWithInitialLayoutInfo:(id)arg1 keyTime:(CDStruct_1b6d18a9)arg2 playbackTimeRange:(CDStruct_e83c9415)arg3 photoTransitionDuration:(double)arg4 immediatelyShowsPhotoWhenPlaybackEnds:(_Bool)arg5 hasBlurryTransition:(_Bool)arg6;	// IMP=0x000000000000cdf6

@end

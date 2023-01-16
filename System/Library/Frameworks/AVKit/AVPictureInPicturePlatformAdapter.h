//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVObservationController, AVPictureInPictureViewController, AVPlayerController, NSString;
@protocol AVPictureInPictureContentSource, AVPictureInPicturePlatformAdapterDelegate;

__attribute__((visibility("hidden")))
@interface AVPictureInPicturePlatformAdapter : NSObject
{
    _Bool _contentSourceSupported;	// 8 = 0x8
    _Bool _allowsPictureInPicturePlayback;	// 9 = 0x9
    _Bool _systemPictureInPicturePossible;	// 10 = 0xa
    _Bool _alwaysStartsAutomaticallyWhenEnteringBackground;	// 11 = 0xb
    _Bool _canStartAutomaticallyWhenEnteringBackground;	// 12 = 0xc
    _Bool _canPausePlaybackWhenExitingPictureInPicture;	// 13 = 0xd
    _Bool _requiresLinearPlayback;	// 14 = 0xe
    _Bool _microphoneEnabled;	// 15 = 0xf
    _Bool _managesWiredSecondScreenPlayback;	// 16 = 0x10
    _Bool _canAnimatePictureInPictureTransition;	// 17 = 0x11
    _Bool _anyPictureInPictureActive;	// 18 = 0x12
    _Bool _routingVideoToHostedWindow;	// 19 = 0x13
    id <AVPictureInPicturePlatformAdapterDelegate> _delegate;	// 24 = 0x18
    AVPlayerController *_playerController;	// 32 = 0x20
    long long _controlsStyle;	// 40 = 0x28
    NSString *_activitySessionIdentifier;	// 48 = 0x30
    long long _backgroundPlaybackPolicy;	// 56 = 0x38
    AVPictureInPictureViewController *_pictureInPictureViewController;	// 64 = 0x40
    long long _status;	// 72 = 0x48
    id <AVPictureInPictureContentSource> _source;	// 80 = 0x50
    AVObservationController *_observationController;	// 88 = 0x58
}

+ (id)stopPictureInPictureButtonImageName;	// IMP=0x001000000011eeb7
+ (id)startPictureInPictureButtonImageName;	// IMP=0x001000000011eeaa
+ (_Bool)isPictureInPictureSupported;	// IMP=0x001000000011eea2
+ (id)imageSymbolConfiguration;	// IMP=0x001000000011ee9a
- (void).cxx_destruct;	// IMP=0x000000000011f072
@property(nonatomic, getter=isRoutingVideoToHostedWindow) _Bool routingVideoToHostedWindow; // @synthesize routingVideoToHostedWindow=_routingVideoToHostedWindow;
@property(readonly, nonatomic) AVObservationController *observationController; // @synthesize observationController=_observationController;
@property(nonatomic) __weak id <AVPictureInPictureContentSource> source; // @synthesize source=_source;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic, getter=isAnyPictureInPictureActive) _Bool anyPictureInPictureActive; // @synthesize anyPictureInPictureActive=_anyPictureInPictureActive;
@property(readonly, nonatomic) AVPictureInPictureViewController *pictureInPictureViewController; // @synthesize pictureInPictureViewController=_pictureInPictureViewController;
@property(readonly, nonatomic) _Bool canAnimatePictureInPictureTransition; // @synthesize canAnimatePictureInPictureTransition=_canAnimatePictureInPictureTransition;
@property(nonatomic) long long backgroundPlaybackPolicy; // @synthesize backgroundPlaybackPolicy=_backgroundPlaybackPolicy;
@property(copy, nonatomic) NSString *activitySessionIdentifier; // @synthesize activitySessionIdentifier=_activitySessionIdentifier;
@property(nonatomic) _Bool managesWiredSecondScreenPlayback; // @synthesize managesWiredSecondScreenPlayback=_managesWiredSecondScreenPlayback;
@property(nonatomic, getter=isMicrophoneEnabled) _Bool microphoneEnabled; // @synthesize microphoneEnabled=_microphoneEnabled;
@property(nonatomic) long long controlsStyle; // @synthesize controlsStyle=_controlsStyle;
@property(nonatomic) _Bool requiresLinearPlayback; // @synthesize requiresLinearPlayback=_requiresLinearPlayback;
@property(nonatomic) _Bool canPausePlaybackWhenExitingPictureInPicture; // @synthesize canPausePlaybackWhenExitingPictureInPicture=_canPausePlaybackWhenExitingPictureInPicture;
@property(nonatomic) _Bool canStartAutomaticallyWhenEnteringBackground; // @synthesize canStartAutomaticallyWhenEnteringBackground=_canStartAutomaticallyWhenEnteringBackground;
@property(nonatomic) _Bool alwaysStartsAutomaticallyWhenEnteringBackground; // @synthesize alwaysStartsAutomaticallyWhenEnteringBackground=_alwaysStartsAutomaticallyWhenEnteringBackground;
@property(readonly, nonatomic, getter=isSystemPictureInPicturePossible) _Bool systemPictureInPicturePossible; // @synthesize systemPictureInPicturePossible=_systemPictureInPicturePossible;
@property(nonatomic) _Bool allowsPictureInPicturePlayback; // @synthesize allowsPictureInPicturePlayback=_allowsPictureInPicturePlayback;
@property(retain, nonatomic) AVPlayerController *playerController; // @synthesize playerController=_playerController;
@property(nonatomic) __weak id <AVPictureInPicturePlatformAdapterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isContentSourceSupported) _Bool contentSourceSupported; // @synthesize contentSourceSupported=_contentSourceSupported;
- (void)updateLayoutDependentBehaviors;	// IMP=0x000000000011eee6
- (void)stopPictureInPictureAndRestoreUserInterface:(_Bool)arg1;	// IMP=0x000000000011eee0
- (void)startPictureInPicture;	// IMP=0x000000000011eeda
- (id)initWithSource:(id)arg1;	// IMP=0x000000000011eecc
- (_Bool)isPictureInPicturePossible;	// IMP=0x000000000011eec4
- (void)_setRoutingVideoToHostedWindow:(_Bool)arg1 pictureInPictureViewController:(id)arg2 source:(id)arg3;	// IMP=0x000000000007562a
- (void)_updateStatusUsingProposedStatus:(long long)arg1;	// IMP=0x0000000000074dbb
- (void)_updateStatus;	// IMP=0x0000000000074d8a
- (void)_setStatusAndNotifyDelegateIfNeeded:(long long)arg1;	// IMP=0x0000000000074c68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

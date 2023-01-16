//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBCoordinatedTransitionToken, PBSystemOverlayController;

@interface PBNowPlayingManager : NSObject
{
    _Bool _presenting;	// 8 = 0x8
    _Bool _nowPlayingAppFocused;	// 9 = 0x9
    PBCoordinatedTransitionToken *_coordinatedTransitionToken;	// 16 = 0x10
    PBSystemOverlayController *_overlayController;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0020000000123a98
+ (id)dependencyDescription;	// IMP=0x00100000001238b3
- (void).cxx_destruct;	// IMP=0x0020000000124ec3
@property(retain, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
@property(readonly, nonatomic) PBCoordinatedTransitionToken *coordinatedTransitionToken; // @synthesize coordinatedTransitionToken=_coordinatedTransitionToken;
@property(readonly, nonatomic) _Bool nowPlayingAppFocused; // @synthesize nowPlayingAppFocused=_nowPlayingAppFocused;
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000124d74
- (void)sceneManager:(id)arg1 didChangeCurrentApplicationFromSceneHandle:(id)arg2 toSceneHandle:(id)arg3;	// IMP=0x0010000000124d61
- (id)transitionCoordinator:(id)arg1 willDismissTransitionWithToken:(id)arg2 withContext:(id)arg3;	// IMP=0x0010000000124ce2
- (void)overlayController:(id)arg1 willDismissSession:(id)arg2 withContext:(id)arg3;	// IMP=0x0010000000124cc7
- (_Bool)_dismissWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000124bdc
- (_Bool)dismissNowPlaying;	// IMP=0x0010000000124bc7
- (void)activateNowPlayingForReason:(unsigned long long)arg1 options:(id)arg2;	// IMP=0x0010000000124410
- (void)_updateNowPlayingAppFocused;	// IMP=0x001000000012431b
- (void)_updateNowPlayingAppFocusedUsingMediaRemoteObserver:(id)arg1 siriManager:(id)arg2 airPlayManager:(id)arg3 sceneManager:(id)arg4 processManager:(id)arg5;	// IMP=0x00100000001240a4
- (void)dealloc;	// IMP=0x0010000000123f8a
- (id)init;	// IMP=0x0010000000123b1f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

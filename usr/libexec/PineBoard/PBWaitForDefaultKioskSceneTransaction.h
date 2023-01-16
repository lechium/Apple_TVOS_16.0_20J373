//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSTransaction.h>

@class BSWatchdog, FBScene, NSString;

@interface PBWaitForDefaultKioskSceneTransaction : BSTransaction
{
    NSString *_targetSceneIdentifier;	// 8 = 0x8
    BSWatchdog *_watchdog;	// 16 = 0x10
    FBScene *_defaultKioskScene;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000656a3
@property(retain, nonatomic) FBScene *defaultKioskScene; // @synthesize defaultKioskScene=_defaultKioskScene;
@property(readonly, nonatomic) BSWatchdog *watchdog; // @synthesize watchdog=_watchdog;
@property(retain, nonatomic) NSString *targetSceneIdentifier; // @synthesize targetSceneIdentifier=_targetSceneIdentifier;
- (void)_stopObserving;	// IMP=0x00100000000655f1
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;	// IMP=0x001000000006557f
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2;	// IMP=0x00100000000654f8
- (void)sceneContentStateDidChange:(id)arg1;	// IMP=0x00100000000654bb
- (void)_didComplete;	// IMP=0x001000000006545d
- (void)_begin;	// IMP=0x00100000000652a5
- (_Bool)_canBeInterrupted;	// IMP=0x001000000006529d
@property(readonly, nonatomic) FBScene *readyDefaultKioskScene;
- (void)dealloc;	// IMP=0x0010000000065197
- (id)init;	// IMP=0x001000000006505d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


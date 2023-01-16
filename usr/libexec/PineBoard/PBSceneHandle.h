//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSSceneIdentity, FBScene, NSHashTable, NSString;

@interface PBSceneHandle : NSObject
{
    FBScene *_scene;	// 8 = 0x8
    FBSSceneIdentity *_sceneIdentity;	// 16 = 0x10
    NSString *_clientProcessBundleIdentifier;	// 24 = 0x18
    NSHashTable *_observers;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x001000000015d757
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, copy, nonatomic) NSString *clientProcessBundleIdentifier; // @synthesize clientProcessBundleIdentifier=_clientProcessBundleIdentifier;
@property(readonly, copy, nonatomic) FBSSceneIdentity *sceneIdentity; // @synthesize sceneIdentity=_sceneIdentity;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;	// IMP=0x001000000015d549
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;	// IMP=0x001000000015d359
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2;	// IMP=0x001000000015d159
- (void)sceneDidInvalidate:(id)arg1;	// IMP=0x001000000015d00d
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;	// IMP=0x001000000015ce44
- (void)scene:(id)arg1 didCompleteUpdateWithContext:(id)arg2 error:(id)arg3;	// IMP=0x001000000015cc9b
- (void)scene:(id)arg1 didApplyUpdateWithContext:(id)arg2;	// IMP=0x001000000015cb12
- (void)scene:(id)arg1 didPrepareUpdateWithContext:(id)arg2;	// IMP=0x001000000015c99c
- (void)sceneContentStateDidChange:(id)arg1;	// IMP=0x001000000015c850
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000015c7b5
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000015c4c1
- (void)removeObserver:(id)arg1;	// IMP=0x001000000015c4a5
- (void)addObserver:(id)arg1;	// IMP=0x001000000015c489
@property(readonly, nonatomic, getter=isContentReady) _Bool contentReady;
@property(readonly, nonatomic) long long contentState;
@property(readonly, nonatomic) FBScene *sceneIfExists;
@property(readonly, nonatomic) FBScene *scene; // @synthesize scene=_scene;
@property(readonly, copy, nonatomic) NSString *sceneIdentifier;
- (void)_setScene:(id)arg1;	// IMP=0x001000000015c38a
- (void)dealloc;	// IMP=0x001000000015c301
- (id)initWithScene:(id)arg1;	// IMP=0x001000000015c1da
- (id)initWithSceneIdentity:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x001000000015c0f7
- (id)_initWithScene:(id)arg1 sceneIdentity:(id)arg2 bundleIdentifier:(id)arg3;	// IMP=0x001000000015bfb7
@property(readonly, nonatomic, getter=isKioskAppScene) _Bool kioskAppScene;
@property(readonly, nonatomic, getter=isDefaultKioskAppScene) _Bool defaultKioskAppScene;

// Remaining properties
@property(readonly) Class superclass;

@end

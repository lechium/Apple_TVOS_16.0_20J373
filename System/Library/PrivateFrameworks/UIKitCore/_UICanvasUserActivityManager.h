//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, NSString, NSUserActivity, UIActivityContinuationManager, UIScene;

__attribute__((visibility("hidden")))
@interface _UICanvasUserActivityManager : NSObject
{
    UIScene *_weakScene;	// 8 = 0x8
    NSUserActivity *_restorationActivity;	// 16 = 0x10
    NSDictionary *_connectionOptionsRestorationActivityDictionary;	// 24 = 0x18
    UIActivityContinuationManager *_activityContinuationManager;	// 32 = 0x20
    NSSet *_activityTypesForDefaultProgressUI;	// 40 = 0x28
    _Bool _initialRestorationIsFinished;	// 48 = 0x30
    _Bool _isDisplayingActivityContinuationUI;	// 49 = 0x31
}

+ (id)_activityContinuationDictionaryWithAction:(id)arg1 sourceApplication:(id)arg2 originatingProcess:(id)arg3;	// IMP=0x0010000000b95b2b
+ (id)_getRestorationUserActivityForPersistentIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000b94af2
+ (id)_getUserInfoForPersistentIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000b94891
+ (void)_scheduleDataSaveForSceneSession:(id)arg1 saveRestorationActivity:(_Bool)arg2;	// IMP=0x0010000000b94565
+ (void)_saveRestorationStateForScene:(id)arg1;	// IMP=0x0010000000b94500
+ (_Bool)_restorationUserActivityAvailableForSceneIdentifier:(id)arg1;	// IMP=0x0010000000b9427d
+ (id)_fetchSceneSessionWithPersistentIdentifier:(id)arg1;	// IMP=0x0010000000b931c8
+ (id)_knownSceneSessionMap;	// IMP=0x0010000000b92b8a
+ (void)_deleteSceneSessionsWithPersistentIdentifiers:(id)arg1;	// IMP=0x0010000000b9267f
+ (void)_updatePersistedSceneSession:(id)arg1;	// IMP=0x0010000000b91f32
+ (void)_deleteSavedSceneSessionDirectoryWithPersistentIdentifier:(id)arg1;	// IMP=0x0010000000b91def
+ (void)_showProgressForScene:(id)arg1 whenFetchingUserActivityForTypes:(id)arg2;	// IMP=0x0010000000b90de9
+ (id)_userActivityManagerForScene:(id)arg1;	// IMP=0x0010000000b908a2
+ (void)_initializeUserActivityManager;	// IMP=0x0010000000b907b4
- (void).cxx_destruct;	// IMP=0x0000000000b95c02
@property(nonatomic, getter=_isDisplayingActivityContinuationUI, setter=_setIsDisplayingActivityContinuationUI:) _Bool isDisplayingActivityContinuationUI; // @synthesize isDisplayingActivityContinuationUI=_isDisplayingActivityContinuationUI;
@property(readonly, nonatomic) _Bool _initialRestorationIsFinished; // @synthesize _initialRestorationIsFinished;
- (id)_updateCanvasConnectionOptionsDictionary:(id)arg1;	// IMP=0x0000000000b959e7
- (void)_performCanvasRestorationIfNecessary;	// IMP=0x0000000000b9598a
- (void)_performCanvasRestoration;	// IMP=0x0000000000b95695
- (void)_setupCanvasRestorationState;	// IMP=0x0000000000b9549c
- (void)_saveSceneRestorationState;	// IMP=0x0000000000b93882
- (void)_saveOrClearRestorationDictionary:(id)arg1 forScene:(id)arg2;	// IMP=0x0000000000b93369
- (void)_checkActivityContinuationAndBecomeCurrentIfNeeded;	// IMP=0x0000000000b91a6a
- (void)activityContinuationManager:(id)arg1 didUpdateUserActivity:(id)arg2;	// IMP=0x0000000000b91967
- (void)activityContinuationManager:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;	// IMP=0x0000000000b91816
- (_Bool)activityContinuationManager:(id)arg1 continueUserActivity:(id)arg2;	// IMP=0x0000000000b916d3
- (_Bool)activityContinuationManager:(id)arg1 willContinueUserActivityWithType:(id)arg2;	// IMP=0x0000000000b9157b
- (_Bool)activityContinuationManagerHandleErrorsByConfiguringProgressUI:(id)arg1;	// IMP=0x0000000000b91569
- (id)activityContinuationManagerUserCancelledError:(id)arg1;	// IMP=0x0000000000b91450
- (void)activityContinuationManager:(id)arg1 hideProgressUIWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000b9131b
- (void)activityContinuationManager:(id)arg1 configureProgressUIWithError:(id)arg2;	// IMP=0x0000000000b9116f
- (void)activityContinuationManager:(id)arg1 displayProgressUI:(id)arg2 dismissalHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000b90e66
- (void)_sceneWillInvalidate:(id)arg1;	// IMP=0x0000000000b90de3
- (void)_scene:(id)arg1 didTransitionFromActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;	// IMP=0x0000000000b90b84
- (void)_scene:(id)arg1 willTransitionToActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;	// IMP=0x0000000000b90a78
@property(readonly, nonatomic, getter=_activityContinuationManager) UIActivityContinuationManager *_activityContinuationManager;
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene;
- (id)initWithScene:(id)arg1;	// IMP=0x0000000000b90911

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, CUHomeKitManager, MISSING_TYPE, NSCountedSet, NSDate, NSHashTable, NSMutableDictionary, NSMutableSet, NSString, NSTimer, PBAccountNotificationCoalescingQueue, PBBulletinPausedAssertion, PBBulletinService, PBPresentationElementFocusCoordinator, PBSBulletin, PBSGroupRecommendationsSession, PBSUserProfilesSnapshot, PBUserProfileApplicationManager, PBUserProfileStore, _TtC9PineBoard25PBUserProfilePictureStore;
@protocol BSInvalidatable, OS_dispatch_queue;

@interface PBUserProfileManager : NSObject
{
    _Bool _performingCreateUserProfilesMigration;	// 8 = 0x8
    _Bool _shouldPresentAutomaticWelcomeBackBulletin;	// 9 = 0x9
    PBSGroupRecommendationsSession *_groupRecommendationsSession;	// 16 = 0x10
    _TtC9PineBoard25PBUserProfilePictureStore *_profilePictureStore;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_observerQueue;	// 40 = 0x28
    ACAccountStore *_accountStore;	// 48 = 0x30
    NSHashTable *_observers;	// 56 = 0x38
    NSMutableDictionary *_userProfileManagerDidUpdateObservers;	// 64 = 0x40
    NSMutableDictionary *_userProfileManagerDidUpdateGroupSessionsObservers;	// 72 = 0x48
    PBUserProfileStore *_userProfileStore;	// 80 = 0x50
    NSTimer *_automaticWelcomeBackBulletinDelayTimer;	// 88 = 0x58
    PBSBulletin *_currentWelcomeBackBulletin;	// 96 = 0x60
    NSCountedSet *_ignoringUserProfileAccountNotificationsReasons;	// 104 = 0x68
    PBAccountNotificationCoalescingQueue *_pendingUserProfileAccountNotifications;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_homeKitQueue;	// 120 = 0x78
    CUHomeKitManager *_homeKitManager;	// 128 = 0x80
    PBPresentationElementFocusCoordinator *_presentationElementFocusCoordinator;	// 136 = 0x88
    NSMutableSet *_provisioningUserProfileAttributes;	// 144 = 0x90
    PBBulletinService *_bulletinService;	// 152 = 0x98
    PBBulletinPausedAssertion *_pauseBulletinsAssertion;	// 160 = 0xa0
    NSDate *_dateLastSystemWake;	// 168 = 0xa8
    id <BSInvalidatable> _stateCaptureHandle;	// 176 = 0xb0
    PBUserProfileApplicationManager *_userProfileApplicationManager;	// 184 = 0xb8
}

+ (void)_createGuestPersonaWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00200000000f84a0
+ (void)_performCreateUserProfilesMigrationWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ef68e
+ (id)sharedInstance;	// IMP=0x00100000000e891c
+ (id)dependencyDescription;	// IMP=0x00100000000e70f4
- (void).cxx_destruct;	// IMP=0x00200000000fb056
@property(readonly, nonatomic) _TtC9PineBoard25PBUserProfilePictureStore *profilePictureStore; // @synthesize profilePictureStore=_profilePictureStore;
- (void)userProfileStore:(id)arg1 didUpdateiTunesForSelectedUserProfile:(id)arg2;	// IMP=0x00100000000fb03c
- (void)userProfileStore:(id)arg1 didChangeSelectedUserProfile:(id)arg2 previousSelectedUserProfile:(id)arg3;	// IMP=0x00100000000fafd6
- (void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3;	// IMP=0x00100000000faea3
- (void)presentationElementFocusCoordinator:(id)arg1 didUpdateToActiveLayoutLevel:(long long)arg2 fromLevel:(long long)arg3;	// IMP=0x00100000000faacb
- (void)powerManagerDidWakeSystem:(id)arg1 reason:(long long)arg2;	// IMP=0x00100000000faa8b
- (void)powerManager:(id)arg1 willWakeSystemWithReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000fa9ea
- (void)powerManagerDidSleepSystem:(id)arg1 reason:(long long)arg2;	// IMP=0x00100000000fa9c9
- (void)_removeAllIgnoringUserProfileAccountNotificationsWithReason:(id)arg1;	// IMP=0x00100000000fa490
- (void)_handleUserProfileAccountNotification:(id)arg1;	// IMP=0x00100000000f1fdc
- (oneway void)handleUserProfileAccountNotification:(id)arg1;	// IMP=0x00100000000ee73f
- (void)endIgnoringUserProfileAccountNotifications;	// IMP=0x00100000000ee620
- (void)beginIgnoringUserProfileAccountNotifications;	// IMP=0x00100000000ee501
- (oneway void)updateGroupRecommendationsSessionWithUserIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000edaf2
- (oneway void)updateGroupRecommendationsConsent:(id)arg1 forUserProfileWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ecffb
- (oneway void)effectiveUserProfileWithHomeUserIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ecab6
- (oneway void)removeUserProfileWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ec36c
- (oneway void)updateUserProfileWithIdentifier:(id)arg1 attributes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000eb97d
- (oneway void)createUserProfileWithAttributes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000eb0f5
- (oneway void)selectUserProfileWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ea7fa
- (MISSING_TYPE *)fetchGroupRecommendationsSessionWithCompletionHandler: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000ea647
@property(readonly, nonatomic) PBSGroupRecommendationsSession *groupRecommendationsSession; // @synthesize groupRecommendationsSession=_groupRecommendationsSession;
- (oneway void)fetchUserProfilesSnapshotWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ea254
@property(readonly, nonatomic) PBSUserProfilesSnapshot *userProfilesSnapshot;
- (void)sendDailyAnalyticsEvents;	// IMP=0x00100000000e959d
- (void)endIgnoringUserProfileAccountNotificationsWithReason:(id)arg1;	// IMP=0x00100000000e93f8
- (void)beginIgnoringUserProfileAccountNotificationsWithReason:(id)arg1;	// IMP=0x00100000000e9287
- (void)removeObserver:(id)arg1;	// IMP=0x00100000000e918c
- (id)observeUserProfileManagerDidUpdateGroupRecommendationsSessionUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e8efb
- (id)observeUserProfileManagerDidUpdateUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e8c6a
- (void)addObserver:(id)arg1;	// IMP=0x00100000000e8bae
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00100000000e888f
- (id)_initWithAccountStore:(id)arg1 bulletinService:(id)arg2 userProfileStore:(id)arg3 homeKitManager:(id)arg4 windowManager:(id)arg5 userProfilePictureStore:(id)arg6 shouldDoInitialStorageValidation:(_Bool)arg7;	// IMP=0x00100000000e726e
- (id)_initWithAccountStore:(id)arg1 bulletinService:(id)arg2 userProfileStore:(id)arg3 homeKitManager:(id)arg4 windowManager:(id)arg5 userProfilePictureStore:(id)arg6;	// IMP=0x00100000000e7243

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

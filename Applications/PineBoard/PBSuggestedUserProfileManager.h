//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FAFetchFamilyCircleRequest, NSDate, NSHashTable, NSString, PBSSuggestedUserProfileSnapshot, PBSuggestedUserProfileStore, PBUserProfileManager;
@protocol OS_dispatch_queue;

@interface PBSuggestedUserProfileManager : NSObject
{
    FAFetchFamilyCircleRequest *_fetchRequest;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_observerQueue;	// 24 = 0x18
    NSHashTable *_observers;	// 32 = 0x20
    PBSuggestedUserProfileStore *_profileStore;	// 40 = 0x28
    PBUserProfileManager *_userProfileManager;	// 48 = 0x30
    NSDate *_lastRefreshDate;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x0020000000147ac9
- (void).cxx_destruct;	// IMP=0x0020000000149dec
@property(retain, nonatomic) NSDate *lastRefreshDate; // @synthesize lastRefreshDate=_lastRefreshDate;
@property(retain, nonatomic) PBUserProfileManager *userProfileManager; // @synthesize userProfileManager=_userProfileManager;
@property(retain, nonatomic) PBSuggestedUserProfileStore *profileStore; // @synthesize profileStore=_profileStore;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *observerQueue; // @synthesize observerQueue=_observerQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) FAFetchFamilyCircleRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
- (void)userProfileManagerDidUpdate:(id)arg1;	// IMP=0x0010000000149c84
- (void)_workQueue_notifyObserversSuggestedUsersDidUpdate;	// IMP=0x0010000000149a0c
- (void)removeObserver:(id)arg1;	// IMP=0x00100000001498dd
- (void)addObserver:(id)arg1;	// IMP=0x00100000001497ae
- (void)_workQueue_clearSnapshot;	// IMP=0x001000000014976b
- (void)_handleUpdateSuppressedForSuggestedUserWithIdentifier:(id)arg1 suppressed:(_Bool)arg2;	// IMP=0x00100000001496b2
- (oneway void)clearSnapshot;	// IMP=0x0010000000149650
- (oneway void)updateSuppressedForSuggestedUserWithIdentifier:(id)arg1 suppressed:(id)arg2;	// IMP=0x00100000001495ee
- (oneway void)refreshSuggestedUserProfiles;	// IMP=0x0010000000149500
@property(readonly, nonatomic) PBSSuggestedUserProfileSnapshot *suggestedUserProfileSnapshot;
- (void)_workQueue_updateSuppressedForSuggestedUserWithIdentifier:(id)arg1 suppressed:(_Bool)arg2;	// IMP=0x001000000014921e
- (void)_workQueue_saveStoreAndNotifyObservers;	// IMP=0x00100000001491e4
- (id)_workQueue_reconciledSnapshotWithFamilyCircleProfiles:(id)arg1;	// IMP=0x0010000000148bc6
- (void)_workQueue_processFamilyCircleMembers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001481fe
- (void)_workQueue_loadFamilyCircleWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000147cf4
- (void)_workQueue_loadFamilyCircle;	// IMP=0x0010000000147cdf
- (void)_loadFamilyCircle;	// IMP=0x0010000000147c72
- (void)refreshFamilyMembersWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000147bc9
- (void)dealloc;	// IMP=0x0010000000147b84
- (id)initWithStore:(id)arg1 userProfileManager:(id)arg2;	// IMP=0x001000000014799f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

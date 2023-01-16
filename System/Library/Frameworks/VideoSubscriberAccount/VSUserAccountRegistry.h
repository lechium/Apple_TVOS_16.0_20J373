//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSOperationQueue, NSString, VSPrivacyFacade, VSRemoteNotifier, VSUserAccountPersistentContainer, VSUserAccountUpdateManager;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface VSUserAccountRegistry : NSObject
{
    _Bool _currentUpdateSessionIsForced;	// 8 = 0x8
    NSOperationQueue *_privateQueue;	// 16 = 0x10
    VSRemoteNotifier *_remoteNotifier;	// 24 = 0x18
    VSUserAccountPersistentContainer *_container;	// 32 = 0x20
    VSUserAccountUpdateManager *_updateManager;	// 40 = 0x28
    VSPrivacyFacade *_privacyFacade;	// 48 = 0x30
    NSDate *_lastUpdateTime;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_timer;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000037141
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSDate *lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(retain, nonatomic) VSPrivacyFacade *privacyFacade; // @synthesize privacyFacade=_privacyFacade;
@property(retain, nonatomic) VSUserAccountUpdateManager *updateManager; // @synthesize updateManager=_updateManager;
@property(nonatomic) _Bool currentUpdateSessionIsForced; // @synthesize currentUpdateSessionIsForced=_currentUpdateSessionIsForced;
@property(retain, nonatomic) VSUserAccountPersistentContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) VSRemoteNotifier *remoteNotifier; // @synthesize remoteNotifier=_remoteNotifier;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
- (void)updateManagerDidFinish:(id)arg1;	// IMP=0x0000000000037033
- (void)updateManager:(id)arg1 updateRequestDidFinish:(id)arg2;	// IMP=0x0000000000036c68
- (id)_predicateForQueryRequestWithOptions:(long long)arg1;	// IMP=0x000000000003683c
- (_Bool)_isValidForUpdateQueryForCurrentTask:(id)arg1;	// IMP=0x00000000000366b6
- (_Bool)_isValidForUpdateQueryForCurrentTask;	// IMP=0x0000000000036668
- (id)_securityTaskForCurrentConnection;	// IMP=0x00000000000365f4
- (id)_userAccountForPersistentUserAccount:(id)arg1;	// IMP=0x0000000000035a0b
- (id)_legacySubscriptionInfoForUserAccount:(id)arg1;	// IMP=0x00000000000357e4
- (id)_legacySubscriptionForUserAccount:(id)arg1;	// IMP=0x0000000000035499
- (id)_userAccountForLegacySubscription:(id)arg1;	// IMP=0x00000000000352b2
- (void)_populatePersistentUserAccount:(id)arg1 withUserAccount:(id)arg2;	// IMP=0x0000000000034fa4
- (long long)_deviceCategoryFromDeviceType:(unsigned long long)arg1;	// IMP=0x0000000000034f92
- (void)_queryPersistentUserAccountsWithOptions:(long long)arg1 predicate:(id)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000034a48
- (void)_queryUserAccountsWithOptions:(long long)arg1 predicate:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000034658
- (void)_deleteUserAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033ea3
- (void)_insertUserAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003370c
- (void)resetTimer;	// IMP=0x0000000000032ca0
- (void)_update;	// IMP=0x00000000000327ae
- (void)removeSubscriptions:(id)arg1;	// IMP=0x0000000000032447
- (void)registerSubscription:(id)arg1;	// IMP=0x00000000000323f9
- (void)fetchActiveSubscriptionsWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000031b41
- (void)insertLegacySubscription:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000031ac6
- (void)forceUpdateUserAccountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000003185f
- (void)deleteUserAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000316bf
- (void)updateUserAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000030baa
- (void)queryUserAccountsWithOptions:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000030b2c
- (id)init;	// IMP=0x0000000000030912

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


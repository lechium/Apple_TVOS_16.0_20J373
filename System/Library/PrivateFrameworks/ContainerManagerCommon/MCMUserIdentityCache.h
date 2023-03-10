//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMUserIdentity, NSDictionary, NSHashTable, NSMutableDictionary, NSSet, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface MCMUserIdentityCache : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_flushQueue;	// 16 = 0x10
    NSObject<OS_xpc_object> *_listener;	// 24 = 0x18
    _Bool _cacheInvalid;	// 32 = 0x20
    NSDictionary *_lock_bundleToDataSeparatedIdentitiesMap;	// 40 = 0x28
    NSDictionary *_lock_personaUniqueStringToUserIdentityMap;	// 48 = 0x30
    NSDictionary *_lock_personaIDToUserIdentityMap;	// 56 = 0x38
    MCMUserIdentity *_lock_userIdentityForPersonalPersona;	// 64 = 0x40
    MCMUserIdentity *_lock_userIdentityForUnspecificPersona;	// 72 = 0x48
    NSMutableDictionary *_lock_managedPathRegistryForUserIdentity;	// 80 = 0x50
    NSMutableDictionary *_lock_libraryRepairForUserIdentity;	// 88 = 0x58
    NSSet *_previousUserIdentities;	// 96 = 0x60
    NSHashTable *_observers;	// 104 = 0x68
    unsigned long long _savedGeneration;	// 112 = 0x70
}

+ (id)globalSystemUserIdentity;	// IMP=0x001000000000ea91
+ (id)globalBundleUserIdentity;	// IMP=0x001000000000ea36
+ (_Bool)personasAreSupported;	// IMP=0x001000000000ea03
+ (id)defaultUserIdentity;	// IMP=0x001000000000e9a8
- (void).cxx_destruct;	// IMP=0x000000000000e8aa
@property(nonatomic) unsigned long long savedGeneration; // @synthesize savedGeneration=_savedGeneration;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) _Bool cacheInvalid; // @synthesize cacheInvalid=_cacheInvalid;
@property(retain, nonatomic) NSSet *previousUserIdentities; // @synthesize previousUserIdentities=_previousUserIdentities;
@property(readonly, nonatomic) NSMutableDictionary *lock_libraryRepairForUserIdentity; // @synthesize lock_libraryRepairForUserIdentity=_lock_libraryRepairForUserIdentity;
@property(readonly, nonatomic) NSMutableDictionary *lock_managedPathRegistryForUserIdentity; // @synthesize lock_managedPathRegistryForUserIdentity=_lock_managedPathRegistryForUserIdentity;
- (void)_notifyObserversOfChangesWithUserIdentities:(id)arg1;	// IMP=0x000000000000e05a
- (void)_lock_flushAndRepopulateWithUserIdentities:(id)arg1;	// IMP=0x000000000000dabc
- (void)_lock_flush;	// IMP=0x000000000000d974
- (void)_lock_resync;	// IMP=0x000000000000d934
- (id)_lock_userIdentityForCurrentUserWithPersonaUniqueString:(id)arg1;	// IMP=0x000000000000d703
- (id)_lock_userIdentitiesForBundleIdentifier:(id)arg1;	// IMP=0x000000000000d5c1
@property(readonly, nonatomic) MCMUserIdentity *lock_userIdentityForUnspecificPersona; // @synthesize lock_userIdentityForUnspecificPersona=_lock_userIdentityForUnspecificPersona;
@property(readonly, nonatomic) MCMUserIdentity *lock_userIdentityForPersonalPersona; // @synthesize lock_userIdentityForPersonalPersona=_lock_userIdentityForPersonalPersona;
@property(readonly, nonatomic) NSDictionary *lock_personaIDToUserIdentityMap; // @synthesize lock_personaIDToUserIdentityMap=_lock_personaIDToUserIdentityMap;
@property(readonly, nonatomic) NSDictionary *lock_personaUniqueStringToUserIdentityMap; // @synthesize lock_personaUniqueStringToUserIdentityMap=_lock_personaUniqueStringToUserIdentityMap;
@property(readonly, nonatomic) NSDictionary *lock_bundleToDataSeparatedIdentitiesMap; // @synthesize lock_bundleToDataSeparatedIdentitiesMap=_lock_bundleToDataSeparatedIdentitiesMap;
- (id)libraryRepairForUserIdentity:(id)arg1;	// IMP=0x000000000000d206
- (id)managedUserPathRegistryForUserIdentity:(id)arg1;	// IMP=0x000000000000d0b5
- (void)removeObserver:(id)arg1;	// IMP=0x000000000000cfdd
- (void)addObserver:(id)arg1;	// IMP=0x000000000000cf05
- (void)flushAndRepopulateWithUserIdentities:(id)arg1;	// IMP=0x000000000000ce8f
- (id)userIdentityForLegacyMobileUser;	// IMP=0x000000000000ce34
- (id)userIdentityForCurrentContext;	// IMP=0x000000000000cd77
- (id)personaUniqueStringForCurrentContext;	// IMP=0x000000000000cd44
- (id)globalSystemUserIdentity;	// IMP=0x000000000000ccff
- (id)globalBundleUserIdentity;	// IMP=0x000000000000ccba
- (id)defaultUserIdentity;	// IMP=0x000000000000cc75
- (void)forEachAccessibleUserIdentitySynchronouslyExecuteBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000cb55
- (id)allAccessibleUserIdentities;	// IMP=0x000000000000c7fd
- (void)flush;	// IMP=0x000000000000c78e
- (id)userIdentityWithPersonaID:(unsigned int)arg1;	// IMP=0x000000000000c50e
- (id)userIdentityForPersonalPersonaWithPOSIXUser:(id)arg1;	// IMP=0x000000000000c3c3
- (id)unspecificUserIdentity;	// IMP=0x000000000000c344
- (id)userIdentityForPersonalPersona;	// IMP=0x000000000000c2a6
- (id)userIdentityForClient:(struct container_client *)arg1 error:(id *)arg2;	// IMP=0x000000000000c135
- (id)userIdentityForPersonaUniqueString:(id)arg1 POSIXUser:(id)arg2;	// IMP=0x000000000000be54
- (id)userIdentityForCurrentUserWithPersonaUniqueString:(id)arg1;	// IMP=0x000000000000bc6c
- (id)userIdentitiesForBundleIdentifier:(id)arg1;	// IMP=0x000000000000bba7
- (void)_refreshFromUserManagementIfNecessary;	// IMP=0x000000000000bb76
- (id)init;	// IMP=0x000000000000ba5e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


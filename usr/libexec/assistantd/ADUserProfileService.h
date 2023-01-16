//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSSet, NSString, SAUserProfile;
@protocol OS_dispatch_queue;

@interface ADUserProfileService : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    SAUserProfile *;	// 16 = 0x10
    _Bool _isFetchingProfileNames;	// 24 = 0x18
    NSSet *_localUserProfileNames;	// 32 = 0x20
    NSMutableSet *_homeUserProfileNames;	// 40 = 0x28
    NSMutableSet *_namesToDelete;	// 48 = 0x30
    NSMutableDictionary *_userProfiles;	// 56 = 0x38
    _Bool _needsProfileNameSync;	// 64 = 0x40
}

+ (id)sharedService;	// IMP=0x00200000001caf2d
- (void).cxx_destruct;	// IMP=0x00200000001cd431
- (void)resetAllProfiles:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001cd2f5
- (void)mergeHomeProfileNamesWithNamesFromCloud:(id)arg1;	// IMP=0x00100000001cd1d2
- (void)refreshUserProfilesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001cd0b3
- (id)getLocalProfileNames;	// IMP=0x00100000001ccfc0
- (id)getUserProfileAceCommand;	// IMP=0x00100000001ccec1
- (void)getUserProfileDictionariesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001ccb65
- (_Bool)userProfileExistsWithiCloudAltDSID:(id)arg1;	// IMP=0x00100000001cc803
- (id)dictionaryFromPBSUserProfile:(id)arg1;	// IMP=0x00100000001cc64b
- (void)_setUserProfileAceCommand;	// IMP=0x00100000001cc5db
- (void)_updateUserProfilesFromSnapshot:(id)arg1;	// IMP=0x00100000001cc175
- (void)_postProfileUpdateNotificationsIfNeeded:(id)arg1;	// IMP=0x00100000001cbb1e
- (void)userProfileManagerDidUpdate:(id)arg1;	// IMP=0x00100000001cb901
- (void)_loadProfileNamesFromCloudWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001cb7f4
- (void)_addProfileNamesToSharedStore:(CDUnknownBlockType)arg1;	// IMP=0x00100000001cb7ee
- (void)syncProfileNamesToCloudWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001cb5df
- (void)syncUserProfileNamesIfNeeded;	// IMP=0x00100000001cb31d
- (id)_init;	// IMP=0x00100000001cb019
- (id)init;	// IMP=0x00100000001caf92

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


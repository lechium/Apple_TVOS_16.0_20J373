//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PBSSuggestedUserProfileManager, TVPeoplePickerUser, TVSUIUserProfilePictureService;

@interface TVPeoplePickerDataSource : NSObject
{
    NSArray *_users;	// 8 = 0x8
    NSArray *_suggestedUsers;	// 16 = 0x10
    TVPeoplePickerUser *_currentUser;	// 24 = 0x18
    long long _currentUserIndex;	// 32 = 0x20
    TVSUIUserProfilePictureService *_profilePictureService;	// 40 = 0x28
    PBSSuggestedUserProfileManager *_suggestedUserProfileManager;	// 48 = 0x30
    NSArray *_profilePictureObservers;	// 56 = 0x38
    NSArray *_suggestedProfilePictureObservers;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000060a0
@property(retain, nonatomic) NSArray *suggestedProfilePictureObservers; // @synthesize suggestedProfilePictureObservers=_suggestedProfilePictureObservers;
@property(retain, nonatomic) NSArray *profilePictureObservers; // @synthesize profilePictureObservers=_profilePictureObservers;
@property(retain, nonatomic) PBSSuggestedUserProfileManager *suggestedUserProfileManager; // @synthesize suggestedUserProfileManager=_suggestedUserProfileManager;
@property(retain, nonatomic) TVSUIUserProfilePictureService *profilePictureService; // @synthesize profilePictureService=_profilePictureService;
@property(nonatomic) long long currentUserIndex; // @synthesize currentUserIndex=_currentUserIndex;
@property(retain, nonatomic) TVPeoplePickerUser *currentUser; // @synthesize currentUser=_currentUser;
@property(readonly, nonatomic) NSArray *suggestedUsers; // @synthesize suggestedUsers=_suggestedUsers;
@property(readonly, copy, nonatomic) NSArray *users; // @synthesize users=_users;
- (void)_fetchProfilePhotosForSuggestedUsers;	// IMP=0x0000000000005ad0
- (void)_fetchProfilePhotosForSingedInUsers;	// IMP=0x00000000000056e0
- (void)_updateSuggestedUsersWaitUntilDone:(_Bool)arg1;	// IMP=0x0000000000005370
- (void)_fetchUsersWaitUntilDone:(_Bool)arg1;	// IMP=0x0000000000004b70
- (void)suggestedUserProfileManagerDidUpdate:(id)arg1;	// IMP=0x0000000000004aa0
- (void)userProfileManagerDidUpdate:(id)arg1;	// IMP=0x0000000000004970
- (void)dealloc;	// IMP=0x0000000000004630
- (id)init;	// IMP=0x00000000000043b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


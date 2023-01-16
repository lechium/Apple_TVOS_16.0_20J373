//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class NSString, NSURL, TVSUIUserPickerSelectedUserController, TVSettingsHomeSetupController, TVSettingsIMAccountsFacade, TVSettingsITMSSandboxFacade, TVSettingsUserProfileListFacade, _TtC10TVSettings31TVSettingsTapToAddUserPresenter;

@interface TVSettingsUserProfilesViewController : TSKViewController
{
    _Bool _hideAppleConnectItem;	// 8 = 0x8
    NSURL *_lastDeepLinkURL;	// 16 = 0x10
    TVSettingsUserProfileListFacade *_userProfilesFacade;	// 24 = 0x18
    TVSUIUserPickerSelectedUserController *_selectedUserController;	// 32 = 0x20
    TVSettingsITMSSandboxFacade *_sandboxFacade;	// 40 = 0x28
    TVSettingsIMAccountsFacade *_imAccountsFacade;	// 48 = 0x30
    TVSettingsHomeSetupController *_homeSetupController;	// 56 = 0x38
    _TtC10TVSettings31TVSettingsTapToAddUserPresenter *_tapToAddUserPresenter;	// 64 = 0x40
}

+ (id)_addUserDeepLinkKeyForSuggestedUser:(id)arg1;	// IMP=0x0020000000027e96
+ (id)_addGuestUserDeepLinkKey;	// IMP=0x0010000000027e1a
+ (id)_addPrimaryUserDeepLinkKey;	// IMP=0x0010000000027d9e
+ (id)_deepLinkKeyForUser:(id)arg1;	// IMP=0x0010000000027a49
- (void).cxx_destruct;	// IMP=0x0020000000028188
@property(retain, nonatomic) _TtC10TVSettings31TVSettingsTapToAddUserPresenter *tapToAddUserPresenter; // @synthesize tapToAddUserPresenter=_tapToAddUserPresenter;
@property(retain, nonatomic) TVSettingsHomeSetupController *homeSetupController; // @synthesize homeSetupController=_homeSetupController;
@property(retain, nonatomic) TVSettingsIMAccountsFacade *imAccountsFacade; // @synthesize imAccountsFacade=_imAccountsFacade;
@property(retain, nonatomic) TVSettingsITMSSandboxFacade *sandboxFacade; // @synthesize sandboxFacade=_sandboxFacade;
@property(nonatomic) _Bool hideAppleConnectItem; // @synthesize hideAppleConnectItem=_hideAppleConnectItem;
@property(retain, nonatomic) TVSUIUserPickerSelectedUserController *selectedUserController; // @synthesize selectedUserController=_selectedUserController;
- (id);	// IMP=0x00100000000280af
@property(retain, nonatomic) TVSettingsUserProfileListFacade *userProfilesFacade; // @synthesize userProfilesFacade=_userProfilesFacade;
@property(copy, nonatomic) NSURL *lastDeepLinkURL; // @synthesize lastDeepLinkURL=_lastDeepLinkURL;
- (_Bool)shouldHideExpanse;	// IMP=0x0010000000028006
- (id)_location;	// IMP=0x00100000000275c5
- (void)_signOutSandboxAccount:(id)arg1;	// IMP=0x00100000000272a8
- (void)_signIntoSandboxAccount:(id)arg1;	// IMP=0x0010000000027288
- (id)_sandboxAccount;	// IMP=0x0010000000026ba9
- (void)_handleSeedRecognizer:(id)arg1;	// IMP=0x0010000000026b6b
- (id)_appleConnect;	// IMP=0x001000000002698e
- (void)_menuPressed:(id)arg1;	// IMP=0x0010000000026944
- (void)_startTapToAddFlowWithPresenter:(id)arg1;	// IMP=0x00100000000268d8
- (void)_addUserWithProfileType:(long long)arg1;	// IMP=0x00100000000267be
- (void)_addSuggestedUser:(id)arg1;	// IMP=0x00100000000266a7
- (void)_addGuestUser:(id)arg1;	// IMP=0x0010000000026590
- (void)_addPrimaryUser:(id)arg1;	// IMP=0x0010000000026570
- (void)_switchUser:(id)arg1;	// IMP=0x0010000000026475
- (void)_toggleExpanse:(id)arg1;	// IMP=0x001000000002642a
- (id)_deviceAccountsGroup;	// IMP=0x0010000000025eae
- (id)_suggestedUserGroup;	// IMP=0x0010000000025bf5
- (id)_guestUsersGroup;	// IMP=0x0010000000025660
- (id)_primaryUserGroup;	// IMP=0x001000000002510c
- (id)_currentUserGroup;	// IMP=0x0010000000024ec9
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0010000000024e87
- (void)tapToAddUserPresenterDidSuppressSuggestion:(id)arg1;	// IMP=0x0010000000024df7
- (void)tapToAddUserPresenterFinishHomeKitSetup:(id)arg1;	// IMP=0x0010000000024db4
- (void)tapToAddUserPresenterManualSignInTriggered:(id)arg1;	// IMP=0x0010000000024c24
- (id)loadSettingGroups;	// IMP=0x0010000000024952
- (void)viewDidLoad;	// IMP=0x0010000000024805
- (id)initWithUserProfilesFacade:(id)arg1;	// IMP=0x0010000000024744

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

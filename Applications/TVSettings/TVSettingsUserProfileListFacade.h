//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, AMSBag, CDPContext, CDPTVUIController, FLTVSettingsController, NSArray, NSDictionary, NSSet, NSString, PBSIgnoreUserProfileAccountNotificationsAssertion, PBSSuggestedUserProfileManager, PBSUserProfileManager, RBSAssertion, TVSettingsUser, UMUserPersonaContext;

@interface TVSettingsUserProfileListFacade : NSObject
{
    _Bool _isNewPersona;	// 8 = 0x8
    TVSettingsUser *_primaryUser;	// 16 = 0x10
    NSArray *_guestUsers;	// 24 = 0x18
    NSArray *_suggestedUsers;	// 32 = 0x20
    TVSettingsUser *_selectedUser;	// 40 = 0x28
    PBSUserProfileManager *_profileManager;	// 48 = 0x30
    PBSSuggestedUserProfileManager *_suggestedUserProfileManager;	// 56 = 0x38
    FLTVSettingsController *_followUpController;	// 64 = 0x40
    AMSBag *_amsBag;	// 72 = 0x48
    long long _isAddingUser;	// 80 = 0x50
    NSString *_personaIdentifier;	// 88 = 0x58
    UMUserPersonaContext *_initialPersonaContext;	// 96 = 0x60
    PBSIgnoreUserProfileAccountNotificationsAssertion *_ignoreAccountNotificationAssertion;	// 104 = 0x68
    RBSAssertion *_processAssertion;	// 112 = 0x70
    NSDictionary *_usersByIdentifier;	// 120 = 0x78
    ACAccountStore *_accountStore;	// 128 = 0x80
    CDPTVUIController *_cdpUIProvider;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x002000000009684d
@property(readonly, nonatomic) TVSettingsUser *selectedUser;
@property(readonly, nonatomic) NSArray *suggestedUsers; // @synthesize suggestedUsers=_suggestedUsers;
@property(readonly, nonatomic) NSArray *guestUsers; // @synthesize guestUsers=_guestUsers;
@property(readonly, nonatomic) TVSettingsUser *primaryUser; // @synthesize primaryUser=_primaryUser;
- (void)signInFlowController:(id)arg1 presentGenericTermsUIForAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000948db
- (void)suggestedUserProfileManagerDidUpdate:(id)arg1;	// IMP=0x0010000000094837
- (void)userProfileManagerDidUpdate:(id)arg1;	// IMP=0x0010000000094793
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000009443e
- (void)suppressSuggestedUserWithIdentifier:(id)arg1;	// IMP=0x0010000000094379
- (void)switchSelectedUserToUser:(id)arg1;	// IMP=0x0010000000093f38
- (void)addGuestUserManuallyWithPresentingViewController:(id)arg1;	// IMP=0x00100000000937a8
- (void)addPrimaryUserManuallyWithPresentingViewController:(id)arg1;	// IMP=0x001000000009341c
@property(readonly, nonatomic) _Bool isAddingGuestUser;
@property(readonly, nonatomic) _Bool isAddingPrimaryUser;
@property(readonly, nonatomic) NSArray *allUsers;
- (void)dealloc;	// IMP=0x001000000009327b
- (id)init;	// IMP=0x0010000000093267
- (id)initWithFollowUpController:(id)arg1;	// IMP=0x0010000000092937

// Remaining properties
@property(nonatomic) _Bool backgroundDataclassEnablement;
@property(retain, nonatomic) CDPContext *cdpContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isFastSignInEnabled) _Bool fastSignInEnabled;
@property(nonatomic) unsigned long long findMyActivationAction;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSSet *requiredTerms;
@property(nonatomic) _Bool shouldStashLoginResponse;
@property(nonatomic) _Bool skipCDPEnablement;
@property(nonatomic) _Bool skipDataclassEnablement;
@property(readonly) Class superclass;

@end

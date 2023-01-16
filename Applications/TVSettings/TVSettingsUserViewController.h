//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class FLTVSettingsAccountItemsController, NSString, NSURL, TSKSettingItem, TVApplicationController, TVSettingsITMSFacade, TVSettingsPreferenceFacade, TVSettingsUser, TVSettingsUserProfileFacade, _TtC10TVSettings34TVSettingsTapToRepairUserPresenter;

@interface TVSettingsUserViewController : TSKViewController
{
    _Bool _shouldPresentManageSubscriptionsWhenURLBagLoads;	// 8 = 0x8
    NSURL *_lastDeepLinkURL;	// 16 = 0x10
    TVSettingsITMSFacade *_itmsFacade;	// 24 = 0x18
    TVSettingsUserProfileFacade *_userProfileFacade;	// 32 = 0x20
    TVSettingsUser *_user;	// 40 = 0x28
    TVApplicationController *_subscriptionsAppController;	// 48 = 0x30
    TSKSettingItem *_editNameItem;	// 56 = 0x38
    TSKSettingItem *_asnPaidItem;	// 64 = 0x40
    TSKSettingItem *_asnFreeItem;	// 72 = 0x48
    TVSettingsPreferenceFacade *_groupRecommendationsPrefsFacade;	// 80 = 0x50
    FLTVSettingsAccountItemsController *_followUpController;	// 88 = 0x58
    _TtC10TVSettings34TVSettingsTapToRepairUserPresenter *_tapToRepairUserPresenter;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000000543ea
@property(retain, nonatomic) _TtC10TVSettings34TVSettingsTapToRepairUserPresenter *tapToRepairUserPresenter; // @synthesize tapToRepairUserPresenter=_tapToRepairUserPresenter;
@property(retain, nonatomic) FLTVSettingsAccountItemsController *followUpController; // @synthesize followUpController=_followUpController;
@property(retain, nonatomic) TVSettingsPreferenceFacade *groupRecommendationsPrefsFacade; // @synthesize groupRecommendationsPrefsFacade=_groupRecommendationsPrefsFacade;
@property(nonatomic) _Bool shouldPresentManageSubscriptionsWhenURLBagLoads; // @synthesize shouldPresentManageSubscriptionsWhenURLBagLoads=_shouldPresentManageSubscriptionsWhenURLBagLoads;
@property(retain, nonatomic) TSKSettingItem *asnFreeItem; // @synthesize asnFreeItem=_asnFreeItem;
@property(retain, nonatomic) TSKSettingItem *asnPaidItem; // @synthesize asnPaidItem=_asnPaidItem;
@property(retain, nonatomic) TSKSettingItem *editNameItem; // @synthesize editNameItem=_editNameItem;
@property(retain, nonatomic) TVApplicationController *subscriptionsAppController; // @synthesize subscriptionsAppController=_subscriptionsAppController;
@property(retain, nonatomic) TVSettingsUser *user; // @synthesize user=_user;
@property(retain, nonatomic) TVSettingsUserProfileFacade *userProfileFacade; // @synthesize userProfileFacade=_userProfileFacade;
@property(retain, nonatomic) TVSettingsITMSFacade *itmsFacade; // @synthesize itmsFacade=_itmsFacade;
@property(copy, nonatomic) NSURL *lastDeepLinkURL; // @synthesize lastDeepLinkURL=_lastDeepLinkURL;
- (void)_startTapToRepairUserWithCopyStyle:(long long)arg1 needsCDPRepair:(_Bool)arg2;	// IMP=0x001000000005416a
- (void)_completeUser:(id)arg1;	// IMP=0x0010000000054151
- (void)_handleFollowUpItem:(id)arg1;	// IMP=0x0010000000053fa5
- (void)_toggleGroupRecommendationsConsent;	// IMP=0x0010000000053f2f
- (id)_manage;	// IMP=0x001000000005329b
- (void)_togglePasswordFreeSetting;	// IMP=0x00100000000531dc
- (id)_requirePassword;	// IMP=0x001000000005293e
- (void)_presentiCloudHomeScreenSyncOnAlertController;	// IMP=0x0010000000052598
- (void)_toggleiCloudHomeScreenSync:(id)arg1;	// IMP=0x001000000005240d
- (void)_enableiCloudMyPhotoStream:(id)arg1;	// IMP=0x00100000000523c2
- (void)_enableiCloudSharedAlbums:(id)arg1;	// IMP=0x0010000000052377
- (void)_enableiCloudPhotoLibrary:(id)arg1;	// IMP=0x001000000005232c
- (void)_enableSharedWithYou:(id)arg1;	// IMP=0x0010000000052326
- (id)_sharedWithYou;	// IMP=0x0010000000051ec0
- (id)_iCloudPhotoSectionValueUsingUserProfileFacade:(id)arg1;	// IMP=0x0010000000051df8
- (id)_settingItemsForNewPhotoSettingsView;	// IMP=0x0010000000051b2e
- (id)_settingItemsForInlinePhotoSettingsView;	// IMP=0x001000000005176f
- (id)_primaryiCloudOptions;	// IMP=0x0010000000051440
- (id)_appleIDs;	// IMP=0x0010000000050cd9
- (id)_followUps;	// IMP=0x0010000000050a8d
- (void)presentActionForDisplayedDeepLinkURL;	// IMP=0x001000000005099c
- (void)editingController:(id)arg1 didProvideValue:(id)arg2 forSettingItem:(id)arg3;	// IMP=0x0010000000050837
- (id)_manageSubscriptionsViewController;	// IMP=0x001000000005064e
- (void)_removeUser;	// IMP=0x001000000005024f
- (void)appController:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0010000000050098
- (void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;	// IMP=0x001000000004fff6
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000004fdb5
- (id)loadSettingGroups;	// IMP=0x001000000004fc63
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000004fc03
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000004fb70
- (void)dealloc;	// IMP=0x001000000004faa4
- (id)initWithUser:(id)arg1;	// IMP=0x001000000004f8a2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

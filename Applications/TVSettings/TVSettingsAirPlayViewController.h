//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class NSMutableSet, NSString, TSKSettingItem, TVSettingsHomeSetupController, TVSiCloudAccountManager;

@interface TVSettingsAirPlayViewController : TSKViewController
{
    TSKSettingItem *_nameItem;	// 8 = 0x8
    TVSettingsHomeSetupController *_homeSetupController;	// 16 = 0x10
    TVSiCloudAccountManager *_accountManager;	// 24 = 0x18
    NSMutableSet *_updatingResidentDevices;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000bbe53
@property(retain, nonatomic) NSMutableSet *updatingResidentDevices; // @synthesize updatingResidentDevices=_updatingResidentDevices;
@property(readonly, nonatomic) TVSiCloudAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(retain, nonatomic) TVSettingsHomeSetupController *homeSetupController; // @synthesize homeSetupController=_homeSetupController;
@property(readonly, nonatomic) TSKSettingItem *nameItem; // @synthesize nameItem=_nameItem;
- (void)editingController:(id)arg1 didProvideValue:(id)arg2 forSettingItem:(id)arg3;	// IMP=0x00100000000bbd96
- (void)_pushRoomPickerViewController;	// IMP=0x00100000000bbd76
- (void)_presentWHASetupViewController;	// IMP=0x00100000000bbd54
- (void)_presentSetAccessoryNameFailedViewControllerWithError:(id)arg1;	// IMP=0x00100000000bbc1e
- (void)_setDeviceName:(id)arg1;	// IMP=0x00100000000bb7ea
- (id)_makeDeviceNameChildViewControllerWithItem:(id)arg1;	// IMP=0x00100000000bb6de
- (void)_toggleResidenceEnabled:(id)arg1;	// IMP=0x00100000000bb481
- (id)_homeNoiCloudAccountAlertViewController;	// IMP=0x00100000000bb383
- (id)_homeNeedsUserInterentionAlertViewController;	// IMP=0x00100000000bb285
- (id)_crdViewController;	// IMP=0x00100000000bb18e
- (id)_overscanAdjustmentFormatter;	// IMP=0x00100000000bb07e
- (void)residentDevice:(id)arg1 didUpdateStatus:(unsigned long long)arg2;	// IMP=0x00100000000bb06c
- (void)residentDevice:(id)arg1 didUpdateEnabled:(_Bool)arg2;	// IMP=0x00100000000bb05a
- (void)residentDevice:(id)arg1 didUpdateName:(id)arg2;	// IMP=0x00100000000bb048
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000bad2c
- (id)loadSettingGroups;	// IMP=0x00100000000b89c9
- (void)dealloc;	// IMP=0x00100000000b88c8
- (id)initWithStyle:(long long)arg1;	// IMP=0x00100000000b875c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


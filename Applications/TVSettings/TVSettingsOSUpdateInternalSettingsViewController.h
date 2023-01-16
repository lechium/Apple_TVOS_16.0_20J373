//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class NSDictionary;

@interface TVSettingsOSUpdateInternalSettingsViewController : TSKViewController
{
    NSDictionary *_trainMap;	// 8 = 0x8
    NSDictionary *_colorMap;	// 16 = 0x10
    unsigned long long _configurationLoadingState;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000ad4f7
@property(nonatomic) unsigned long long configurationLoadingState; // @synthesize configurationLoadingState=_configurationLoadingState;
@property(retain, nonatomic) NSDictionary *colorMap; // @synthesize colorMap=_colorMap;
@property(retain, nonatomic) NSDictionary *trainMap; // @synthesize trainMap=_trainMap;
- (id)_descriptionForConfiguration:(id)arg1;	// IMP=0x00100000000ad44b
- (void)_updateVPNItem:(id)arg1;	// IMP=0x00100000000ad2db
- (void)_updateAppleConnectItem:(id)arg1;	// IMP=0x00100000000ad1cb
- (void)_toggleAdvancedSettingsItems:(id)arg1;	// IMP=0x00100000000ad18b
- (void)_setShouldShowAdvancedSettings:(_Bool)arg1;	// IMP=0x00000000000ad0b2
- (_Bool)_shouldShowAdvancedSettings;	// IMP=0x00100000000ad005
- (void)_clearNumericSettingItem:(id)arg1;	// IMP=0x00100000000acfe2
- (void)_configurationDidChange:(id)arg1;	// IMP=0x00100000000acf8c
- (void)_configurationWillChange:(id)arg1;	// IMP=0x00100000000acf59
- (void)_fetchCurrentConfiguration;	// IMP=0x00100000000acd1c
- (void)_fetchBackupLocalConfigurations;	// IMP=0x00100000000acc91
- (id)loadSettingGroups;	// IMP=0x00100000000aba86
- (void)viewDidLoad;	// IMP=0x00100000000ab90f

@end


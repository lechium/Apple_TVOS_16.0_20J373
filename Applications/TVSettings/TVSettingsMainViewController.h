//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class FLTVSettingsController, TSKBundleLoader;

@interface TVSettingsMainViewController : TSKViewController
{
    TSKBundleLoader *_developerBundleLoader;	// 8 = 0x8
    FLTVSettingsController *_followUpController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000029cb2
@property(retain, nonatomic) FLTVSettingsController *followUpController; // @synthesize followUpController=_followUpController;
@property(retain, nonatomic) TSKBundleLoader *developerBundleLoader; // @synthesize developerBundleLoader=_developerBundleLoader;
- (id)_accessibilitySettingsBundlePath;	// IMP=0x0010000000029c47
- (id)_supervisionDescription;	// IMP=0x0010000000029a41
- (void)_updateDeveloperBundleLoader;	// IMP=0x00100000000298bd
- (id)_airPlayViewController;	// IMP=0x001000000002979a
- (void)_handleCFUAction:(id)arg1;	// IMP=0x001000000002977a
- (void)_sleepNow:(id)arg1;	// IMP=0x001000000002972c
- (id)loadSettingGroups;	// IMP=0x00100000000286a0
- (id)title;	// IMP=0x001000000002868f
- (void)dealloc;	// IMP=0x0010000000028645
- (id)initWithStyle:(long long)arg1;	// IMP=0x001000000002859c

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class TSKSettingItem, TVPAudioRoutingController;

@interface TVSettingsAudioVideoViewController : TSKViewController
{
    TVPAudioRoutingController *_routingController;	// 8 = 0x8
    TSKSettingItem *_wirelessAudioSyncItem;	// 16 = 0x10
    TSKSettingItem *_displayAdjustmentItem;	// 24 = 0x18
}

+ (_Bool)_hardwareSupportsAC3Decode;	// IMP=0x00400000000462a3
+ (id)_nativeModeSwitchingOptionsFormatter;	// IMP=0x0010000000045e90
+ (id)_volumeFormatter;	// IMP=0x0010000000045d3e
+ (id)_subtitleOptionFormatter;	// IMP=0x0010000000045c68
+ (id)_audioLanguageFormatter;	// IMP=0x0010000000045bc0
+ (id)_multiChannelAudioFormatter;	// IMP=0x0010000000045982
- (void).cxx_destruct;	// IMP=0x00200000000467d2
@property(retain, nonatomic) TSKSettingItem *displayAdjustmentItem; // @synthesize displayAdjustmentItem=_displayAdjustmentItem;
@property(retain, nonatomic) TSKSettingItem *wirelessAudioSyncItem; // @synthesize wirelessAudioSyncItem=_wirelessAudioSyncItem;
- (void)editingController:(id)arg1 didProvideValue:(id)arg2 forSettingItem:(id)arg3;	// IMP=0x00100000000466c8
- (void)_promptResetVideoSettings;	// IMP=0x00100000000462ee
- (_Bool)_areDisplayFiltersEnabled;	// IMP=0x0010000000046259
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000045f5a
- (id)loadSettingGroups;	// IMP=0x00100000000435c7
- (void)dealloc;	// IMP=0x00100000000434de
- (id)initWithStyle:(long long)arg1;	// IMP=0x0010000000043370

@end


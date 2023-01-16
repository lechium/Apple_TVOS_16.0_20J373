//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AccessibilityAudit/AXAuditDeviceSettingsManager.h>

@class NSHashTable;

@interface XADAuditDeviceSettingsManager : AXAuditDeviceSettingsManager
{
    NSHashTable *__notificationContext;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000008f97
@property(retain, nonatomic) NSHashTable *_notificationContext; // @synthesize _notificationContext=__notificationContext;
- (void)updateSetting:(id)arg1 withNumberValue:(id)arg2;	// IMP=0x0010000000008812
- (long long)_fontCategoryIndexFromValue:(id)arg1;	// IMP=0x001000000000873c
- (id)_fontValueFromCategoryIndex:(long long)arg1;	// IMP=0x001000000000867f
- (void)updateCurrentValueForSetting:(id)arg1 postNotificationIfChanged:(_Bool)arg2;	// IMP=0x001000000000819d
- (id)_fontCategories;	// IMP=0x00100000000080d9
- (void)startObservingChanges;	// IMP=0x0010000000007baf
- (void)dealloc;	// IMP=0x0010000000007b71
- (void)_settingDidChangeDifferentiateWithoutColor:(id)arg1;	// IMP=0x0010000000007b55
- (void)_settingDidChangeGrayscale:(id)arg1;	// IMP=0x0010000000007b39
- (void)_settingDidChangeButtonShapes:(id)arg1;	// IMP=0x0010000000007b1d
- (void)_settingDidChangeOnOffLabels:(id)arg1;	// IMP=0x0010000000007b01
- (void)_settingDidChangeBoldFonts:(id)arg1;	// IMP=0x0010000000007ae5
- (void)_settingDidChangeInvertColors:(id)arg1;	// IMP=0x0010000000007ac9
- (void)_settingDidChange:(id)arg1;	// IMP=0x0010000000007a78
- (void)stopObservingChanges;	// IMP=0x0010000000007a37
- (id)_platformSettings;	// IMP=0x001000000000791d
- (id)_platformDefaultSettings;	// IMP=0x0010000000007888
- (void)setHostAPIVersion:(long long)arg1;	// IMP=0x00100000000077cf
- (id)settingsToCache;	// IMP=0x00100000000076c9
- (id)init;	// IMP=0x0010000000007605

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomePodSettingsDaemon/NSObject-Protocol.h>

@class HMSettings, HPSSetting, HPSettingAdapterManager, NSString;

@protocol HPSettingAdapterManagerDelegate <NSObject>
- (void)settingAdapterManagerHomeKitStatusChanged:(HPSettingAdapterManager *)arg1;
- (void)settingAdapterManager:(HPSettingAdapterManager *)arg1 didFinishInitialSync:(_Bool)arg2;
- (void)settingAdapterManager:(HPSettingAdapterManager *)arg1 didChangeSelectedLanguage:(NSString *)arg2 recognitionLanguage:(NSString *)arg3 gender:(long long)arg4 name:(NSString *)arg5;
- (void)settingAdapterManager:(HPSettingAdapterManager *)arg1 didUpdateHH2State:(_Bool)arg2;
- (void)settingAdapterManager:(HPSettingAdapterManager *)arg1 didEnableHKAirplayAccessControlSetting:(_Bool)arg2;
- (void)settingAdapterManager:(HPSettingAdapterManager *)arg1 didEnableLocationServices:(_Bool)arg2;
- (void)settingAdapterManager:(HPSettingAdapterManager *)arg1 didUpdateSoundCheckEnabled:(_Bool)arg2;
- (void)settingAdapterManager:(HPSettingAdapterManager *)arg1 didUpdateOwnerSettings:(HMSettings *)arg2;
- (void)settingAdapterManager:(HPSettingAdapterManager *)arg1 handleDeviceAttributeChanged:(NSString *)arg2 withContext:(id)arg3;
- (void)settingAdapterManager:(HPSettingAdapterManager *)arg1 handleSettingDidChange:(HPSSetting *)arg2 legacyValue:(id)arg3;
@end

